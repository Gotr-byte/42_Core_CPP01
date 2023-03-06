
#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string inName, Weapon inWeapon)
{
    this->name = inName;
    this->weapon = inWeapon;
}

HumanA::~HumanA(){}

void HumanA::attack()
{
    std::cout << this->name << "attacks with " << this->weapon.getType() << std::endl;
}