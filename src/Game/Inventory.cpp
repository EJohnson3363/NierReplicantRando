/******************** INVENTORY ********************/
// Inventory I/O for item IDs 0-767
//
/***************************************************/

#include "Inventory.h"

namespace Game::Inventory{
    uint32_t GetItemCount(uint32_t itemID){
        // Invalid data
        if(IsItemData(itemID) == false){return 0;}

        // Finds item count
        auto* game = LT::API()->game;
        auto* playerData = Game::Save::GetPlayerData();

        return game->getPlayerItemCount(playerData, itemID);
    }

    bool HasItem(uint32_t itemID){
        return GetItemCount(itemID) > 0;
    }

    // Low level
    bool SetItemCount(uint32_t itemID, uint8_t count){
        // Invalid data
        if(IsItemData(itemID) == false){return false;}

        auto* game = LT::API()->game;
        auto* playerData = Game::Save::GetPlayerData();

        game->setPlayerItemCount(playerData, itemID, count);
        return true;
    }

    // High level
    uint32_t GiveItem(uint32_t itemID, uint8_t count){
        if(IsItemData(itemID) == false || count == 0){return 0;}

        return Game::API::AddPlayerItem(itemID, count);
    }

    // High level
    uint32_t RemoveItem(uint32_t itemID, uint8_t count){
        if(IsItemData(itemID) == false || count == 0){return 0;}

        return Game::API::RemovePlayerItem(itemID, count);
    }

    bool IsItemData(uint32_t itemID){
        // Invalid
        if(!Game::Save::IsPlayerDataAvailable() || itemID > 767){
            return false;
        }
        // Valid
        return true;
    }
}