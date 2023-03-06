#pragma once

#include <iostream>
#include "Weapon.hpp"

class HumanB{
public:
    HumanB(std::string inName);
    ~HumanB();
    void    setWeapon(Weapon &inWeapon);
    void    attack();
private:
    std::string name;
    Weapon      *weapon;
};