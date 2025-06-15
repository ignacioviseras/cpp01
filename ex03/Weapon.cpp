#include "Weapon.hpp"

Weapon::Weapon(){

}

Weapon::Weapon(const std::string& n){
	_type = n;
}

void Weapon::setType(const std::string& n) {
	_type = n;
}

const std::string& Weapon::getType(void) const{
	return _type;
}