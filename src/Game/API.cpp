/******************** API ********************/
// Native API for interfacing with game files.
// Has functionality not included in Lunar Tear's prepackaged API:
// - Adding/removing items from inventory
// - Granting/upgrading weapons
// - Granting magic abilities
// - Setting questline flags
//
/*********************************************/

#include "API.h"

// Private
namespace{
    /* ADDRESSES */

    constexpr uintptr_t GameState_addr = 0x4348610;

    // Items
    constexpr uintptr_t ItemData_addr         = 0x435B560;
    constexpr uintptr_t AddPlayerItem_addr    = 0x3B4B60;
    constexpr uintptr_t RemovePlayerItem_addr = 0x3B6DB0;

    // Weapons
    constexpr uintptr_t SetWeaponLevel_addr  = 0x3BE340;
    constexpr uintptr_t GetWeaponIndex_addr  = 0x3B6830;
    constexpr uintptr_t GetWeaponLevel_addr  = 0x3B6880;

    // Words
    constexpr uintptr_t HasWord_addr      = 0x3C6470;
    constexpr uintptr_t SetWord_addr      = 0x3C6B10;
    //constexpr uintptr_t calculateWordDrop = 0x41AC80;
    //constexpr uintptr_t wordDropWrapper   = 0x41AC70;
    //constexpr uintptr_t trySpawnWordDrop  = 0x2A40A0;
    //constexpr uintptr_t spawnWordDrop     = 0x373200;

    // Magic
    constexpr uintptr_t HasMagic_addr      = 0x3B0C20;
    constexpr uintptr_t SetMagicState_addr = 0x3BD940;

    // Flags
    constexpr uintptr_t IsGameFlag_addr  = 0x3B0B90;
    constexpr uintptr_t SetGameFlag_addr = 0x3B0240;


    /* DECLARATIONS */

    // Items
    using AddPlayerItem_funct = uint64_t(*)(void*, uint32_t, uint8_t);
    using RemovePlayerItem_funct = uint64_t(*)(void*, uint32_t, uint8_t);

    // Weapons
    using GetWeaponLevel_funct = int32_t(*)(PlayerSaveData*, uint32_t);
    using SetWeaponLevel_funct = void(*)(PlayerSaveData*, uint32_t, int);

    // Words
    using HasWord_funct = bool(*)(void*, uint32_t);
    using SetWord_funct = void(*)(void*, uint32_t, uint8_t);

    // Magic
    using HasMagic_funct = uint64_t(*)(void*, uint32_t);
    using SetMagic_funct = void(*)(PlayerSaveData*, uint32_t, uint8_t);

    // Flags
    using IsGameFlag_funct = uint64_t(*)(void*, uint32_t);
    using SetGameFlag_funct = void(*)(void*, uint32_t);


    /* DEFINITIONS */

    uintptr_t GetAddress(uintptr_t rva){
        return LT::API()->game->processBaseAddress + rva;
    }

    void* GetGameState(){
        return reinterpret_cast<void*>(GetAddress(GameState_addr));
    }

    // Items
    void* Get_ItemData(){
        return reinterpret_cast<void*>(GetAddress(ItemData_addr));
    }

    AddPlayerItem_funct Get_AddPlayerItem(){
        return reinterpret_cast<AddPlayerItem_funct>(GetAddress(AddPlayerItem_addr));
    }

    RemovePlayerItem_funct Get_RemovePlayerItem(){
        return reinterpret_cast<RemovePlayerItem_funct>(GetAddress(RemovePlayerItem_addr));
    }

    // Weapons
    GetWeaponLevel_funct Get_GetWeaponLevel(){
        return GetWeaponLevel_funct(GetAddress(GetWeaponLevel_addr));
    }

    SetWeaponLevel_funct Get_SetWeaponLevel(){
        return SetWeaponLevel_funct(GetAddress(SetWeaponLevel_addr));
    }

    // Words
    HasWord_funct Get_HasWord(){
        return HasWord_funct(GetAddress(HasWord_addr));
    }

    SetWord_funct Get_SetWord(){
        return SetWord_funct(GetAddress(SetWord_addr));
    }

    // Magic
    HasMagic_funct Get_HasMagic(){
        return HasMagic_funct(GetAddress(HasMagic_addr));
    }

    SetMagic_funct Get_SetMagic(){
        return SetMagic_funct(GetAddress(SetMagicState_addr));
    }

    // Flags
    IsGameFlag_funct Get_IsGameFlag(){
        return IsGameFlag_funct(GetAddress(IsGameFlag_addr));
    }

    SetGameFlag_funct Get_SetGameFlag(){
        return SetGameFlag_funct(GetAddress(SetGameFlag_addr));
    }
}

// Public
namespace Game::API{
    // Items
    uint32_t AddPlayerItem(uint32_t itemID, uint8_t count){
        return static_cast<uint32_t>(Get_AddPlayerItem()(Get_ItemData(), itemID, count));
    }

    uint32_t RemovePlayerItem(uint32_t itemID, uint8_t count){
        return static_cast<uint32_t>(Get_RemovePlayerItem()(Get_ItemData(), itemID, count));
    }

    // Weapons
    int32_t GetWeaponLevel(uint32_t weaponID){
        if(weaponID >= 64){
            return -1;
        }

        return Get_GetWeaponLevel()(
            Game::Save::GetPlayerData(),
            weaponID
        );
    }
    
    bool SetWeaponLevel(uint32_t weaponID, uint32_t level){
        if(weaponID >= 64 || level > 3){
            return false;
        }

        Get_SetWeaponLevel()(Game::Save::GetPlayerData(), weaponID, static_cast<int>(level));
        return true;
    }

    // Words
    bool HasWord(uint32_t wordID){
        return Get_HasWord()(nullptr, wordID);
    }

    bool SetWord(uint32_t wordID, bool enabled){
        if(wordID >= 128){
            return false;
        }

        Get_SetWord()(nullptr, wordID, enabled ? 1 : 0);
        return true;
    }

    // Magic
    bool HasMagic(uint32_t magicID){
        return Get_HasMagic()(nullptr, magicID);
    }

    bool SetMagic(uint32_t magicID, bool enabled){
        if(magicID < 1 || magicID > 12){
            return false;
        }

        Get_SetMagic()(Game::Save::GetPlayerData(), magicID, enabled ? 1 : 0);
        return true;
    }

    // Flags
    bool IsGameFlag(uint32_t flagID){
        if(flagID > 2047){
            return false;
        }

        return Get_IsGameFlag()(GetGameState(), flagID) != 0;
    }

    bool SetGameFlag(uint32_t flagID){
        if(flagID > 2047){
            return false;
        }

        Get_SetGameFlag()(GetGameState(), flagID);
        return true;
    }
}