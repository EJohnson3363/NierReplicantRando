/******************** RANDOMIZER ********************/
// Defines the main randomizer function that interfaces
// with all other randomizer files
//
/**********************************************************/

#include <string>

#include "LT/LunarTear.h"
#include "Game/Inventory.h"

#include "Randomizer.h"
#include "Generator.h"
#include "Pool.h"
#include "Reward.h"


void TestRandomizer(){
    using namespace Randomizer;

    RewardPool rewards;
    LocationPool locations;

    // Temporary test locations until real IDs are known
    const auto location0 = static_cast<Data::Locations::ID>(0);
    const auto location1 = static_cast<Data::Locations::ID>(1);
    const auto location2 = static_cast<Data::Locations::ID>(2);

    locations.Add(location0);
    locations.Add(location1);
    locations.Add(location2);

    // Three different reward types
    rewards.Add(WeaponReward{Weapon::Transience});
    rewards.Add(MagicReward{static_cast<Ability>(4)});
    rewards.Add(ItemReward{&Raw_Materials::titanium_alloy, 3});

    // Generate a seed
    Generator generator(54321);

    const auto placements = generator.Generate(rewards, locations);

    // Print results
    for(const auto& placement : placements){
        std::string rewardName;

        std::visit([&](const auto& reward){
            using T = std::decay_t<decltype(reward)>;

            if constexpr(std::is_same_v<T, WeaponReward>){
                rewardName = "Weapon " + std::to_string(static_cast<uint32_t>(reward.weapon));
            }
            else if constexpr(std::is_same_v<T, MagicReward>){
                rewardName = "Magic " + std::to_string(static_cast<uint32_t>(reward.magic));
            }
            else if constexpr(std::is_same_v<T, ItemReward>){
                rewardName = "Item " + std::to_string(reward.id) + " x" + std::to_string(reward.count);
            }
        }, placement.reward);

        LT::LogInfo("Location " + std::to_string(static_cast<uint32_t>(placement.location)) + " -> " + rewardName);
    }

    // Test GiveReward()
    const auto before = Game::Inventory::GetItemCount(&Raw_Materials::titanium_alloy);
    const bool success = GiveReward(ItemReward{&Raw_Materials::titanium_alloy, 3});
    const auto after = Game::Inventory::GetItemCount(&Raw_Materials::titanium_alloy);

    LT::LogInfo("Titanium Alloy: " + std::to_string(before) + " -> " + std::to_string(after) + " (" + (success ? "success" : "failed") + ")");
}