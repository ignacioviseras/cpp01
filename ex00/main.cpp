#include "Zombie.hpp"


int main() {
	Zombie *z;

	z = newZombie("Pepe");
	z->announce();
	delete z;

	randomChump("Paco");
	return 0;
}
