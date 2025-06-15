#pragma once

#include <iostream>
#include <string>
#include <iomanip>

class Weapon {
    private:
        std::string _type;
		
	public:
        Weapon();
		Weapon(const std::string& n);
        void setType(const std::string& n);
        const std::string& getType(void) const; 
};

// Implemente una clase de Arma que tenga:
// • Un tipo de atributo privado, que es una cadena.
// • Una función miembro getType() que devuelve una referencia constante al tipo.
// • Una función miembro setType() que establece el tipo utilizando el nuevo valor pasado como parámetro.
// Ahora, crea dos clases: HumanA y HumanB. Ambos tienen un arma y
// un nombre. También tienen una función miembro attack() que muestra (sin el ángulo
// paréntesis):
// <nombre> ataca con su <tipo de arma>
// HumanA y HumanB son casi idénticos excepto por estos dos pequeños detalles:
// • Mientras HumanA toma el Arma en su constructor, HumanB no.
// • Es posible que HumanB no siempre tenga un arma, mientras que HumanA siempre la tendrá armada.