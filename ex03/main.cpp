#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main() {
    {
    Weapon club = Weapon("crude spiked club");
    HumanA bob("Bob", club);
    bob.attack();
    club.setType("some other type of club");
    bob.attack();
}
    {
    Weapon club = Weapon("crude spiked club");
    HumanB joe("Joe");
    joe.setWeapon(club);
    joe.attack();
    club.setType("with a piece of wood and a nail");
    joe.attack();
}
    return 0;

}

