#include "Zombie.hpp"

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

int main( void )
{
	Zombie jfubara("jfubara");
	jfubara.announce();

	Zombie *bob = newZombie("bob");
	bob->announce();
	delete bob;

    randomChump("joe");

	return 0;
}