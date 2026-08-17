/******************** PLUGIN ********************/
// Author: Regent (GitHub user EJohnson3363)
//
// TO TEST:
// - `Magic`
// - `Flags`
//
// Randomizer plugin to be used with Lunar Tear
// Lunar Tear by ifa-ifa:
// https://github.com/ifa-ifa/Lunar-Tear/
//
/************************************************/

#include "Game/Game.h"
#include "Game/Words.h"
// Should eventually include "Randomizer" files

namespace{
    bool wasGameplayActive = false;

    void Update(void*){
        // Update state machine
        Game::UpdateGameState();

        // Call funct only when gameplay becomes active
        const bool isGameplayActive = Game::IsGameplayActive();
        if(isGameplayActive && !wasGameplayActive){
            constexpr uint32_t ID = 40;

            // Test
            const auto before = Game::Words::HasWord(ID);
            const bool success = Game::Words::GiveWord(ID);
            const auto afterGive = Game::Words::HasWord(ID);

            // Log
            LT::LogInfo(
                "Give: " + std::to_string(before) +
                " -> " + std::to_string(afterGive) +
                " (added " + std::to_string(success) + ")");
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