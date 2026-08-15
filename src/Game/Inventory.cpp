/******************** INVENTORY ********************/
// Inventory I/O for item IDs 0-767
//
// TODO:
// - GiveItem()
// - RemoveItem()
//
/***************************************************/

#include "Inventory.h"

namespace Game::Inventory{
    uint32_t GetItemCount(uint32_t itemID){
        // Invalid data
        if(IsItemData(itemID) == false){
            return 0;
        }

        // Finds item count
        auto* game = LT::API()->game;
        auto* playerData = Game::Save::GetPlayerData();

        return game->getPlayerItemCount(playerData, itemID);
    }

    bool HasItem(uint32_t itemID){
        return GetItemCount(itemID) > 0;
    }

    bool SetItemCount(uint32_t itemID, uint8_t count){
        // Invalid data
        if(IsItemData(itemID) == false){
            return false;
        }

        auto* game = LT::API()->game;
        auto* playerData = Game::Save::GetPlayerData();

        game->setPlayerItemCount(playerData, itemID, count);
        return true;
    }

    bool GiveItem(uint32_t itemID, uint8_t count){
        // TODO: route through the game's high-level AddPlayerItem path
        return false;
    }

    bool RemoveItem(uint32_t itemID, uint8_t count){
        // TODO: route through the game's high-level RemovePlayerItem path
        return false;
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