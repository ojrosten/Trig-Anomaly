cmake_minimum_required(VERSION 3.20)

project(Trig LANGUAGES CXX)

add_executable(Trig Main.cpp)
target_compile_features(Trig PUBLIC cxx_std_23)

target_sources(Trig PRIVATE Main.cpp)
