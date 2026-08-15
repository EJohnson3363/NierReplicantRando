/******************** SAVE ********************/
// Reads save file data
//
/**********************************************/

#include "Save.h"

namespace Game::Save{
    PlayerSaveData* GetPlayerData(){
        return LT::API()->game->playerSaveData;
    }

    bool IsPlayerDataAvailable(){
        // This can be true even if IsGameplayActive() is false;
        // The game loads default save data on the title screen
        return GetPlayerData() != nullptr;
    }

    int GetGold(){
        return GetPlayerData()->gold;
    }

    int GetLevel(){
        // +1 because `current_level` is 0-indexed
        return GetPlayerData()->current_level + 1;
    }

    int GetCurrentWeapon(){
        return GetPlayerData()->currentWeapon;
    }

    const char* GetCurrentPhase(){
        return GetPlayerData()->current_phase;
    }

    const char* GetPlayerName(){
        return GetPlayerData()->player_name;
    }
}