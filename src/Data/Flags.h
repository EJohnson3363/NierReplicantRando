/******************** DATA/PROGRESSION ********************/
// Go-mode flag data
//
/******************************************************/

#pragma once

#include <cstdint>
#include <string_view>

namespace Data::Flags{
    enum class ID : uint32_t{
        StoneGuardianKey,
        LawOfRoboticsKey,
        MemoryTreeKey,
        LoyalCerberusKey,
        SacrificeKey
    };

    struct Definition{
        ID id;
        std::string_view name;
        uint32_t gameFlag;
    };

    inline constexpr Definition All[] = {
        {ID::StoneGuardianKey,  "The Stone Guardian Key",  712},
        {ID::LawOfRoboticsKey,  "The Law of Robotics Key", 745},
        {ID::MemoryTreeKey,     "The Memory Tree Key",     782},
        {ID::LoyalCerberusKey,  "Loyal Cerberus Key",      807},
        {ID::SacrificeKey,      "Sacrifice Key",           828}
    };
}