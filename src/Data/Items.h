/******************** DATA/ITEMS ********************/
// Item data
// Gaps correspond to unused/reserved inventory slots
//
// Utilizes definitions found by Acurisu:
// https://github.com/Acurisu/NieR-Replicant-ver.1.22474487139/
//
/******************************************************/

#pragma once

#include <cstdint>
#include <string_view>

namespace Data::Items{
    enum class Category{
        Recovery,
        Cultivation,
        Fishing,
        RawMaterial,
        KeyItem,
        Required,
        Document,
        Map
    };

    struct Definition{
        uint32_t id;
        std::string_view name;
        Category category;
    };

    inline constexpr Definition All[] = {
        {0, "Medicinal Herb",    Category::Recovery},   // 0x4374AE0
        {1, "Health Salve",      Category::Recovery},   // 0x4374AE1
        {2, "Recovery Potion",   Category::Recovery},   // 0x4374AE2
        {21, "Strength Drop",    Category::Recovery},	// 0x4374AF5
        {22, "Strength Capsule", Category::Recovery},	// 0x4374AF6
        {23, "Magic Drop",       Category::Recovery},	// 0x4374AF7
        {24, "Magic Capsule",    Category::Recovery},	// 0x4374AF8
        {25, "Defense Drop",     Category::Recovery},	// 0x4374AF9
        {26, "Defense Capsule",  Category::Recovery},	// 0x4374AFA
        {27, "Spirit Drop",      Category::Recovery},	// 0x4374AFB
        {28, "Spirit Capsule",   Category::Recovery},	// 0x4374AFC
        {31, "Antidotal Weed",   Category::Recovery},	// 0x4374AFF
        {33, "Smelling Salts",   Category::Recovery},
        
        {29, "Speed Fertilizer",         Category::Cultivation},	// 0x4374B09
        {42, "Flowering Fertilizer",     Category::Cultivation},	// 0x4374B0A
        {43, "Bounty Fertilizer",        Category::Cultivation},	// 0x4374B0B
        {46, "Pumpkin Seed",             Category::Cultivation},	// 0x4374B0E
        {47, "Watermelon Seed",          Category::Cultivation},	// 0x4374B0F
        {48, "Melon Seed",               Category::Cultivation},	// 0x4374B10
        {49, "Gourd Seed",               Category::Cultivation},	// 0x4374B11
        {50, "Tomato Seed",              Category::Cultivation},	// 0x4374B12
        {51, "Eggplant Seed",            Category::Cultivation},	// 0x4374B13
        {52, "Bell Pepper Seed",         Category::Cultivation},	// 0x4374B14
        {53, "Bean Seed",                Category::Cultivation},	// 0x4374B15
        {54, "Wheat Seedling",           Category::Cultivation},	// 0x4374B16
        {55, "Rice Plant Seedling",      Category::Cultivation},	// 0x4374B17
        {56, "Dahlia Bulb",              Category::Cultivation},	// 0x4374B18
        {57, "Tulip Bulb",               Category::Cultivation},	// 0x4374B19
        {58, "Freesia Bulb",             Category::Cultivation},	// 0x4374B1A
        {59, "Red Moonflower Seed",      Category::Cultivation},	// 0x4374B1B
        {60, "Gold Moonlfower Seed",     Category::Cultivation},	// 0x4374B1C
        {61, "Peach Moonflower Seed",    Category::Cultivation},	// 0x4374B1D
        {62, "Pink Moonflower Seed",     Category::Cultivation},	// 0x4374B1E
        {63, "Blue Moonflower Seed",     Category::Cultivation},	// 0x4374B1F
        {64, "Indigo Moonflower Seed",   Category::Cultivation},	// 0x4374B20
        {65, "White Moonflower Seed",    Category::Cultivation},	// 0x4374B21
        {71, "Pumpkin",                  Category::Cultivation},	// 0x4374B27
        {72, "Watermelon",               Category::Cultivation},	// 0x4374B28
        {73, "Melon",                    Category::Cultivation},	// 0x4374B29
        {74, "Gourd",                    Category::Cultivation},	// 0x4374B2A
        {75, "Tomato",                   Category::Cultivation},	// 0x4374B2B
        {76, "Eggplant",                 Category::Cultivation},	// 0x4374B2C
        {77, "Bell Pepper",              Category::Cultivation},	// 0x4374B2D
        {78, "Beans",                    Category::Cultivation},	// 0x4374B2E
        {79, "Wheat",                    Category::Cultivation},	// 0x4374B2F
        {80, "Rice",                     Category::Cultivation},	// 0x4374B30
        {81, "Dahlia",                   Category::Cultivation},	// 0x4374B31
        {82, "Tulip",                    Category::Cultivation},	// 0x4374B32
        {83, "Freesia",                  Category::Cultivation},	// 0x4374B33
        {84, "Red Moonflower",           Category::Cultivation},	// 0x4374B34
        {85, "Gold Moonlfower",          Category::Cultivation},	// 0x4374B35
        {86, "Peach Moonflower",         Category::Cultivation},	// 0x4374B36
        {87, "Pink Moonflower",          Category::Cultivation},	// 0x4374B37
        {88, "Blue Moonflower",          Category::Cultivation},	// 0x4374B38
        {89, "Indigo Moonflower",        Category::Cultivation},	// 0x4374B39
        {90, "White Moonflower",         Category::Cultivation},	// 0x4374B3A

        {101, "Lugworm",          Category::Fishing},	// 0x4374B45
        {102, "Earthworm",        Category::Fishing},	// 0x4374B46
        {103, "Lure",             Category::Fishing},	// 0x4374B47
        {111, "Sardine",          Category::Fishing},	// 0x4374B4F
        {112, "Carp",             Category::Fishing},	// 0x4374B50
        {113, "Blowfish",         Category::Fishing},	// 0x4374B51
        {114, "Bream",            Category::Fishing},	// 0x4374B52
        {115, "Shark",            Category::Fishing},	// 0x4374B53
        {116, "Blue Marlin",      Category::Fishing},	// 0x4374B54
        {117, "Dunkleosteus",     Category::Fishing},	// 0x4374B55
        {118, "Rainbow Trout",    Category::Fishing},	// 0x4374B56
        {119, "Black Bass",       Category::Fishing},	// 0x4374B57
        {120, "Giant Catfish",    Category::Fishing},	// 0x4374B58
        {121, "Royal Fish",       Category::Fishing},	// 0x4374B59
        {122, "Hyneria",          Category::Fishing},	// 0x4374B5A
        {123, "Sandfish",         Category::Fishing},	// 0x4374B5B
        {124, "Rhizodont",        Category::Fishing},	// 0x4374B5C
        {125, "Shaman Fish",      Category::Fishing},	// 0x4374B5D

        {131, "Aquatic Plant",        Category::RawMaterial},	// 0x4374B63
        {132, "Deadwood",             Category::RawMaterial},	// 0x4374B64
        {133, "Rusty Bucket",         Category::RawMaterial},	// 0x4374B65
        {134, "Empty Can",            Category::RawMaterial},	// 0x4374B66
        {138, "Gold Ore",             Category::RawMaterial},	// 0x4374B6A
        {139, "Silver Ore",           Category::RawMaterial},	// 0x4374B6B
        {140, "Copper Ore",           Category::RawMaterial},	// 0x4374B6C
        {141, "Iron Ore",             Category::RawMaterial},	// 0x4374B6D
        {142, "Crystal",              Category::RawMaterial},	// 0x4374B6E
        {143, "Pyrite",               Category::RawMaterial},	// 0x4374B6F
        {144, "Moldavite",            Category::RawMaterial},	// 0x4374B70
        {145, "Meteorite",            Category::RawMaterial},	// 0x4374B71
        {146, "Amber",                Category::RawMaterial},	// 0x4374B72
        {147, "Fluorite",             Category::RawMaterial},	// 0x4374B73
        {148, "Clay",                 Category::RawMaterial},	// 0x4374B74
        {153, "Berries",              Category::RawMaterial},	// 0x4374B79
        {154, "Royal Fern",           Category::RawMaterial},	// 0x4374B7A
        {155, "Tree Branch",          Category::RawMaterial},	// 0x4374B7B
        {156, "Log",                  Category::RawMaterial},	// 0x4374B7C
        {157, "Natural Rubber",       Category::RawMaterial},	// 0x4374B7D
        {158, "Ivy",                  Category::RawMaterial},	// 0x4374B7E
        {159, "Lichen",               Category::RawMaterial},	// 0x4374B7F
        {160, "Mushroom",             Category::RawMaterial},	// 0x4374B80
        {161, "Sap",                  Category::RawMaterial},	// 0x4374B81
        {167, "Mutton",               Category::RawMaterial},	// 0x4374B87
        {168, "Boar Meat",            Category::RawMaterial},	// 0x4374B88
        {169, "Wool",                 Category::RawMaterial},	// 0x4374B89
        {170, "Boar Hide",            Category::RawMaterial},	// 0x4374B8A
        {171, "Wolf Hide",            Category::RawMaterial},	// 0x4374B8B
        {172, "Wolf Fang",            Category::RawMaterial},	// 0x4374B8C
        {173, "Giant Spider Silk",    Category::RawMaterial},	// 0x4374B8D
        {174, "Bat Fang",             Category::RawMaterial},	// 0x4374B8E
        {175, "Bat Wing",             Category::RawMaterial},	// 0x4374B8F
        {176, "Goat Meat",            Category::RawMaterial},	// 0x4374B90
        {177, "Goat Hide",            Category::RawMaterial},	// 0x4374B91
        {178, "Venison",              Category::RawMaterial},	// 0x4374B92
        {179, "Rainbow Spider Silk",  Category::RawMaterial},	// 0x4374B93
        {180, "Boar Liver",           Category::RawMaterial},	// 0x4374B94
        {181, "Scorpion Claw",        Category::RawMaterial},	// 0x4374B95
        {182, "Scorpion Tail",        Category::RawMaterial},	// 0x4374B96
        {183, "Dented Metal Board",   Category::RawMaterial},	// 0x4374B97
        {184, "Stripped Bolt",        Category::RawMaterial},   // 0x4374B98
        {185, "Broken Lens",          Category::RawMaterial},	// 0x4374B99
        {186, "Severed Cable",        Category::RawMaterial},	// 0x4374B9A
        {187, "Broken Arm",           Category::RawMaterial},	// 0x4374B9B
        {188, "Broken Antena",        Category::RawMaterial},	// 0x4374B9C
        {189, "Broken Motor",         Category::RawMaterial},	// 0x4374B9D
        {190, "Broken Battery",       Category::RawMaterial},	// 0x4374B9E
        {191, "Mysterious Switch",    Category::RawMaterial},	// 0x4374B9F
        {192, "Large Gear",           Category::RawMaterial},	// 0x4374BA0
        {193, "Titanium Alloy",     Category::RawMaterial},	    // 0x4374BA1
        {194, "Memory Alloy",         Category::RawMaterial},	// 0x4374BA2
        {195, "Rusted Clump",         Category::RawMaterial},	// 0x4374BA3
        {196, "Machine Oil",          Category::RawMaterial},	// 0x4374BA4
        {201, "Forlorn Necklace",     Category::RawMaterial},	// 0x4374BA9
        {202, "Twisted Ring",         Category::RawMaterial},	// 0x4374BAA
        {203, "Broken Earring",       Category::RawMaterial},	// 0x4374BAB
        {204, "Pretty Choker",        Category::RawMaterial},	// 0x4374BAC
        {205, "Metal Piercing",       Category::RawMaterial},	// 0x4374BAD
        {206, "Subdued Bracelet",     Category::RawMaterial},	// 0x4374BAE
        {207, "Technical Guide",      Category::RawMaterial},	// 0x4374BAF
        {208, "Grubby Book",          Category::RawMaterial},	// 0x4374BB0
        {209, "Thick Dictionary",     Category::RawMaterial},	// 0x4374BB1
        {210, "Closed Book",          Category::RawMaterial},	// 0x4374BB2
        {211, "Used Coloring Book",   Category::RawMaterial},	// 0x4374BB3
        {212, "Old Schoolbook",       Category::RawMaterial},	// 0x4374BB4
        {213, "Dirty Bag",            Category::RawMaterial},	// 0x4374BB5
        {214, "Flashy Hat",           Category::RawMaterial},	// 0x4374BB6
        {215, "Leather Gloves",       Category::RawMaterial},	// 0x4374BB7
        {216, "Silk Handkerchief",    Category::RawMaterial},	// 0x4374BB8
        {217, "Leather Boots",        Category::RawMaterial},	// 0x4374BB9
        {218, "Complex Machine",      Category::RawMaterial},	// 0x4374BBA
        {219, "Elaborate Machine",    Category::RawMaterial},	// 0x4374BBB
        {220, "Simple Machine",       Category::RawMaterial},	// 0x4374BBC
        {221, "Stopped Clock",        Category::RawMaterial},	// 0x4374BBD
        {222, "Broken Wristwatch",    Category::RawMaterial},	// 0x4374BBE
        {223, "Rusty Kitchen Knife",  Category::RawMaterial},	// 0x4374BBF
        {224, "Broken Saw",           Category::RawMaterial},	// 0x4374BC0
        {225, "Dented Metal Bat",     Category::RawMaterial},	// 0x4374BC1
        {226, "Shell",                Category::RawMaterial},	// 0x4374BC3
        {227, "Gastropod",            Category::RawMaterial},	// 0x4374BC4
        {228, "Bivalve",              Category::RawMaterial},	// 0x4374BC5
        {229, "Seaweed",              Category::RawMaterial},	// 0x4374BC6
        {230, "Empty Bottle",         Category::RawMaterial},	// 0x4374BC7
        {231, "Driftwood",            Category::RawMaterial},	// 0x4374BC8
        {232, "Pearl",                Category::RawMaterial},	// 0x4374BC9
        {233, "Black Pearl",          Category::RawMaterial},	// 0x4374BCA
        {234, "Crab",                 Category::RawMaterial},	// 0x4374BCB
        {235, "Starfish",             Category::RawMaterial},	// 0x4374BCC
        {241, "Sea Turtle Egg",       Category::RawMaterial},	// 0x4374BD2
        {242, "Broken Pottery",       Category::RawMaterial},	// 0x4374BD3
        {243, "Desert Rose",          Category::RawMaterial},	// 0x4374BD4
        {244, "Giant Egg",            Category::RawMaterial},	// 0x4374BD5
        {245, "Damascus Steel",       Category::RawMaterial},	// 0x4374BD6
        {246, "Eagle Egg",            Category::RawMaterial},	// 0x4374BD7
        {247, "Chicken Egg",          Category::RawMaterial},	// 0x4374BD8
        {248, "Mouse Tail",           Category::RawMaterial},	// 0x4374BDA
        {249, "Lizard Tail",          Category::RawMaterial},	// 0x4374BDB
        {253, "Deer Antler",          Category::RawMaterial},	// 0x4374BDF

        {256, "Moon Key",                 Category::KeyItem},   // 0x4374BE0
        {257, "Star Key",                 Category::KeyItem},	// 0x4374BE1
        {258, "Light Key",                Category::KeyItem},	// 0x4374BE2
        {259, "Darkness Key",             Category::KeyItem},	// 0x4374BE3
        {260, "Fine Flour",               Category::KeyItem},	// 0x4374BE4
        {261, "Coarse FLour",             Category::KeyItem},	// 0x4374BE5
        {262, "Perfume Bottle",           Category::KeyItem},	// 0x4374BE6
        {263, "Postman's Parcel",         Category::KeyItem},	// 0x4374BE7
        {264, "Lover's Letter",           Category::KeyItem},	// 0x4374BE8
        {265, "Water Filter",             Category::KeyItem},	// 0x4374BE9
        {266, "Royal Compass",            Category::KeyItem},	// 0x4374BEA
        {267, "Vapor Moss",               Category::KeyItem},	// 0x4374BEB
        {268, "Valley Spider Silk",       Category::KeyItem},	// 0x4374BEC
        {269, "Animal Guidebook",         Category::KeyItem},	// 0x4374BED
        {270, "Ore Guidebook",            Category::KeyItem},	// 0x4374BEE
        {271, "Plant Guidebook",          Category::KeyItem},	// 0x4374BEF
        {272, "Red Book",                 Category::KeyItem},	// 0x4374BF0
        {273, "Blue Book",                Category::KeyItem},	// 0x4374BF1
        {274, "Old Lady's Elixer",        Category::KeyItem},	// 0x4374BF2
        {275, "Old Lady's Elixer+",       Category::KeyItem},	// 0x4374BF3
        {276, "Parcel for The Aerie",     Category::KeyItem},	// 0x4374BF4
        {277, "Parcel for Seafront",      Category::KeyItem},	// 0x4374BF5
        {278, "Cookbook",                 Category::KeyItem},	// 0x4374BF6
        {279, "Parcel for Facade",        Category::KeyItem},	// 0x4374BF7
        {280, "Max's Herbs",              Category::KeyItem},	// 0x4374BF8
        {281, "Drifting Cargo",           Category::KeyItem},	// 0x4374BF9
        {282, "Drifting Cargo 2",         Category::KeyItem},	// 0x4374BFA
        {283, "Drifting Cargo 3",         Category::KeyItem},	// 0x4374BFB
        {284, "Drifting Cargo 4",         Category::KeyItem},	// 0x4374BFC
        {285, "Old Package",              Category::KeyItem},	// 0x4374BFD
        {286, "Mermaid Tear",             Category::KeyItem},	// 0x4374BFE
        {287, "Mandrake Leaf",            Category::KeyItem},	// 0x4374BFF
        {288, "Energizer",                Category::KeyItem},	// 0x4374C00
        {289, "Toad Oil",                 Category::KeyItem},	// 0x4374C01
        {290, "Sleep-B-Gone",             Category::KeyItem},	// 0x4374C02
        {291, "Antidote",                 Category::KeyItem},	// 0x4374C03
        {292, "Gold Bracelet",            Category::KeyItem},	// 0x4374C04
        {293, "Elite Kitchen Knife",      Category::KeyItem},	// 0x4374C05
        {294, "Elevator Parts",           Category::KeyItem},	// 0x4374C06
        {295, "Dirty Treasure Map",       Category::KeyItem},	// 0x4374C07
        {296, "Restored Treasure Map",    Category::KeyItem},	// 0x4374C08
        {297, "Jade Hair Ornament",       Category::KeyItem},	// 0x4374C09
        {298, "Employee List",            Category::KeyItem},	// 0x4374C0A
        {299, "Small Safe",               Category::KeyItem},	// 0x4374C0B
        {300, "Safe Key",                 Category::KeyItem},	// 0x4374C0C
        {301, "Great Tree Root",          Category::KeyItem},	// 0x4374C0D
        {302, "Eye of Power",             Category::KeyItem},	// 0x4374C0E
        {303, "Ribbon",                   Category::KeyItem},	// 0x4374C0F
        {304, "Yonah's Ribbon",           Category::KeyItem},	// 0x4374C10
        {305, "Bronze Key",               Category::KeyItem},	// 0x4374C11
        {306, "Brass Key",                Category::KeyItem},	// 0x4374C12
        {307, "Boar Tusk",                Category::KeyItem},	// 0x4374C13
        {308, "Pressed Freesia",          Category::KeyItem},	// 0x4374C14
        {309, "Potted Freesia",           Category::KeyItem},	// 0x4374C15
        {310, "Freesia (Delivery)",       Category::KeyItem},	// 0x4374C16
        {311, "Pile of Junk",             Category::KeyItem},	// 0x4374C17
        {312, "Old Gold Coin",            Category::KeyItem},	// 0x4374C18
        {313, "Market Map",               Category::KeyItem},	// 0x4374C19
        {314, "AA Keycard",               Category::KeyItem},	// 0x4374C1A
        {315, "KA Keycard",               Category::KeyItem},	// 0x4374C1B
        {316, "SA Keycard",               Category::KeyItem},	// 0x4374C1C
        {317, "TA Keycard",               Category::KeyItem},	// 0x4374C1D
        {318, "NA Keycard",               Category::KeyItem},	// 0x4374C1E
        {319, "HA Keycard",               Category::KeyItem},	// 0x4374C1F
        {320, "MA Keycard",               Category::KeyItem},	// 0x4374C20
        {321, "YA Keycard",               Category::KeyItem},	// 0x4374C21
        {322, "RA Keycard",               Category::KeyItem},	// 0x4374C22
        {323, "WA Keycard",               Category::KeyItem},	// 0x4374C23
        {324, "Cultivator's Handbook",    Category::KeyItem},	// 0x4374C24
        {325, "Red Bag",                  Category::KeyItem},	// 0x4374C25
        {326, "Lantern",                  Category::KeyItem},	// 0x4374C26
        {327, "Empty Lantern",            Category::KeyItem},	// 0x4374C27
        {328, "Hold Key",                 Category::KeyItem},   // 0x4374C28
        {329, "Passageway Key",           Category::KeyItem},	// 0x4374C29
        {330, "Goat Key",                 Category::KeyItem},	// 0x4374C2A
        {331, "Lizard Key",               Category::KeyItem},	// 0x4374C2B
        {332, "Unlocking Procedure Memo", Category::KeyItem},   // 0x4374C2C
        {333, "Red Jewel",                Category::KeyItem},	// 0x4374C2D
        {334, "Red Flowers",              Category::KeyItem},   // 0x4374C2E
        {335, "Apples",                   Category::KeyItem},	// 0x4374C2F

        //{0, "The Stone Guardian Key",   Category::Required},
        //{0, "The Law of Robotics Key",  Category::Required},
        //{0, "The Memory Tree Key",      Category::Required},
        //{0, "Loyal Cerberus Key",       Category::Required},
        //{0, "Sacrifice Key",            Category::Required},
    };
}