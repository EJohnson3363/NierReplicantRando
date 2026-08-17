/******************** WEAPONS ********************/
// Weapon I/O for weapon IDs 0-63
//
/*************************************************/

#pragma once

#include <cstdint>

#include "Save.h"
#include "API.h"

// Weapon management
namespace Game::Weapons{
    int32_t GetWeaponLevel(uint32_t weaponID);
    bool HasWeapon(uint32_t weaponID);
    
    bool SetWeaponLevel(uint32_t weaponID, uint32_t level); // Low level
    bool GiveWeapon(uint32_t weaponID);                     // High level

    bool IsWeaponID(uint32_t weaponID);
}