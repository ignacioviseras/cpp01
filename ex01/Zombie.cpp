#include "Zombie.hpp"

Zombie::Zombie() {
	this->_name = "";
}

Zombie::Zombie(std::string n){
	this->_name = n;
}

Zombie::~Zombie() {
}

void Zombie::announce(void) {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string n) {
	this->_name  = n;
}

std::string Zombie::getName(void) {
	return this->_name;
}

void Zombie::kill( Zombie *z )
{
	std::cout << z->getName() << ": dead" << std::endl;
	delete z;
}