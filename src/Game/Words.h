/******************** WORDS ********************/
// Word I/O for word IDs 0-127
//
/***********************************************/

#pragma once

#include <cstdint>

#include "Save.h"
#include "API.h"

// Word management
namespace Game::Words{
    bool HasWord(uint32_t wordID);
    bool GiveWord(uint32_t wordID);

    bool IsWordID(uint32_t wordID);
}