#pragma once

#include <iostream>
#include <string>
#include <iomanip>
#include "Weapon.hpp"

class HumanA {
    private:
        std::string _name;
		Weapon& _weapon;
		
	public:
		HumanA(const std::string& n, Weapon& w);
		void attack(void) const;
};