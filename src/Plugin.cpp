/******************** PLUGIN ********************/
// Code by: Regent (GitHub user EJohnson3363)
//
// Randomizer plugin to be used with Lunar Tear
// Lunar Tear by ifa-ifa:
// https://github.com/ifa-ifa/Lunar-Tear/
//
/************************************************/

#include "Game/Game.h"

namespace{
    void Update(void*){
        Game::Update();
        LT::QueuePhaseUpdate(Update, nullptr);
    }
}

// Main runtime code
extern "C" __declspec(dllexport)
void LunarTearPluginInit(const LunarTearAPI* api, LT_PluginHandle handle){
    LT::Initialize(api, handle);
    LT::LogInfo("=== Randomizer plugin starting ===");

    Game::Initialize();
    LT::QueuePhaseUpdate(Update, nullptr);
}