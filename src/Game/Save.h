/******************** SAVE ********************/
// Reads save file data
//
/**********************************************/

#pragma once

#include "Game.h"

// Current player's save data
namespace Game::Save{
    PlayerSaveData* GetPlayerData();
    bool IsPlayerDataAvailable();

    int GetGold();
    int GetLevel();
    int GetCurrentWeapon();

    const char* GetCurrentPhase();
    const char* GetPlayerName();
}