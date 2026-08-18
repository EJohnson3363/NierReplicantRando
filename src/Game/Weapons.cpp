/******************** GAME/WEAPONS ********************/
// Weapon I/O
//
// Utilizes IDs and data structures found by Acurisu:
// https://github.com/Acurisu/NieR-Replicant-ver.1.22474487139/
//
/******************************************************/

#include "Weapons.h"

namespace Game::Weapons{
    int32_t GetWeaponLevel(Weapon weapon){
        // Find weapon level
        return Game::API::GetWeaponLevel(static_cast<uint32_t>(weapon));
    }

    bool HasWeapon(Weapon weapon){
        return GetWeaponLevel(weapon) >= 0;
    }
    
    // Low level
    bool SetWeaponLevel(Weapon weapon, uint32_t level){
        return Game::API::SetWeaponLevel(static_cast<uint32_t>(weapon), level);
    }

    // High level
    bool GiveWeapon(Weapon weapon){
        // Weapon already owned (prevents accidental downgrading)
        if(HasWeapon(weapon)){
            return true;
        }
        // Give unupgraded weapon
        return SetWeaponLevel(weapon, 0);
    }
}