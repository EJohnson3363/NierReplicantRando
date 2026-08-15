/******************** PLUGIN ********************/
// Author: Regent (GitHub user EJohnson3363)
//
// Randomizer plugin to be used with Lunar Tear
// Lunar Tear by ifa-ifa:
// https://github.com/ifa-ifa/Lunar-Tear/
//
/************************************************/

#include "Game/Game.h"

namespace{
    void Update(void*){
        Game::UpdateGameState();
        LT::QueuePhaseUpdate(Update, nullptr);
    }
}


// Main runtime code
extern "C" __declspec(dllexport)
void LunarTearPluginInit(const LunarTearAPI* api, LT_PluginHandle handle){
    LT::LT_Init(api, handle);
    LT::LogInfo("=== Randomizer plugin starting ===");

    Game::Game_Init();
    LT::QueuePhaseUpdate(Update, nullptr);
}