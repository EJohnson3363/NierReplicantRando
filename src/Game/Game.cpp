/******************** GAME ********************/
// Reads game state
//
/**********************************************/

#include "Game.h"

// Private
namespace{
    Game::State game_state = Game::State::WaitingForGameplay;  // Tracks if game currently has playable actor
}


// Public
namespace Game{
    void Game_Init(){
        LT::LogInfo("Initializing game layer...");
        game_state = State::WaitingForGameplay;
    }

    void UpdateGameState(){
        const auto* api = LT::API();
        const auto* game = api->game;

        // Determine if ActorPlayable exists
        auto* manager = game->GetPlayableManager();
        const bool active = manager != nullptr && game->GetActorPlayable(manager) != nullptr;

        // Update state
        switch(game_state){
            case State::WaitingForGameplay:
                if(active){
                    game_state = State::Playing;
                    LT::LogInfo("Game is active.");
                }
                break;

            case State::Playing:
                if(!active){
                    game_state = State::WaitingForGameplay;
                    LT::LogInfo("Game is no longer active.");
                }
                break;
        }
    }

    bool IsGameplayActive(){
        return game_state == State::Playing;
    }
}