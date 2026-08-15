/******************** GAME ********************/
// Reads game state
//
/**********************************************/

#pragma once

#include "LT/LunarTear.h"

// Game status
namespace Game{
    // State machine
    enum class State{
        WaitingForGameplay, // Not active
        Playing             // Active
    };

    void Game_Init();

    void UpdateGameState();
    bool IsGameplayActive();
}

/******************** SAVE ********************/
// Reads save file data
//
/**********************************************/

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