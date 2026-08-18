/******************** GAME/FLAGS ********************/
// Flag management for flag IDs 0-2047
//
// Utilizes IDs and data structures found by Acurisu:
// https://github.com/Acurisu/NieR-Replicant-ver.1.22474487139/
//
/****************************************************/

#pragma once

#include <bit>
#include <cstdint>

#include "third_party/Player.hpp"
#include "API.h"

// Flag management
namespace Game::Flags{
    template <typename Group>
    constexpr uint32_t BaseID();

    template <>
    constexpr uint32_t BaseID<GameFlags_500>(){ return 0; }

    template <>
    constexpr uint32_t BaseID<GameFlags_508>(){ return 64; }

    template <>
    constexpr uint32_t BaseID<GameFlags_510>(){ return 128; }

    template <>
    constexpr uint32_t BaseID<GameFlags_518>(){ return 192; }

    template <>
    constexpr uint32_t BaseID<GameFlags_520>(){ return 256; }

    template <>
    constexpr uint32_t BaseID<GameFlags_528>(){ return 320; }

    template <>
    constexpr uint32_t BaseID<GameFlags_530>(){ return 384; }

    template <>
    constexpr uint32_t BaseID<GameFlags_538>(){ return 448; }

    template <>
    constexpr uint32_t BaseID<GameFlags_540>(){ return 512; }

    template <>
    constexpr uint32_t BaseID<GameFlags_548>(){ return 576; }

    template <>
    constexpr uint32_t BaseID<GameFlags_550>(){ return 640; }

    template <>
    constexpr uint32_t BaseID<GameFlags_558>(){ return 704; }

    template <>
    constexpr uint32_t BaseID<GameFlags_560>(){ return 768; }

    template <>
    constexpr uint32_t BaseID<GameFlags_568>(){ return 832; }

    template <>
    constexpr uint32_t BaseID<GameFlags_570>(){ return 896; }

    template <>
    constexpr uint32_t BaseID<GameFlags_580>(){ return 1024; }

    template <>
    constexpr uint32_t BaseID<GameFlags_5A0>(){ return 1280; }

    template <>
    constexpr uint32_t BaseID<GameFlags_5A8>(){ return 1344; }

    template <>
    constexpr uint32_t BaseID<GameFlags_5B0>(){ return 1408; }

    template <>
    constexpr uint32_t BaseID<GameFlags_5B8>(){ return 1472; }

    template <>
    constexpr uint32_t BaseID<GameFlags_5C0>(){ return 1536; }

    template <>
    constexpr uint32_t BaseID<GameFlags_5C8>(){ return 1600; }

    template <>
    constexpr uint32_t BaseID<GameFlags_5D0>(){ return 1664; }

    template <>
    constexpr uint32_t BaseID<GameFlags_5D8>(){ return 1728; }

    template <>
    constexpr uint32_t BaseID<GameFlags_5E0>(){ return 1792; }

    template <>
    constexpr uint32_t BaseID<GameFlags_5E8>(){ return 1856; }

    template <>
    constexpr uint32_t BaseID<GameFlags_5F0>(){ return 1920; }

    template <>
    constexpr uint32_t BaseID<GameFlags_5F8>(){ return 1984; }

    template <typename Group>
    constexpr uint32_t ToID(Group flag){
        const auto value = static_cast<uint64_t>(flag);

        return BaseID<Group>() + static_cast<uint32_t>(std::countr_zero(value));
    }

    bool IsFlagSet(uint32_t flagID);
    bool SetFlag(uint32_t flagID);

    template <typename Group>
    bool IsFlagSet(Group flag){
        return IsFlagSet(ToID(flag));
    }

    template <typename Group>
    bool SetFlag(Group flag){
        return SetFlag(ToID(flag));
    }
}