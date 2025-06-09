#pragma once

#include <iostream>
#include <string>
#include <iomanip>

class Zombie {
    private:
        std::string _name;
		void setName(std::string n);
		std::string getName(void);

    public:
        Zombie();
        ~Zombie();

		void announce(void);
		Zombi* newZombie(std::string name);
		void randomChump(std::string name);
};

