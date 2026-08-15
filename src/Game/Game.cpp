/******************** GAME ********************/
// Reads game state
//
// TODO:
// - Check "ActorPlayable disappeared" in logs
// - Check reads gold/level/weapon
//
/**********************************************/

#include "Game.h"

// Private
namespace{
    Game::State g_state = Game::State::WaitingForGameplay;  // Tracks if game currently has playable actor
    ActorPlayable* g_lastActor = nullptr;                   // Tracks most recent actor

    // Temp diagnostic
    void LogSaveData(){
        if(!Game::Save::IsPlayerDataAvailable()){
            LT::LogWarning("Player save data is unavailable.");
            return;
        }

        LT::LogInfo("Gold: " + std::to_string(Game::Save::GetGold()));
        LT::LogInfo("Level: " + std::to_string(Game::Save::GetLevel()));
        LT::LogInfo("Current weapon: " + std::to_string(Game::Save::GetCurrentWeapon()));
    }
}


// Public
namespace Game{
    void Game_Init(){
        LT::LogInfo("Initializing game layer...");
        g_state = State::WaitingForGameplay;
    }

    void UpdateGameState(){
        const auto* api = LT::API();
        const auto* game = api->game;

        // Determine if ActorPlayable exists
        auto* manager = game->GetPlayableManager();
        const bool active = manager != nullptr && game->GetActorPlayable(manager) != nullptr;

        /* DEBUG */
        auto* actor = manager != nullptr ? game->GetActorPlayable(manager) : nullptr;
        if(actor != g_lastActor){
            g_lastActor = actor;
            if(actor != nullptr){
                LT::LogInfo("ActorPlayable appeared.");
            }
            else{
                LT::LogInfo("ActorPlayable disappeared.");
            }
        }

        // Update state
        switch(g_state){
            case State::WaitingForGameplay:
                if(active){
                    g_state = State::Playing;
                    LT::LogInfo("Game is active.");
                    LogSaveData();
                }
                break;

            case State::Playing:
                if(!active){
                    g_state = State::WaitingForGameplay;
                    LT::LogInfo("Game is no longer active.");
                }
                break;
        }
    }

    bool IsGameplayActive(){
        return g_state == State::Playing;
    }
}


/******************** SAVE ********************/
// Reads save file data
//
/**********************************************/

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