cmake_minimum_required(VERSION 3.16)

project(NierReplicantRando LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

if(NOT WIN32)
  message(FATAL_ERROR "This plugin targets Windows.")
endif()

add_library(NierReplicantRando SHARED
  src/Plugin.cpp
  src/LT/LunarTear.cpp
  src/Game/Game.cpp
)

target_include_directories(NierReplicantRando PRIVATE
  ${CMAKE_CURRENT_SOURCE_DIR}
  ${CMAKE_CURRENT_SOURCE_DIR}/src
  ${CMAKE_CURRENT_SOURCE_DIR}/third_party/LunarTearLoader/src
)

target_compile_definitions(NierReplicantRando PRIVATE
  _CRT_SECURE_NO_WARNINGS
  NOMINMAX
)

if(MSVC)
  target_compile_options(NierReplicantRando PRIVATE /W3)
endif()