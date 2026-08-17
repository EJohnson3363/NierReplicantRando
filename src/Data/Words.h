/******************** DATA/WORDS ********************/
// Word data
// Uloth = 0-59 | Zarken = 60-120
//
// Utilizes definitions found by Acurisu:
// https://github.com/Acurisu/NieR-Replicant-ver.1.22474487139/
//
/******************************************************/

#pragma once

#include <cstdint>
#include <string_view>

namespace Data::Words{
    struct Definition{
        uint32_t id;
        std::string_view name;
    };

    inline constexpr Definition All[] = {
        {0, "pah"},
        {1, "paha"},
        {2, "pahi"},
        {3, "paho"},
        {4, "pahu"},
        {5, "pahal"},
        {6, "pahil"},
        {7, "pahol"},
        {8, "pahul"},
        {9, "pahuloth"},

        {10, "var"},
        {11, "vara"},
        {12, "vari"},
        {13, "varo"},
        {14, "varu"},
        {15, "varal"},
        {16, "varil"},
        {17, "varol"},
        {18, "varul"},
        {19, "varuloth"},

        {20, "geb"},
        {21, "geba"},
        {22, "gebi"},
        {23, "gebo"},
        {24, "gebu"},
        {25, "gebal"},
        {26, "gebil"},
        {27, "gebol"},
        {28, "gebul"},
        {29, "gebuloth"},

        {30, "ul"},
        {31, "ula"},
        {32, "uli"},
        {33, "ulo"},
        {34, "ulu"},
        {35, "ulal"},
        {36, "ulil"},
        {37, "ulol"},
        {38, "ulul"},
        {39, "ululoth"},

        {40, "hod"},
        {41, "hoda"},
        {42, "hodi"},
        {43, "hodo"},
        {44, "hodu"},
        {45, "hodal"},
        {46, "hodil"},
        {47, "hodol"},
        {48, "hodul"},
        {49, "hoduloth"},

        {50, "bes"},
        {51, "besa"},
        {52, "besi"},
        {53, "beso"},
        {54, "besu"},
        {55, "besal"},
        {56, "besil"},
        {57, "besol"},
        {58, "besul"},
        {59, "besuloth"},

        {60, "lug"},
        {61, "lugir"},
        {62, "luges"},
        {63, "lugka"},
        {64, "lugza"},
        {65, "lugira"},
        {66, "lugesra"},
        {67, "lugkarr"},
        {68, "lugzarr"},
        {69, "lugzarken"},

        {70, "ot"},
        {71, "otir"},
        {72, "otes"},
        {73, "otka"},
        {74, "otza"},
        {75, "otira"},
        {76, "otesra"},
        {77, "otkarr"},
        {78, "otzarr"},
        {79, "otzarken"},

        {80, "mah"},
        {81, "mahir"},
        {82, "mahhes"},
        {83, "mahka"},
        {84, "mahza"},
        {85, "mahira"},
        {86, "mahesra"},
        {87, "mahkarr"},
        {88, "mahzarr"},
        {89, "mahzarken"},

        {90, "ashur"},
        {91, "ashurir"},
        {92, "ashures"},
        {93, "ashurka"},
        {94, "ashurza"},
        {95, "ashurira"},
        {96, "ashuresra"},
        {97, "ashurkarr"},
        {98, "ashurzarr"},
        {99, "ashurzarken"},

        {100, "kon"},
        {101, "konir"},
        {102, "kones"},
        {103, "konka"},
        {104, "konza"},
        {105, "konira"},
        {106, "konesra"},
        {107, "konkarr"},
        {108, "konarr"},
        {109, "konzarken"},

        {110, "sol"},
        {111, "solir"},
        {112, "soles"},
        {113, "solka"},
        {114, "solza"},
        {115, "solira"},
        {116, "solesra"},
        {117, "solkarr"},
        {118, "solzarr"},
        {119, "solzarken"},

        {120, "ashurfarra"}
    };
}