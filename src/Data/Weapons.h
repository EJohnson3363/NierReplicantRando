/******************** DATA/WEAPONS ********************/
// Weapon data for weapon IDs 0-50
//
// Utilizes definitions found by Acurisu:
// https://github.com/Acurisu/NieR-Replicant-ver.1.22474487139/
//
/******************************************************/

#pragma once

#include <string_view>
#include "third_party/Player.hpp"

namespace Data::Weapons{
    struct Definition{
        Weapon id;
        std::string_view name;
    };

    inline constexpr Definition All[] = {
        {Weapon::Nameless_Blade,        "Nameless Blade"},          // 0x3000000
        {Weapon::Phoenix_Dagger,        "Phoenix Dagger"},          // 0x3000100
        {Weapon::Beastbain,             "Beastbain"},               // 0x3000200
        {Weapon::Labyrinths_Whisper,    "Labyrinth's Whisper"},     // 0x3000300
        {Weapon::Fools_Embrace,         "Fool's Embrace"},          // 0x3000400
        {Weapon::Ancient_Overlord,      "Ancient Overlord"},        // 0x3000500
        {Weapon::Rebirth,               "Rebirth"},                 // 0x3000600
        {Weapon::Earth_Wyrms_Claw,      "Earth Wyrm's Claw"},       // 0x3000700
        {Weapon::Nirvana_Dagger,        "Nirvana Dagger"},          // 0x3000800
        {Weapon::Moonrise,              "Moonrise"},                // 0x3000900
        {Weapon::Blade_of_Treachery,    "Blade of Treachery"},      // 0x3001000
        {Weapon::Lily_Leaf_Sword,       "Lily-Leaf Sword"},         // 0x3001100
        {Weapon::Faith,                 "Faith"},                   // 0x3001200
        {Weapon::Iron_Pipe,             "Iron Pipe"},               // 0x3001300
        {Weapon::Kusanagi,              "Kusanagi"},                // 0x3001400
        {Weapon::Phoenix_Sword,         "Phoenix Sword"},           // 0x3001500
        {Weapon::Beastlord,             "Beastlord"},               // 0x3001600
        {Weapon::Labyrinths_Song,       "Labyrinth's Song"},        // 0x3001700
        {Weapon::Fools_Lament,          "Fool's Lament"},           // 0x3001800
        {Weapon::Fang_of_the_Twins,     "Fang of the Twins"},       // 0x3001900
        {Weapon::Axe_of_Beheading,      "Axe of Beheading"},        // 0x3002000
        {Weapon::Vile_Axe,              "Vile Axe"},                // 0x3002100
        {Weapon::Iron_Will,             "Iron Will"},               // 0x3002200
        {Weapon::Transience,            "Transience"},              // 0x3002300
        {Weapon::Phoenix_Spear,         "Phoenix Spear"},           // 0x3002400
        {Weapon::Beastcurse,            "Beastcurse"},              // 0x3002500
        {Weapon::Labyrinths_Shout,      "Labyrinth's Shout"},       // 0x3002600
        {Weapon::Fools_Accord,          "Fool's Accord"},           // 0x3002700
        {Weapon::The_Devil_Queen,       "The Devil Queen"},         // 0x3002800
        {Weapon::Sunrise,               "Sunrise"},                 // 0x3002900
        {Weapon::Spear_of_the_Usurper,  "Spear of the Usurper"},    // 0x3003000
        {Weapon::Dragoon_Lance,         "Dragoon Lance"},           // 0x3003100
        {Weapon::Captains_Holy_Spear,   "Captain's Holy Spear"},    // 0x3003200
        {Weapon::Kaines_Sword,          "Kaine's Sword"},           // 0x3003300
        {Weapon::Virtuous_Contract,     "Virtuous Contract"},       // 0x1507600
        {Weapon::Cruel_Oath,            "Cruel Oath"},              // 0x1507700
        {Weapon::Virtuous_Treaty,       "Virtuous Treaty"},         // 0x1507800
        {Weapon::Virtuous_Dignity,      "Virtuous Dignity"},        // 0x1507900
    };
}