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