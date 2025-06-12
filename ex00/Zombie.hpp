#pragma once

#include <iostream>
#include <string>
#include <iomanip>

class Zombie {
    private:
        std::string _name;
		
	public:
        Zombie();
		Zombie(std::string n);
        ~Zombie();
		
		void setName(std::string n);
		std::string getName(void);
		void announce(void);

};

void randomChump(std::string name);
Zombie* newZombie(std::string name);
// Primero, implemente una clase Zombie. Tiene un nombre de atributo de cadena privada.
// Agregue una función miembro void announce (void); a la clase Zombi. Zombis
// anunciarse de la siguiente manera:
// <nombre>: BraiiiiiiinnnzzzZ...


// No imprima los corchetes angulares (< y >). Para un zombie llamado Foo, el mensaje sería:
// Foo: BraiiiiiiinnnzzzZ...
// Luego, implemente las siguientes dos funciones:

// • Zombi* newZombie( std::string name);
// 	Esta función crea un zombie, le asigna un nombre y lo devuelve para que puedas usarlo afuera.
// 	del alcance de la función.
// • void randomChump( std::string name);
// 	Esta función crea un zombie, le pone un nombre y hace que se anuncie.
// 	Ahora bien, ¿cuál es el objetivo real del ejercicio? Tienes que determinar en qué caso.
// 	es mejor asignar zombies en la pila o en el montón.
// 	Los zombis deben ser destruidos cuando ya no los necesites. El destructor debe imprimir
// 	un mensaje con el nombre del zombie para fines de depuración.
