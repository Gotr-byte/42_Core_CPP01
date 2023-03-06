#include "./Zombie.hpp"
#include <iostream>
Zombie::Zombie (): name("defualt"){
}
Zombie::~Zombie(void){
	std::cout << this->name << " is no more" << std::endl;
}

void Zombie::announce( void ){
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName (std::string inName){
	this->name = inName;
}