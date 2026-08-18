/******************** PLUGIN ********************/
// Author: Regent (GitHub user EJohnson3363)
//
// Randomizer plugin to be used with Lunar Tear
//
// Lunar Tear by ifa-ifa:
// https://github.com/ifa-ifa/Lunar-Tear/
//
// Utilizes IDs and data structures found by Acurisu:
// https://github.com/Acurisu/NieR-Replicant-ver.1.22474487139/
//
/************************************************/

#include "Game/Game.h"
// Should eventually include "Randomizer" files

namespace{
    bool wasGameplayActive = false;

    void Update(void*){
        // Update state machine
        Game::UpdateGameState();

        // Call funct only when gameplay becomes active
        const bool isGameplayActive = Game::IsGameplayActive();
        if(isGameplayActive && !wasGameplayActive){
            // funct
        }
        wasGameplayActive = isGameplayActive;

        // Wait for phase update
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