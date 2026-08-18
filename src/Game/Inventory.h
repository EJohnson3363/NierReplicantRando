/******************** GAME/INVENTORY ********************/
// Inventory I/O
//
// Utilizes IDs and data structures found by Acurisu:
// https://github.com/Acurisu/NieR-Replicant-ver.1.22474487139/
//
/********************************************************/

#pragma once

#include <cstdint>

#include "third_party/Player.hpp"
#include "Save.h"
#include "API.h"

// ID conversion
namespace Game::Items{
    template <typename Group>
    constexpr uint32_t BaseID();

    template <>
    constexpr uint32_t BaseID<Recovery>(){
        return 0;
    }

    template <>
    constexpr uint32_t BaseID<Cultivation>(){
        return 41;
    }

    template <>
    constexpr uint32_t BaseID<Fishing>(){
        return 101;
    }

    template <>
    constexpr uint32_t BaseID<Raw_Materials>(){
        return 131;
    }

    template <>
    constexpr uint32_t BaseID<Key_Items>(){
        return 256;
    }

    template <>
    constexpr uint32_t BaseID<Documents>(){
        return 512;
    }

    template <>
    constexpr uint32_t BaseID<Extra_Documents>(){
        return 544;
    }

    template <>
    constexpr uint32_t BaseID<Maps>(){
        return 704;
    }

    template <typename Group>
    uint32_t ToID(char Group::* member){
        Group group{};

        const auto* base =
            reinterpret_cast<const char*>(&group);

        const auto* field =
            reinterpret_cast<const char*>(&(group.*member));

        return BaseID<Group>() + static_cast<uint32_t>(field - base);
    }
}

// Inventory management
namespace Game::Inventory{
    uint32_t GetItemCount(uint32_t itemID);
    bool HasItem(uint32_t itemID);
    bool SetItemCount(uint32_t itemID, uint8_t count);  // Direct
    uint32_t GiveItem(uint32_t itemID, uint8_t count);  // High level
    uint32_t RemoveItem(uint32_t itemID, uint8_t count);// High level

    template <typename Group>
    uint32_t GetItemCount(char Group::* item){
        return GetItemCount(Game::Items::ToID(item));
    }

    template <typename Group>
    bool HasItem(char Group::* item){
        return HasItem(Game::Items::ToID(item));
    }

    template <typename Group>
    bool SetItemCount(char Group::* item, uint8_t count){
        return SetItemCount(
            Game::Items::ToID(item),
            count
        );
    }

    template <typename Group>
    uint32_t GiveItem(char Group::* item, uint8_t count){
        return GiveItem(
            Game::Items::ToID(item),
            count
        );
    }

    template <typename Group>
    uint32_t RemoveItem(char Group::* item, uint8_t count){
        return RemoveItem(
            Game::Items::ToID(item),
            count
        );
    }
}