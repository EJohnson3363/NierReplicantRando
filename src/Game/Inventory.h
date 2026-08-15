/******************** INVENTORY ********************/
// Inventory I/O for item IDs 0-767
//
/***************************************************/

#pragma once

#include <cstdint>
#include "Game.h"

// Inventory management
namespace Game::Inventory{
    uint32_t GetItemCount(uint32_t itemID);
    bool HasItem(uint32_t itemID);
    
    bool SetItemCount(uint32_t itemID, uint8_t count);

    bool GiveItem(uint32_t itemID, uint8_t count);
    bool RemoveItem(uint32_t itemID, uint8_t count);

    bool IsItemData(uint32_t itemID);
}