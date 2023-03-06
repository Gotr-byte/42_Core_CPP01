#pragma once

#include <iostream>
#include "Weapon.hpp"

class HumanA{
public:
    HumanA(std::string inName, Weapon inWeapon);
    ~HumanA();
    void    attack();
private:
    std::string name;
    Weapon      *weapon;
};