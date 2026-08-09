#include "include/Game.h"

namespace{
    State g_state = State::Starting;
    bool g_logged = false;
}

void Game::Initialize(){
    LT::LogInfo("Initializing game layer...");
    g_state = State::WaitingForSave;
}

void Game::Update(){
    return;
}