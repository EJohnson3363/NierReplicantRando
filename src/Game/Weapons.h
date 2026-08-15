/******************** WEAPONS ********************/
// Weapon I/O
//
// REFERENCE
// weaponID 0-63
// weaponLevels[64]
// pseudo IDs:
// - 1000-1063
// - 1100-1163
// - 1200-1263
// - 1300-1363
//
/*************************************************/

#pragma once

#include <cstdint>
#include "Game.h"

// Weapon management
namespace Game::Weapons{
    uint32_t GetWeaponLevel(uint32_t weaponID);
    bool HasWeapon(uint32_t weaponID);
    
    void SetWeaponLevel(uint32_t weaponID, uint32_t level);
    void GiveWeapon(uint32_t weaponID);
}