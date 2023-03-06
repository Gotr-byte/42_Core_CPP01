#include "Weapon.hpp"

Weapon::Weapon(std::string inType) : type(inType){}
Weapon::~Weapon(){}

std::string const & getType() {return this->type;}
void setType(std::string inType) {this->type = inType;}