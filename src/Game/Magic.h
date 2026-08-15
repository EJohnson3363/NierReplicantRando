/******************** MAGIC ********************/
// Magic I/O
//
/***********************************************/

#pragma once

#include <cstdint>
#include "Game.h"

// Word management
namespace Game::Magic{
    bool HasMagic(uint32_t magicID);
    void GiveMagic(uint32_t magicID);
}