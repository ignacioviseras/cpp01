#pragma once

#include <iostream>
#include <string>
#include <iomanip>
#include "Weapon.hpp"

class HumanB {
    private:
        std::string _name;
		Weapon* _weapon;
		
	public:
		HumanB(const std::string& n);
		
		void setWeapon(Weapon& _weapon);
		void attack(void);
		
};