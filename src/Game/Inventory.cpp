/******************** GAME/INVENTORY ********************/
// Inventory I/O
//
// Utilizes IDs and data structures found by Acurisu:
// https://github.com/Acurisu/NieR-Replicant-ver.1.22474487139/
//
/********************************************************/

#include "Inventory.h"

namespace Game::Inventory{
    uint32_t GetItemCount(uint32_t itemID){
        // Finds item count
        auto* game = LT::API()->game;
        auto* playerData = Game::Save::GetPlayerData();

        return static_cast<uint32_t>(game->getPlayerItemCount(playerData, itemID));
    }

    bool HasItem(uint32_t itemID){
        return GetItemCount(itemID) > 0;
    }

    // Direct
    bool SetItemCount(uint32_t itemID, uint8_t count){
        auto* game = LT::API()->game;
        auto* playerData = Game::Save::GetPlayerData();

        game->setPlayerItemCount(playerData, itemID, count);
        return true;
    }

    // High level
    uint32_t GiveItem(uint32_t itemID, uint8_t count){
        return static_cast<uint32_t>(Game::API::AddPlayerItem(itemID, count));
    }

    // High level
    uint32_t RemoveItem(uint32_t itemID, uint8_t count){
        return Game::API::RemovePlayerItem(itemID, count);
    }
}