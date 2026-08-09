#include "include/LunarTear.h"
#include <cassert>

namespace{
    const LunarTearAPI* s_api = nullptr;
    LT_PluginHandle s_handle = nullptr;
}

namespace LT{
    void Initialize(const LunarTearAPI* api, LT_PluginHandle handle){
        s_api = api;
        s_handle = handle;
    }

    const LunarTearAPI* API(){
        assert(s_api);
        return s_api;
    }

    const LT_GameAPI& Game(){
        return *API()->game;
    }

    void LogInfo(std::string_view message){
        API()->Log(
            s_handle,
            LT_LOG_INFO,
            message.data());
    }

    void LogWarning(std::string_view message){
        API()->Log(
            s_handle,
            LT_LOG_WARNING,
            message.data());
    }

    void LogError(std::string_view message){
        API()->Log(
            s_handle,
            LT_LOG_ERROR,
            message.data());
    }
}