#include "HumanA.hpp"

// HumanA::HumanA(const std::string& n, Weapon& w) {
// 	_name = n;
// 	_weapon = w;
// }
HumanA::HumanA(const std::string& n, Weapon& w) : _name(n), _weapon(w) {}


void HumanA::attack(void) const{
	std::cout << _name << " attack with " << _weapon.getType() << std::endl;
}