/******************** INVENTORY ********************/
// Inventory I/O for item IDs 0-767
//
/***************************************************/

#pragma once

#include <cstdint>
#include "Save.h"
#include "API.h"

// Inventory management
namespace Game::Inventory{
    uint32_t GetItemCount(uint32_t itemID);
    
    bool HasItem(uint32_t itemID);
    bool SetItemCount(uint32_t itemID, uint8_t count);      // Low level
    
    uint32_t GiveItem(uint32_t itemID, uint8_t count);      // High level
    uint32_t RemoveItem(uint32_t itemID, uint8_t count);    // High level

    bool IsItemData(uint32_t itemID);
}