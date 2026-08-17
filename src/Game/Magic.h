/******************** MAGIC ********************/
// Magic I/O  for magic IDs 1-10 (Nier) or 1-12 (Kainé)
//
/***********************************************/

#pragma once

#include <cstdint>

#include "Save.h"
#include "API.h"

// Word management
namespace Game::Magic{
    bool HasMagic(uint32_t magicID);
    bool GiveMagic(uint32_t magicID);

    bool IsMagicID(uint32_t magicID);
}