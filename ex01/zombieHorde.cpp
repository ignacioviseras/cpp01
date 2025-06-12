#include "Zombie.hpp"

Zombie *zombieHorde(int x, std::string n) {
	Zombie* horde = new Zombie[x];
	for (int i = 0; i < x; i++) {
		horde[i].setName(n);
		horde[i].announce();
	}
	return horde;
}
