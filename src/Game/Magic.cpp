/******************** GAME/MAGIC ********************/
// Magical ability I/O
//
// Utilizes IDs and data structures found by Acurisu:
// https://github.com/Acurisu/NieR-Replicant-ver.1.22474487139/
//
/****************************************************/

#include "Magic.h"

namespace Game::Magic{
    bool HasMagic(Ability ability){
        return Game::API::HasMagic(static_cast<uint32_t>(ability));
    }

    bool GiveMagic(Ability ability){
        return Game::API::SetMagic(static_cast<uint32_t>(ability), true);
    }
}