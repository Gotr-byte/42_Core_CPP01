#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );
void	randomChump( std::string name );

#define ZombieNumber 10

int main( void )
{
	int zombieNumber = 10;
	Zombie jfubara;
	jfubara.setName("jfubara");
	jfubara.announce();

	Zombie *hordes = zombieHorde(zombieNumber, "Wild Hunt");
	while(zombieNumber--)
	{
		hordes[zombieNumber].announce();
	}
	delete [] hordes;
	return 0;
}