/******************** DATA/LOCATIONS ********************/
// Location data (WIP)
//
/******************************************************/

#pragma once

#include <cstdint>
#include <string_view>

namespace Data::Locations{
    struct Definition{
        uint32_t id;
        std::string_view name;
    };

    inline constexpr Definition All[] = {
        {},
    };
}