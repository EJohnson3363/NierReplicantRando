/******************** API ********************/
// Native API for interfacing with game files.
// Has functionality not included in Lunar Tear's API:
// - Adding/removing items from inventory
//
/*********************************************/

#pragma once

#include <cstdint>
#include "Game.h"

namespace Game::API{
    uint32_t AddPlayerItem(uint32_t itemID, uint8_t count);
    uint32_t RemovePlayerItem(uint32_t itemID, uint8_t count);
}