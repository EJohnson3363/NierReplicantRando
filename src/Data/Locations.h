/******************** DATA/LOCATIONS ********************/
// Location data (WIP)
//
/******************************************************/

#pragma once

#include <cstdint>
#include <string_view>

namespace Data::Locations{
    enum class Type{
        Quest,
        Chest,
        Boss,
        Drop,
        Other
    };

    struct Definition{
        uint32_t id;
        std::string_view name;
        Type type;
    };

    inline constexpr Definition All[] = {
        {},
    };
}