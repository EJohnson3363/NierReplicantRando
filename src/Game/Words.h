/******************** WORDS ********************/
// Word I/O
//
/***********************************************/

#pragma once

#include <cstdint>
#include "Game.h"

// Word management
namespace Game::Words{
    bool HasWord(uint32_t wordID);
    void GiveWord(uint32_t wordID);
}