
#include <iostream>
#include <string>
#include <iomanip>
// Escribe un programa que contenga:
// • Una variable de cadena inicializada como "HI THIS IS BRAIN".
// • stringPTR: un puntero a la cadena.
// • stringREF: una referencia a la cadena.
// Su programa debe imprimir:
// • La dirección de memoria de la variable de cadena.
// • La dirección de memoria mantenida por stringPTR.
// • La dirección de memoria mantenida por stringREF.
// Y luego:
// • El valor de la variable de cadena.
// • El valor al que apunta stringPTR.
// • El valor al que apunta stringREF.
// Eso es todo, sin trucos. El objetivo de este ejercicio es desmitificar las referencias, que pueden
// Parece completamente nuevo. Aunque existen algunas pequeñas diferencias, esta es simplemente otra
// sintaxis de algo que ya haces: manipulación de direcciones.



int main() {
    std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;
    std::string& stringREF = str;
	
    std::cout << "------ Memory address ------" << std::endl;
    std::cout << "The memory address of the string variable: " << &str << std::endl;
    std::cout << "The memory address held by stringPTR: " << stringPTR << std::endl;
    std::cout << "The memory address held by stringREF: " << &stringREF << std::endl;

    std::cout << "------ Values ------" << std::endl;
    std::cout << "The value of the string variable: " << str << std::endl;
    std::cout << "The value pointed to by stringPTR.: " << *stringPTR << std::endl;
    std::cout << "The value pointed to by stringREF: " << stringREF << std::endl;

    return 0;
}
