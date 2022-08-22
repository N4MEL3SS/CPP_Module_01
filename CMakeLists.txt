cmake_minimum_required(VERSION 3.24)
project(Module_1)

set(CMAKE_CXX_STANDARD 98)
add_compile_options(-Wall -Wextra -Werror)

add_executable(Module_1_ex00 ex00/Zombie.cpp ex00/Zombie.hpp ex00/newZombie.cpp ex00/main.cpp ex00/randomChump.cpp)
add_executable(Module_1_ex01 ex01/main.cpp ex01/zombieHorde.cpp ex01/Zombie.cpp ex01/Zombie.hpp)
#add_executable(Module_1_ex02)
#add_executable(Module_1_ex03)
#add_executable(Module_1_ex04)
#add_executable(Module_1_ex05)
#add_executable(Module_1_ex06)
