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

Zombie *zombieHorde(int x, std::string n);

// ¡Es hora de crear una horda de zombis!
// Implemente la siguiente función en el archivo apropiado:
// Zombie* zombieHorde( int N, std::nombre de cadena );
// Debe asignar N objetos Zombie en una única asignación. Luego, debe inicializar el
// zombies, dándole a cada uno de ellos el nombre pasado como parámetro. La función devuelve un
// puntero al primer zombi.
// Implemente sus propias pruebas para asegurarse de que su función zombieHorde() funcione como se esperaba.
// Intenta llamar a anunciar() para cada uno de los zombies.
// No olvides usar eliminar para desasignar todos los zombies y comprobar la memoria.
// fugas.