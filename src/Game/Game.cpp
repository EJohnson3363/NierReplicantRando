/******************** GAME ********************/
// Handles general game functions
//
/**********************************************/

#include "Game.h"

/*** GAME ***/

/* Private */
namespace{
    Game::State g_state = Game::State::WaitingForSave;  // Tracks if game currently has playable actor
}

/* Public */
void Game::Initialize(){
    LT::LogInfo("Initializing game layer...");
    g_state = State::WaitingForSave;
}

// Updates game state
void Game::Update(){
    const auto* api = LT::API();
    const auto* game = api->game;

    // Determine if ActorPlayable exists
    // (aka file has been loaded)
    auto* manager = game->GetPlayableManager();
    const bool active = manager != nullptr && game->GetActorPlayable(manager) != nullptr;

    switch(g_state){
        case State::WaitingForSave:
            if(active){
                g_state = State::Playing;
                LT::LogInfo("Game is active.");
            }
            break;

        case State::Playing:
            if(!active){
                g_state = State::WaitingForSave;
                LT::LogInfo("Game is no longer active.");
            }
            break;
    }
}

// Checks if save file has been loaded
bool Game::IsActive(){
    return g_state == State::Playing;
}


/*** SAVE ***/

// Gets current player save data
PlayerSaveData* Game::Save::Data(){
    return LT::API()->game->playerSaveData;
}

// Checks if player save data exists
bool Game::Save::IsAvailable(){
    // This can be true even if IsActive() is false;
    // The game loads default save data on the title screen
    return Data() != nullptr;
}