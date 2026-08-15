/******************** LUNAR TEAR ********************/
// Interfaces with Lunar Tear API
// - Communicates with the game
// - Logging
//
// Lunar Tear by ifa-ifa:
// https://github.com/ifa-ifa/Lunar-Tear/
//
/****************************************************/

#include "LunarTear.h"


// Private
namespace{
    const LunarTearAPI* LT_API_ptr = nullptr;   // Pointer to LunarTearAPI
    LT_PluginHandle plugin_handle = nullptr;    // Current plugin handle
}

// Public
namespace LT{
    void LT_Init(const LunarTearAPI* api, LT_PluginHandle handle){
        // Validation
        assert(api != nullptr);
        assert(api->game != nullptr);

        // Init
        LT_API_ptr = api;
        plugin_handle = handle;
    }

    // Returns current LunarTearAPI instance
    const LunarTearAPI* API(){
        assert(LT_API_ptr);
        return LT_API_ptr;
    }

    // Update-task wrapper
    void QueuePhaseUpdate(LT_UpdateFunc func, void* userData){
        API()->QueuePhaseUpdateTask(plugin_handle, func, userData);
    }

    // Prints info message to LunarTear logs
    void LogInfo(std::string_view message){
        API()->Log(plugin_handle, LT_LOG_INFO, message.data());
    }

    // Prints warning message to LunarTear logs
    void LogWarning(std::string_view message){
        API()->Log(plugin_handle, LT_LOG_WARNING, message.data());
    }

    // Prints error message to LunarTear logs
    void LogError(std::string_view message){
        API()->Log(plugin_handle, LT_LOG_ERROR, message.data());
    }

    // Prints verbose message to LunarTear logs
    void LogVerbose(std::string_view message){
        API()->Log(plugin_handle, LT_LOG_VERBOSE, message.data());
    }
}