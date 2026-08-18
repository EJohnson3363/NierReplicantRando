/******************** GAME/WORDS ********************/
// Word I/O
//
// Utilizes IDs and data structures found by Acurisu:
// https://github.com/Acurisu/NieR-Replicant-ver.1.22474487139/
//
/****************************************************/

#include <bit>
#include "Words.h"

// Private
namespace{
    uint32_t ToWordID(Words_Uloth word){
        const auto value = static_cast<uint64_t>(word);
        return static_cast<uint32_t>(std::countr_zero(value));
    }

    uint32_t ToWordID(Words_Zarken word){
        const auto value = static_cast<uint64_t>(word);
        return 60u + static_cast<uint32_t>(std::countr_zero(value));
    }
}

// Public
namespace Game::Words{
    bool HasWord(Words_Uloth word){
        return Game::API::HasWord(ToWordID(word));
    }

    bool HasWord(Words_Zarken word){
        return Game::API::HasWord(ToWordID(word));
    }

    bool GiveWord(Words_Uloth word){
        return Game::API::SetWord(ToWordID(word), true);
    }

    bool GiveWord(Words_Zarken word){
        return Game::API::SetWord(ToWordID(word), true);
    }
}