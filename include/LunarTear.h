#include <string_view>
#include "third_party/LunarTearLoader/src/API/api.h"

namespace LT{
    // Called from LunarTearPluginInit()
    void Initialize(const LunarTearAPI* api, LT_PluginHandle handle);

    // Access to the Lunar Tear API
    const LunarTearAPI* API();
    const LT_GameAPI& Game();

    // Logging helpers
    void LogInfo(std::string_view message);
    void LogWarning(std::string_view message);
    void LogError(std::string_view message);
}