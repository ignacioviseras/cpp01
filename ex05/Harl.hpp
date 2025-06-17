#pragma once

#include <iostream>
#include <string>
#include <iomanip>

class Harl {
    private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
		
	public:
		void complain(std::string level);
};

// ¿Conoces a Harl? Todos lo hacemos, ¿no? En caso de que no lo hagas, encuentra a continuación el tipo de
// comentarios que hace Harl. Se clasifican por niveles:
// • Nivel "DEBUG": los mensajes de depuración contienen información contextual. son en su mayoría
// utilizado para el diagnóstico de problemas.
// Ejemplo: "Me encanta tener tocino extra para mi hamburguesa 7XL con doble queso, triple pepinillo y ketchup especial. ¡Realmente me encanta!"
// • Nivel "INFO": Estos mensajes contienen amplia información. Son útiles para
// Seguimiento de la ejecución del programa en un entorno de producción.
// Ejemplo: "No puedo creer que agregar tocino extra cueste más dinero. No pusiste
// ¡Suficiente tocino en mi hamburguesa! ¡Si lo hicieras, no pediría más!"
// • Nivel "ADVERTENCIA": los mensajes de advertencia indican un problema potencial en el sistema.
// Sin embargo, se puede manejar o ignorar.
// Ejemplo: "Creo que merezco un poco de tocino extra gratis. He estado viniendo por
// años, mientras que usted empezó a trabajar aquí el mes pasado."
// • Nivel "ERROR": Estos mensajes indican que se ha producido un error irrecuperable.
// Este suele ser un problema crítico que requiere intervención manual.
// Ejemplo: "¡Esto es inaceptable! Quiero hablar con el gerente ahora".

// Vas a automatizar a Harl. No será difícil ya que siempre dice lo mismo.
// cosas. Tienes que crear una clase Harl con las siguientes funciones de miembros privados:
// • void debug( void );
// • void info( void );
// • void warning( void );
// • void error( void );
// Harl también tiene una función miembro pública que llama a las cuatro funciones miembro anteriores.
// dependiendo del nivel pasado como parámetro:
// void complain( std::string level );

// El objetivo de este ejercicio es utilizar punteros a funciones miembro. Esto no es un
// sugerencia. Harl tiene que quejarse sin usar un bosque de if/else if/else. el no
// ¡piénsalo dos veces!
// Cree y entregue pruebas para demostrar que Harl se queja mucho. Puedes usar los ejemplos.
// de los comentarios enumerados anteriormente en el asunto o elija utilizar sus propios comentarios.
