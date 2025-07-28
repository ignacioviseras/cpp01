#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main()
{
    {
        Weapon club = Weapon("gun");
        HumanA paco("paco", club);
        paco.attack();
        club.setType("another weapon");
        paco.attack();
    }
    {
        Weapon club = Weapon("katana");
        HumanB pepe("pepe");
        pepe.setWeapon(club);
        pepe.attack();
        club.setType("another weapon");
        pepe.attack();
    }
    return 0;
}