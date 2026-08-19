/******************** DATA/LOCATIONS ********************/
// Location data (WIP)
//
// TODO:
// - Find location IDs
//
/******************************************************/

#pragma once

#include <cstdint>
#include <string_view>

namespace Data::Locations{
    enum class ID : uint32_t{
        // TODO: populate once IDs are known
    };

    enum class Type{
        Quest,
        Chest,
        Boss,
        Drop,
        Other
    };

    struct Definition{
        ID id;
        std::string_view name;
        Type type;
    };

    inline constexpr Definition All[] = {
        {},
    };
}