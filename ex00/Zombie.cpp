#include "Zombie.hpp"


Zombie::Zombie() {
	_name = "";
}

Zombie::Zombie(std::string n){
	_name = n;
}

Zombie::~Zombie() {
	
}

void announce(void) {
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void setName(std::string n) {
	_name  = n;
}

std::string getName(void) {
	return _name;
}
