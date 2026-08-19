/******************** RANDO/REWARD ********************/
// Reward data
// - Defines what can be given to the player
// - Grants rewards
//
/******************************************************/

#include "Reward.h"

#include "Game/Inventory.h"
#include "Game/Weapons.h"
#include "Game/Magic.h"
#include "Game/Words.h"
#include "Game/Flags.h"

namespace Randomizer{
    bool GiveReward(const Reward& reward){
        return std::visit([](const auto& value) -> bool{
            using T = std::decay_t<decltype(value)>;

            // Select reward type to grant
            if constexpr(std::is_same_v<T, ItemReward>){
                return Game::Inventory::GiveItem(value.id, value.count) > 0;
            }
            else if constexpr(std::is_same_v<T, WeaponReward>){
                return Game::Weapons::GiveWeapon(value.weapon);
            }
            else if constexpr(std::is_same_v<T, MagicReward>){
                return Game::Magic::GiveMagic(value.magic);
            }
            else if constexpr(std::is_same_v<T, UlothWordReward>){
                return Game::Words::GiveWord(value.word);
            }
            else if constexpr(std::is_same_v<T, ZarkenWordReward>){
                return Game::Words::GiveWord(value.word);
            }
            else if constexpr(std::is_same_v<T, FlagReward>){
                return Game::Flags::SetFlag(value.flagID);
            }

            return false;
        }, reward);
    }
}