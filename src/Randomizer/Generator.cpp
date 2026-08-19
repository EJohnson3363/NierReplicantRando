/******************** RANDO/GENERATOR ********************/
// Generates a seed
//
/**********************************************************/

#include "Generator.h"

namespace Randomizer{
    Generator::Generator(uint32_t seed) : seed(seed){
    }

    // Assumes num_rewards == num_locations
    std::vector<Placement> Generator::Generate(const RewardPool& rewards, const LocationPool& locations){
        // Copy rewards to avoid shuffling original pool
        std::vector<Reward> shuffled = rewards.GetRewards();

        // Shuffler
        std::mt19937 rng(seed);
        std::shuffle(shuffled.begin(), shuffled.end(), rng);

        // Initialize result vector
        std::vector<Placement> placements;
        placements.reserve(locations.GetLocations().size());

        // Place results into vector
        for(size_t i = 0; i < locations.GetLocations().size(); ++i){
            placements.push_back({locations.GetLocations()[i], shuffled[i]});
        }

        // Return results
        return placements;
    }
}