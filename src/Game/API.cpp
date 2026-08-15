/******************** API ********************/
// Native API for interfacing with game files.
// Has functionality not included in Lunar Tear's API:
// - Adding/removing items from inventory
//
// TODO:
// - Test AddPlayerItem() and RemovePlayerItem()
//
/*********************************************/

#include "API.h"

// Private
namespace{
    // Addresses
    constexpr uintptr_t ItemDataRVA         = 0x435B560;
    constexpr uintptr_t AddPlayerItemRVA    = 0x3B4B60;
    constexpr uintptr_t RemovePlayerItemRVA = 0x3B6DB0;

    // Defining in-game functions
    using AddPlayerItemFn = uint64_t(*)(void*, uint32_t, uint8_t);
    using RemovePlayerItemFn = uint64_t(*)(void*, uint32_t, uint8_t);

    // Attaching functions to addresses
    uintptr_t GetAddress(uintptr_t rva){
        return LT::API()->game->processBaseAddress + rva;
    }

    void* GetItemData(){
        return reinterpret_cast<void*>(GetAddress(ItemDataRVA));
    }

    AddPlayerItemFn GetAddPlayerItem(){
        return reinterpret_cast<AddPlayerItemFn>(GetAddress(AddPlayerItemRVA));
    }

    RemovePlayerItemFn GetRemovePlayerItem(){
        return reinterpret_cast<RemovePlayerItemFn>(GetAddress(RemovePlayerItemRVA));
    }
}

// Public
namespace Game::API{
    uint32_t AddPlayerItem(uint32_t itemID, uint8_t count){
        return static_cast<uint32_t>(GetAddPlayerItem()(GetItemData(), itemID, count));
    }

    uint32_t RemovePlayerItem(uint32_t itemID, uint8_t count){
        return static_cast<uint32_t>(GetRemovePlayerItem()(GetItemData(), itemID, count));
    }
}