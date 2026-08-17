/******************** FLAGS ********************/
// Flag management for flag IDs 0-2047
//
/***********************************************/

#pragma once

#include <cstdint>

#include "API.h"

// Flag management
namespace Game::Flags{
    bool FlagIsSet(uint32_t flagID);
    bool SetFlag(uint32_t flagID);

    bool IsFlagID(uint32_t flagID);
}