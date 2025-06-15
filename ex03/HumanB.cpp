#include "HumanB.hpp"

HumanB::HumanB(const std::string& name)
{
	_name = name;
	_weapon = NULL;
}

void HumanB::setWeapon(Weapon& w) {
	_weapon = &w;
}

void HumanB::attack(void) {
	if (_weapon)
		std::cout << _name << " attack with " << _weapon->getType() << std::endl;
	else
		std::cout << _name << " no tiene un arma para atacar" << std::endl;
}

