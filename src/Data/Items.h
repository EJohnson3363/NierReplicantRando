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

#include "third_party/Player.hpp"

namespace Data::Items{
    enum class Type{
        Recovery,
        Cultivation,
        Fishing,
        RawMaterial,
        KeyItem,
        Document,
        ExtraDocument,
        Map
    };

    struct Definition{
        uint32_t id;
        std::string_view name;
        Type type;
    };

    inline constexpr Definition All[] = {
        {0, "Medicinal Herb",    Type::Recovery},   // 0x4374AE0
        {1, "Health Salve",      Type::Recovery},   // 0x4374AE1
        {2, "Recovery Potion",   Type::Recovery},   // 0x4374AE2
        {21, "Strength Drop",    Type::Recovery},	// 0x4374AF5
        {22, "Strength Capsule", Type::Recovery},	// 0x4374AF6
        {23, "Magic Drop",       Type::Recovery},	// 0x4374AF7
        {24, "Magic Capsule",    Type::Recovery},	// 0x4374AF8
        {25, "Defense Drop",     Type::Recovery},	// 0x4374AF9
        {26, "Defense Capsule",  Type::Recovery},	// 0x4374AFA
        {27, "Spirit Drop",      Type::Recovery},	// 0x4374AFB
        {28, "Spirit Capsule",   Type::Recovery},	// 0x4374AFC
        {31, "Antidotal Weed",   Type::Recovery},	// 0x4374AFF
        {33, "Smelling Salts",   Type::Recovery},   // unreleased
        
        {29, "Speed Fertilizer",         Type::Cultivation},	// 0x4374B09
        {42, "Flowering Fertilizer",     Type::Cultivation},	// 0x4374B0A
        {43, "Bounty Fertilizer",        Type::Cultivation},	// 0x4374B0B
        {46, "Pumpkin Seed",             Type::Cultivation},	// 0x4374B0E
        {47, "Watermelon Seed",          Type::Cultivation},	// 0x4374B0F
        {48, "Melon Seed",               Type::Cultivation},	// 0x4374B10
        {49, "Gourd Seed",               Type::Cultivation},	// 0x4374B11
        {50, "Tomato Seed",              Type::Cultivation},	// 0x4374B12
        {51, "Eggplant Seed",            Type::Cultivation},	// 0x4374B13
        {52, "Bell Pepper Seed",         Type::Cultivation},	// 0x4374B14
        {53, "Bean Seed",                Type::Cultivation},	// 0x4374B15
        {54, "Wheat Seedling",           Type::Cultivation},	// 0x4374B16
        {55, "Rice Plant Seedling",      Type::Cultivation},	// 0x4374B17
        {56, "Dahlia Bulb",              Type::Cultivation},	// 0x4374B18
        {57, "Tulip Bulb",               Type::Cultivation},	// 0x4374B19
        {58, "Freesia Bulb",             Type::Cultivation},	// 0x4374B1A
        {59, "Red Moonflower Seed",      Type::Cultivation},	// 0x4374B1B
        {60, "Gold Moonlfower Seed",     Type::Cultivation},	// 0x4374B1C
        {61, "Peach Moonflower Seed",    Type::Cultivation},	// 0x4374B1D
        {62, "Pink Moonflower Seed",     Type::Cultivation},	// 0x4374B1E
        {63, "Blue Moonflower Seed",     Type::Cultivation},	// 0x4374B1F
        {64, "Indigo Moonflower Seed",   Type::Cultivation},	// 0x4374B20
        {65, "White Moonflower Seed",    Type::Cultivation},	// 0x4374B21
        {71, "Pumpkin",                  Type::Cultivation},	// 0x4374B27
        {72, "Watermelon",               Type::Cultivation},	// 0x4374B28
        {73, "Melon",                    Type::Cultivation},	// 0x4374B29
        {74, "Gourd",                    Type::Cultivation},	// 0x4374B2A
        {75, "Tomato",                   Type::Cultivation},	// 0x4374B2B
        {76, "Eggplant",                 Type::Cultivation},	// 0x4374B2C
        {77, "Bell Pepper",              Type::Cultivation},	// 0x4374B2D
        {78, "Beans",                    Type::Cultivation},	// 0x4374B2E
        {79, "Wheat",                    Type::Cultivation},	// 0x4374B2F
        {80, "Rice",                     Type::Cultivation},	// 0x4374B30
        {81, "Dahlia",                   Type::Cultivation},	// 0x4374B31
        {82, "Tulip",                    Type::Cultivation},	// 0x4374B32
        {83, "Freesia",                  Type::Cultivation},	// 0x4374B33
        {84, "Red Moonflower",           Type::Cultivation},	// 0x4374B34
        {85, "Gold Moonlfower",          Type::Cultivation},	// 0x4374B35
        {86, "Peach Moonflower",         Type::Cultivation},	// 0x4374B36
        {87, "Pink Moonflower",          Type::Cultivation},	// 0x4374B37
        {88, "Blue Moonflower",          Type::Cultivation},	// 0x4374B38
        {89, "Indigo Moonflower",        Type::Cultivation},	// 0x4374B39
        {90, "White Moonflower",         Type::Cultivation},	// 0x4374B3A

        {101, "Lugworm",          Type::Fishing},	// 0x4374B45
        {102, "Earthworm",        Type::Fishing},	// 0x4374B46
        {103, "Lure",             Type::Fishing},	// 0x4374B47
        {111, "Sardine",          Type::Fishing},	// 0x4374B4F
        {112, "Carp",             Type::Fishing},	// 0x4374B50
        {113, "Blowfish",         Type::Fishing},	// 0x4374B51
        {114, "Bream",            Type::Fishing},	// 0x4374B52
        {115, "Shark",            Type::Fishing},	// 0x4374B53
        {116, "Blue Marlin",      Type::Fishing},	// 0x4374B54
        {117, "Dunkleosteus",     Type::Fishing},	// 0x4374B55
        {118, "Rainbow Trout",    Type::Fishing},	// 0x4374B56
        {119, "Black Bass",       Type::Fishing},	// 0x4374B57
        {120, "Giant Catfish",    Type::Fishing},	// 0x4374B58
        {121, "Royal Fish",       Type::Fishing},	// 0x4374B59
        {122, "Hyneria",          Type::Fishing},	// 0x4374B5A
        {123, "Sandfish",         Type::Fishing},	// 0x4374B5B
        {124, "Rhizodont",        Type::Fishing},	// 0x4374B5C
        {125, "Shaman Fish",      Type::Fishing},	// 0x4374B5D

        {131, "Aquatic Plant",        Type::RawMaterial},	// 0x4374B63
        {132, "Deadwood",             Type::RawMaterial},	// 0x4374B64
        {133, "Rusty Bucket",         Type::RawMaterial},	// 0x4374B65
        {134, "Empty Can",            Type::RawMaterial},	// 0x4374B66
        {138, "Gold Ore",             Type::RawMaterial},	// 0x4374B6A
        {139, "Silver Ore",           Type::RawMaterial},	// 0x4374B6B
        {140, "Copper Ore",           Type::RawMaterial},	// 0x4374B6C
        {141, "Iron Ore",             Type::RawMaterial},	// 0x4374B6D
        {142, "Crystal",              Type::RawMaterial},	// 0x4374B6E
        {143, "Pyrite",               Type::RawMaterial},	// 0x4374B6F
        {144, "Moldavite",            Type::RawMaterial},	// 0x4374B70
        {145, "Meteorite",            Type::RawMaterial},	// 0x4374B71
        {146, "Amber",                Type::RawMaterial},	// 0x4374B72
        {147, "Fluorite",             Type::RawMaterial},	// 0x4374B73
        {148, "Clay",                 Type::RawMaterial},	// 0x4374B74
        {153, "Berries",              Type::RawMaterial},	// 0x4374B79
        {154, "Royal Fern",           Type::RawMaterial},	// 0x4374B7A
        {155, "Tree Branch",          Type::RawMaterial},	// 0x4374B7B
        {156, "Log",                  Type::RawMaterial},	// 0x4374B7C
        {157, "Natural Rubber",       Type::RawMaterial},	// 0x4374B7D
        {158, "Ivy",                  Type::RawMaterial},	// 0x4374B7E
        {159, "Lichen",               Type::RawMaterial},	// 0x4374B7F
        {160, "Mushroom",             Type::RawMaterial},	// 0x4374B80
        {161, "Sap",                  Type::RawMaterial},	// 0x4374B81
        {167, "Mutton",               Type::RawMaterial},	// 0x4374B87
        {168, "Boar Meat",            Type::RawMaterial},	// 0x4374B88
        {169, "Wool",                 Type::RawMaterial},	// 0x4374B89
        {170, "Boar Hide",            Type::RawMaterial},	// 0x4374B8A
        {171, "Wolf Hide",            Type::RawMaterial},	// 0x4374B8B
        {172, "Wolf Fang",            Type::RawMaterial},	// 0x4374B8C
        {173, "Giant Spider Silk",    Type::RawMaterial},	// 0x4374B8D
        {174, "Bat Fang",             Type::RawMaterial},	// 0x4374B8E
        {175, "Bat Wing",             Type::RawMaterial},	// 0x4374B8F
        {176, "Goat Meat",            Type::RawMaterial},	// 0x4374B90
        {177, "Goat Hide",            Type::RawMaterial},	// 0x4374B91
        {178, "Venison",              Type::RawMaterial},	// 0x4374B92
        {179, "Rainbow Spider Silk",  Type::RawMaterial},	// 0x4374B93
        {180, "Boar Liver",           Type::RawMaterial},	// 0x4374B94
        {181, "Scorpion Claw",        Type::RawMaterial},	// 0x4374B95
        {182, "Scorpion Tail",        Type::RawMaterial},	// 0x4374B96
        {183, "Dented Metal Board",   Type::RawMaterial},	// 0x4374B97
        {184, "Stripped Bolt",        Type::RawMaterial},   // 0x4374B98
        {185, "Broken Lens",          Type::RawMaterial},	// 0x4374B99
        {186, "Severed Cable",        Type::RawMaterial},	// 0x4374B9A
        {187, "Broken Arm",           Type::RawMaterial},	// 0x4374B9B
        {188, "Broken Antena",        Type::RawMaterial},	// 0x4374B9C
        {189, "Broken Motor",         Type::RawMaterial},	// 0x4374B9D
        {190, "Broken Battery",       Type::RawMaterial},	// 0x4374B9E
        {191, "Mysterious Switch",    Type::RawMaterial},	// 0x4374B9F
        {192, "Large Gear",           Type::RawMaterial},	// 0x4374BA0
        {193, "Titanium Alloy",       Type::RawMaterial},	// 0x4374BA1
        {194, "Memory Alloy",         Type::RawMaterial},	// 0x4374BA2
        {195, "Rusted Clump",         Type::RawMaterial},	// 0x4374BA3
        {196, "Machine Oil",          Type::RawMaterial},	// 0x4374BA4
        {201, "Forlorn Necklace",     Type::RawMaterial},	// 0x4374BA9
        {202, "Twisted Ring",         Type::RawMaterial},	// 0x4374BAA
        {203, "Broken Earring",       Type::RawMaterial},	// 0x4374BAB
        {204, "Pretty Choker",        Type::RawMaterial},	// 0x4374BAC
        {205, "Metal Piercing",       Type::RawMaterial},	// 0x4374BAD
        {206, "Subdued Bracelet",     Type::RawMaterial},	// 0x4374BAE
        {207, "Technical Guide",      Type::RawMaterial},	// 0x4374BAF
        {208, "Grubby Book",          Type::RawMaterial},	// 0x4374BB0
        {209, "Thick Dictionary",     Type::RawMaterial},	// 0x4374BB1
        {210, "Closed Book",          Type::RawMaterial},	// 0x4374BB2
        {211, "Used Coloring Book",   Type::RawMaterial},	// 0x4374BB3
        {212, "Old Schoolbook",       Type::RawMaterial},	// 0x4374BB4
        {213, "Dirty Bag",            Type::RawMaterial},	// 0x4374BB5
        {214, "Flashy Hat",           Type::RawMaterial},	// 0x4374BB6
        {215, "Leather Gloves",       Type::RawMaterial},	// 0x4374BB7
        {216, "Silk Handkerchief",    Type::RawMaterial},	// 0x4374BB8
        {217, "Leather Boots",        Type::RawMaterial},	// 0x4374BB9
        {218, "Complex Machine",      Type::RawMaterial},	// 0x4374BBA
        {219, "Elaborate Machine",    Type::RawMaterial},	// 0x4374BBB
        {220, "Simple Machine",       Type::RawMaterial},	// 0x4374BBC
        {221, "Stopped Clock",        Type::RawMaterial},	// 0x4374BBD
        {222, "Broken Wristwatch",    Type::RawMaterial},	// 0x4374BBE
        {223, "Rusty Kitchen Knife",  Type::RawMaterial},	// 0x4374BBF
        {224, "Broken Saw",           Type::RawMaterial},	// 0x4374BC0
        {225, "Dented Metal Bat",     Type::RawMaterial},	// 0x4374BC1
        {226, "Shell",                Type::RawMaterial},	// 0x4374BC3
        {227, "Gastropod",            Type::RawMaterial},	// 0x4374BC4
        {228, "Bivalve",              Type::RawMaterial},	// 0x4374BC5
        {229, "Seaweed",              Type::RawMaterial},	// 0x4374BC6
        {230, "Empty Bottle",         Type::RawMaterial},	// 0x4374BC7
        {231, "Driftwood",            Type::RawMaterial},	// 0x4374BC8
        {232, "Pearl",                Type::RawMaterial},	// 0x4374BC9
        {233, "Black Pearl",          Type::RawMaterial},	// 0x4374BCA
        {234, "Crab",                 Type::RawMaterial},	// 0x4374BCB
        {235, "Starfish",             Type::RawMaterial},	// 0x4374BCC
        {241, "Sea Turtle Egg",       Type::RawMaterial},	// 0x4374BD2
        {242, "Broken Pottery",       Type::RawMaterial},	// 0x4374BD3
        {243, "Desert Rose",          Type::RawMaterial},	// 0x4374BD4
        {244, "Giant Egg",            Type::RawMaterial},	// 0x4374BD5
        {245, "Damascus Steel",       Type::RawMaterial},	// 0x4374BD6
        {246, "Eagle Egg",            Type::RawMaterial},	// 0x4374BD7
        {247, "Chicken Egg",          Type::RawMaterial},	// 0x4374BD8
        {248, "Mouse Tail",           Type::RawMaterial},	// 0x4374BDA
        {249, "Lizard Tail",          Type::RawMaterial},	// 0x4374BDB
        {253, "Deer Antler",          Type::RawMaterial},	// 0x4374BDF

        {256, "Moon Key",                 Type::KeyItem},   // 0x4374BE0
        {257, "Star Key",                 Type::KeyItem},	// 0x4374BE1
        {258, "Light Key",                Type::KeyItem},	// 0x4374BE2
        {259, "Darkness Key",             Type::KeyItem},	// 0x4374BE3
        {260, "Fine Flour",               Type::KeyItem},	// 0x4374BE4 unreleased
        {261, "Coarse FLour",             Type::KeyItem},	// 0x4374BE5 unreleased
        {262, "Perfume Bottle",           Type::KeyItem},	// 0x4374BE6 unreleased
        {263, "Postman's Parcel",         Type::KeyItem},	// 0x4374BE7
        {264, "Lover's Letter",           Type::KeyItem},	// 0x4374BE8 unreleased
        {265, "Water Filter",             Type::KeyItem},	// 0x4374BE9 unreleased
        {266, "Royal Compass",            Type::KeyItem},	// 0x4374BEA
        {267, "Vapor Moss",               Type::KeyItem},	// 0x4374BEB
        {268, "Valley Spider Silk",       Type::KeyItem},	// 0x4374BEC unreleased
        {269, "Animal Guidebook",         Type::KeyItem},	// 0x4374BED unreleased
        {270, "Ore Guidebook",            Type::KeyItem},	// 0x4374BEE unreleased
        {271, "Plant Guidebook",          Type::KeyItem},	// 0x4374BEF unreleased
        {272, "Red Book",                 Type::KeyItem},	// 0x4374BF0
        {273, "Blue Book",                Type::KeyItem},	// 0x4374BF1
        {274, "Old Lady's Elixer",        Type::KeyItem},	// 0x4374BF2
        {275, "Old Lady's Elixer+",       Type::KeyItem},	// 0x4374BF3
        {276, "Parcel for The Aerie",     Type::KeyItem},	// 0x4374BF4
        {277, "Parcel for Seafront",      Type::KeyItem},	// 0x4374BF5
        {278, "Cookbook",                 Type::KeyItem},	// 0x4374BF6
        {279, "Parcel for Facade",        Type::KeyItem},	// 0x4374BF7
        {280, "Max's Herbs",              Type::KeyItem},	// 0x4374BF8
        {281, "Drifting Cargo",           Type::KeyItem},	// 0x4374BF9
        {282, "Drifting Cargo 2",         Type::KeyItem},	// 0x4374BFA
        {283, "Drifting Cargo 3",         Type::KeyItem},	// 0x4374BFB
        {284, "Drifting Cargo 4",         Type::KeyItem},	// 0x4374BFC unreleased
        {285, "Old Package",              Type::KeyItem},	// 0x4374BFD unreleased
        {286, "Mermaid Tear",             Type::KeyItem},	// 0x4374BFE
        {287, "Mandrake Leaf",            Type::KeyItem},	// 0x4374BFF
        {288, "Energizer",                Type::KeyItem},	// 0x4374C00 unreleased
        {289, "Toad Oil",                 Type::KeyItem},	// 0x4374C01
        {290, "Sleep-B-Gone",             Type::KeyItem},	// 0x4374C02 unreleased
        {291, "Antidote",                 Type::KeyItem},	// 0x4374C03
        {292, "Gold Bracelet",            Type::KeyItem},	// 0x4374C04 unreleased
        {293, "Elite Kitchen Knife",      Type::KeyItem},	// 0x4374C05
        {294, "Elevator Parts",           Type::KeyItem},	// 0x4374C06
        {295, "Dirty Treasure Map",       Type::KeyItem},	// 0x4374C07
        {296, "Restored Treasure Map",    Type::KeyItem},	// 0x4374C08
        {297, "Jade Hair Ornament",       Type::KeyItem},	// 0x4374C09
        {298, "Employee List",            Type::KeyItem},	// 0x4374C0A
        {299, "Small Safe",               Type::KeyItem},	// 0x4374C0B unreleased
        {300, "Safe Key",                 Type::KeyItem},	// 0x4374C0C unreleased
        {301, "Great Tree Root",          Type::KeyItem},	// 0x4374C0D
        {302, "Eye of Power",             Type::KeyItem},	// 0x4374C0E
        {303, "Ribbon",                   Type::KeyItem},	// 0x4374C0F unreleased
        {304, "Yonah's Ribbon",           Type::KeyItem},	// 0x4374C10
        {305, "Bronze Key",               Type::KeyItem},	// 0x4374C11
        {306, "Brass Key",                Type::KeyItem},	// 0x4374C12 unreleased
        {307, "Boar Tusk",                Type::KeyItem},	// 0x4374C13
        {308, "Pressed Freesia",          Type::KeyItem},	// 0x4374C14
        {309, "Potted Freesia",           Type::KeyItem},	// 0x4374C15
        {310, "Freesia (Delivery)",       Type::KeyItem},	// 0x4374C16
        {311, "Pile of Junk",             Type::KeyItem},	// 0x4374C17
        {312, "Old Gold Coin",            Type::KeyItem},	// 0x4374C18
        {313, "Market Map",               Type::KeyItem},	// 0x4374C19
        {314, "AA Keycard",               Type::KeyItem},	// 0x4374C1A
        {315, "KA Keycard",               Type::KeyItem},	// 0x4374C1B
        {316, "SA Keycard",               Type::KeyItem},	// 0x4374C1C
        {317, "TA Keycard",               Type::KeyItem},	// 0x4374C1D
        {318, "NA Keycard",               Type::KeyItem},	// 0x4374C1E
        {319, "HA Keycard",               Type::KeyItem},	// 0x4374C1F
        {320, "MA Keycard",               Type::KeyItem},	// 0x4374C20
        {321, "YA Keycard",               Type::KeyItem},	// 0x4374C21
        {322, "RA Keycard",               Type::KeyItem},	// 0x4374C22
        {323, "WA Keycard",               Type::KeyItem},	// 0x4374C23
        {324, "Cultivator's Handbook",    Type::KeyItem},	// 0x4374C24
        {325, "Red Bag",                  Type::KeyItem},	// 0x4374C25 1.22
        {326, "Lantern",                  Type::KeyItem},	// 0x4374C26 1.22
        {327, "Empty Lantern",            Type::KeyItem},	// 0x4374C27 1.22 unreleased
        {328, "Hold Key",                 Type::KeyItem},   // 0x4374C28 1.22
        {329, "Passageway Key",           Type::KeyItem},	// 0x4374C29 1.22
        {330, "Goat Key",                 Type::KeyItem},	// 0x4374C2A 1.22 unreleased
        {331, "Lizard Key",               Type::KeyItem},	// 0x4374C2B 1.22 unreleased
        {332, "Unlocking Procedure Memo", Type::KeyItem},   // 0x4374C2C 1.22 unreleased
        {333, "Red Jewel?",               Type::KeyItem},	// 0x4374C2D 1.22
        {334, "Red Flowers",              Type::KeyItem},   // 0x4374C2E 1.22 [2231600]NoText
        {335, "Apples",                   Type::KeyItem},	// 0x4374C2F 1.22 [2231700]NoText

        /*
        DOCUMENTS:
        "Look At The Sky"	Documents	
        "Don’t Try So Hard"	Documents	
        "My Birthday"	Documents	
        Love Letter 2/12/3340	Documents	
        Love Letter 3/28/3340	Documents	
        Love Letter 5/1/3340	Documents	
        Letter From The Mayor	Documents	
        The Postman's Request	Documents	Unreleased
        The Postman's Thanks	Documents	Unreleased
        Invitation from a Stranger	Documents	Unreleased
        Grand Re-Opening Notice	Documents	Unreleased
        Wedding Invitation	Documents	
        Letter from the King	Documents	Unreleased
        Underground Research Record 1	Documents	
        Underground Research Record 2	Documents	
        Underground Research Record 3	Documents	
        Underground Research Record 4	Documents	
        Letter to the Chief	Documents	Unreleased
        Letter to Two Brothers Weaponry	Documents	Unreleased
        Letter to Popola	Documents	
        Letter to a Faraway Lover	Documents	
        Letter from Emil	Documents	
        Weapon Upgrade Notice	Documents	
        Letter from the Chief of The Aerie	Documents	
        Project Gestalt Report 0923	Documents	
        Project Gestalt Report 9182	Documents	
        Project Gestalt Report 10432	Documents	
        Project Gestalt Report 11242	Documents	
        
        MAPS:
        World Map	Maps	
        Village Map	Maps	
        Lost Shrine Area Map	Maps	Unreleased
        Lost Shrine Map	Maps	
        The Aerie Map	Maps	
        Seafront Map	Maps	
        Desert Map	Maps	
        Façade Map	Maps	
        Barren Temple Map	Maps	
        Junk Heap Area Map	Maps	
        Junk Heap Map	Maps	
        Manor Map	Maps	
        Forest Of Myth Map	Maps	
        Underground Facility Map	Maps	
        Shadowlord's Castle Map	Maps	
        Northern Plains Map	Maps	
        Southern Plains Map	Maps	
        Eastern Road Map	Maps	
        Beneath the Forest of Myth Map	Maps	Unreleased
        Tokyo Map	Maps	Unreleased
        */
    };
}