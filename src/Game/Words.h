/******************** GAME/WORDS ********************/
// Word I/O
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
namespace Game::Words{
    bool HasWord(Words_Uloth word);
    bool HasWord(Words_Zarken word);

    bool GiveWord(Words_Uloth word);
    bool GiveWord(Words_Zarken word);
}