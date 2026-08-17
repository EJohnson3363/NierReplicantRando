/******************** FLAGS ********************/
// Flag management for flag IDs 0-2047
//
/***********************************************/

#pragma once

#include <cstdint>
#include "Game.h"

// Flag management
namespace Game::Flags{
    bool FlagIsSet(uint32_t flagID);
    void SetFlag(uint32_t flagID);
    void ClearFlag(uint32_t flagID);
}