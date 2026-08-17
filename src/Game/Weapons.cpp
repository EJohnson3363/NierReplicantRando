/******************** WEAPONS ********************/
// Weapon I/O for weapon IDs 0-63
//
/*************************************************/

#include "Weapons.h"

namespace Game::Weapons{
    int32_t GetWeaponLevel(uint32_t weaponID){
        // Invalid data
        if(IsWeaponID(weaponID) == false){
            return -1;
        }

        // Find weapon level
        auto* playerData = Game::Save::GetPlayerData();
        return playerData->weaponLevels[weaponID];
    }

    bool HasWeapon(uint32_t weaponID){
        return GetWeaponLevel(weaponID) >= 0;
    }
    
    // Low level
    bool SetWeaponLevel(uint32_t weaponID, uint32_t level){
        if(IsWeaponID(weaponID) == false || level > 3){
            return false;
        }

        return Game::API::SetWeaponLevel(weaponID, level);
    }

    // High level
    bool GiveWeapon(uint32_t weaponID){
        // Invalid
        if(IsWeaponID(weaponID) == false){
            return false;
        }
        // Weapon already owned (prevents accidental downgrading)
        if(HasWeapon(weaponID)){
            return true;
        }
        // Give unupgraded weapon
        return SetWeaponLevel(weaponID, 0);
    }

    bool IsWeaponID(uint32_t weaponID){
        // Invalid
        if(Game::Save::IsPlayerDataAvailable() == false || weaponID > 63){
            return false;
        }
        // Valid
        return true;
    }
}