/******************** LUNAR TEAR ********************/
// Interfaces with Lunar Tear API
//
// Lunar Tear by ifa-ifa:
// https://github.com/ifa-ifa/Lunar-Tear/
//
/****************************************************/

#pragma once

#include <string_view>
#include "third_party/LunarTearLoader/src/API/api.h"

namespace LT{
    void Initialize(const LunarTearAPI* api, LT_PluginHandle handle);

    const LunarTearAPI* API();                                  // Returns current LunarTearAPI instance
    void QueuePhaseUpdate(LT_UpdateFunc func, void* userData);  // Update-task wrapper

    // Logging helpers
    void LogInfo(std::string_view message);     // Prints info message to LunarTear logs
    void LogWarning(std::string_view message);  // Prints warning message to LunarTear logs
    void LogError(std::string_view message);    // Prints error message to LunarTear logs
    void LogVerbose(std::string_view message);  // Prints verbose message to LunarTear logs
}