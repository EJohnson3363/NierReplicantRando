/******************** GAME/WEAPONS ********************/
// Weapon I/O
//
// Utilizes IDs and data structures found by Acurisu:
// https://github.com/Acurisu/NieR-Replicant-ver.1.22474487139/
//
/******************************************************/

#pragma once

#include <cstdint>

#include "third_party/Player.hpp"
#include "API.h"

// Weapon management
namespace Game::Weapons{
    int32_t GetWeaponLevel(Weapon weapon);
    bool HasWeapon(Weapon weapon);
    
    bool SetWeaponLevel(Weapon weapon, uint32_t level); // Low level
    bool GiveWeapon(Weapon weapon);                     // High level
}