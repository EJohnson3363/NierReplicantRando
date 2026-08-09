#include "Player.h"

enum class Weapon : int{
  Nameless_Blade = 0x0,
  Phoenix_Dagger = 0x1,
  Beastbain = 0x2,
  Labyrinths_Whisper = 0x3,
  Fools_Embrace = 0x4,
  Ancient_Overlord = 0x5,
  Rebirth = 0x6,
  Earth_Wyrms_Claw = 0x7,
  Nirvana_Dagger = 0x8,
  Moonrise = 0x9,
  Blade_of_Treachery = 0xA,
  Lily_Leaf_Sword = 0xB,
  Faith = 0xC,
  Iron_Pipe = 0xD,
  Kaines_Sword = 0xE,
  Virtuous_Contract = 0xF,
  Cruel_Oath = 0x10,
  Kusanagi = 0x14,
  Phoenix_Sword = 0x15,
  Beastlord = 0x16,
  Labyrinths_Song = 0x17,
  Fools_Lament = 0x18,
  Fang_of_the_Twins = 0x19,
  Axe_of_Beheading = 0x1A,
  Vile_Axe = 0x1B,
  Iron_Will = 0x1C,
  Virtuous_Treaty = 0x1D,
  Transience = 0x28,
  Phoenix_Spear = 0x29,
  Beastcurse = 0x2A,
  Labyrinths_Shout = 0x2B,
  Fools_Accord = 0x2C,
  The_Devil_Queen = 0x2D,
  Sunrise = 0x2E,
  Spear_of_the_Usurper = 0x2F,
  Dragoon_Lance = 0x30,
  Captains_Holy_Spear = 0x31,
  Virtuous_Dignity = 0x32,
};

enum class Weapon_Level : char{
  Level_1 = 0x0,
  Level_2 = 0x1,
  Level_3 = 0x2,
  Level_4 = 0x3,
  Not_Owned = 0xFF,
};

struct Weapons{
  Weapon_Level nameless_blade;
  Weapon_Level phoenix_dagger;
  Weapon_Level beastbain;
  Weapon_Level labyrinths_whisper;
  Weapon_Level fools_embrace;
  Weapon_Level ancient_overlord;
  Weapon_Level rebirth;
  Weapon_Level earth_wyrms_claw;
  Weapon_Level nirvana_dagger;
  Weapon_Level moonrise;
  Weapon_Level blade_of_treachery;
  Weapon_Level lily_leaf_sword;
  Weapon_Level faith;
  Weapon_Level iron_pipe;
  Weapon_Level kaines_sword;
  Weapon_Level virtuous_contract;
  Weapon_Level cruel_oath;
  Weapon_Level unused_weapon_17_19[3];
  Weapon_Level kusanagi;
  Weapon_Level phoenix_sword;
  Weapon_Level beastlord;
  Weapon_Level labyrinths_song;
  Weapon_Level fools_lament;
  Weapon_Level fang_of_the_twins;
  Weapon_Level axe_of_beheading;
  Weapon_Level vile_axe;
  Weapon_Level iron_will;
  Weapon_Level virtuous_treaty;
  Weapon_Level unused_weapon_30_39[10];
  Weapon_Level transience;
  Weapon_Level phoenix_spear;
  Weapon_Level beastcurse;
  Weapon_Level labyrinths_shout;
  Weapon_Level fools_accord;
  Weapon_Level the_devil_queen;
  Weapon_Level sunrise;
  Weapon_Level spear_of_the_usurper;
  Weapon_Level dragoon_lance;
  Weapon_Level captains_holy_spear;
  Weapon_Level virtuous_dignity;
  Weapon_Level unused_weapon_51_63[13];
};