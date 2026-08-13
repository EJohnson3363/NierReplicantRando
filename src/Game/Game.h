/******************** GAME ********************/
// Handles general game functions
//
/**********************************************/

#pragma once

#include "LT/LunarTear.h"

// Game status
namespace Game{
    // State machine
    enum class State{
        WaitingForSave, // Not active
        Playing         // Active
    };

    void Initialize();  // Init

    void Update();      // Updates game state
    bool IsActive();    // Checks if save file has been loaded
}

// Current player's save data
namespace Game::Save{
    PlayerSaveData* Data(); // Gets current player save data
    bool IsAvailable();     // Checks if player save data exists
}