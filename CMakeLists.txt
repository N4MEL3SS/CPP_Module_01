cmake_minimum_required(VERSION 3.24)
project(Module_1)

set(CMAKE_CXX_STANDARD 98)
add_compile_options(-Wall -Wextra -Werror)

add_executable(Module_1_ex00 ex00/Zombie.cpp ex00/Zombie.hpp ex00/newZombie.cpp ex00/main.cpp ex00/randomChump.cpp)
add_executable(Module_1_ex01 ex01/main.cpp ex01/zombieHorde.cpp ex01/Zombie.cpp ex01/Zombie.hpp)
add_executable(Module_1_ex02 ex02/main.cpp)
add_executable(Module_1_ex03 ex03/Weapon.cpp ex03/Weapon.hpp ex03/HumanA.cpp ex03/HumanA.hpp ex03/HumanB.cpp ex03/HumanB.hpp ex03/main.cpp)
add_executable(Module_1_ex04 ex04/main.cpp)
add_executable(Module_1_ex05 ex05/Harl.cpp ex05/Harl.hpp ex05/main.cpp)
#add_executable(Module_1_ex06)
