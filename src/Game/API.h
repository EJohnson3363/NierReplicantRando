/******************** API ********************/
// Native API for interfacing with game files.
// Has functionality not included in Lunar Tear's prepackaged API:
// - Adding/removing items from inventory
// - Granting/upgrading weapons
// - Granting magic abilities
// - Setting questline flags
//
/*********************************************/

#pragma once

#include <cstdint>

#include "Game.h"
#include "Save.h"

namespace Game::API{
    // Items
    uint32_t AddPlayerItem(uint32_t itemID, uint8_t count);
    uint32_t RemovePlayerItem(uint32_t itemID, uint8_t count);

    // Weapons
    bool SetWeaponLevel(uint32_t weaponID, uint32_t level);

    // Words
    bool HasWord(uint32_t wordID);
    bool SetWord(uint32_t wordID, bool enabled);

    // Magic
    //SetMagic(uint32_t magicID, bool enabled);

    // Flags
    //bool IsGameFlag(uint32_t flagID);
    //bool SetGameFlag(uint32_t flagID);
}