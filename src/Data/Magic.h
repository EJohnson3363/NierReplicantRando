/******************** DATA/MAGIC ********************/
// Magical ability data
//
// Utilizes definitions found by Acurisu:
// https://github.com/Acurisu/NieR-Replicant-ver.1.22474487139/
//
/******************************************************/

#pragma once

#include <string_view>
#include "third_party/Player.hpp"

namespace Data::Magic{
    struct Definition{
        Ability id;
        std::string_view name;
    };

    inline constexpr Definition All[] = {
        {Ability::Defend,           "Defend"},
        {Ability::Evade,            "Evade"},
        {Ability::Dark_Blast,       "Dark Blast"},
        {Ability::Dark_Phantasm,    "Dark Phantasm"},
        {Ability::Dark_Hand,        "Dark Hand"},
        {Ability::Dark_Lance,       "Dark Lance"},
        {Ability::Dark_Whirlwind,   "Dark Whirlwind"},
        {Ability::Dark_Gluttony,    "Dark Gluttony"},
        {Ability::Dark_Wall,        "Dark Wall"},
        {Ability::Dark_Execution,   "Dark Execution"},
    };
}