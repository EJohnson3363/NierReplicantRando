/******************** GAME/MAGIC ********************/
// Magical ability I/O
//
// Utilizes IDs and data structures found by Acurisu:
// https://github.com/Acurisu/NieR-Replicant-ver.1.22474487139/
//
/****************************************************/

#pragma once

#include <cstdint>

#include "third_party/Player.hpp"
#include "API.h"

// Word management
namespace Game::Magic{
    bool HasMagic(Ability ability);
    bool GiveMagic(Ability ability);
}