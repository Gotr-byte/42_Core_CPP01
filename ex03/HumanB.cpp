#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string inName){this->name = inName;}
HumanB::~HumanB(){}

void HumanB::setWeapon(Weapon &inWeapon)
{
    this->weapon = &inWeapon;
}

void HumanB::attack()
{
    std::cout << this->name << " attacks with " << this->weapon->getType() << std::endl;
}