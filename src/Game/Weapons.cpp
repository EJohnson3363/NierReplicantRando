/******************** WEAPONS ********************/
// Weapon I/O
//
// TODO:
// - GetWeaponLevel()
// - HasWeapon()
// - SetWeaponLevel()
// - GiveWeapon()
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

#include "Weapons.h"

namespace Game::Weapons{
    uint32_t GetWeaponLevel(uint32_t weaponID){
        return 0;
    }

    bool HasWeapon(uint32_t weaponID){
        return GetWeaponLevel(weaponID) >= 0;
    }
    
    void SetWeaponLevel(uint32_t weaponID, uint32_t level){
        return;
    }

    void GiveWeapon(uint32_t weaponID){
        return;
    }
}