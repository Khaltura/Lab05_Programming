cmake_minimum_required(VERSION 3.5)
project(multifile)

include(CTest)
enable_testing()

set(Lab05 main.cpp vozvedenie.cpp checkinput.cpp)

add_executable(Lab05 main.cpp vozvedenie.cpp checkinput.cpp)

include(CPack)