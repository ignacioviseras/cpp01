#include <iostream>
#include <fstream>
#include <string>

// Cree un programa que tome tres parámetros en el siguiente orden:
// un nombre de archivo y dos cuerdas, s1 y s2.

// Debe abrir el archivo <nombre de archivo> y copiar su contenido en un archivo nuevo.
// <nombre de archivo>.replace, reemplazando cada aparición de s1 con s2.

// El uso de funciones de manipulación de archivos C está prohibido y se considerará trampa.
//Todo las funciones miembro de la clase std::string están permitidas, excepto reemplazar.
// Úsalos sabiamente!

// Por supuesto, maneje entradas y errores inesperados. Debes crear y entregar tu
// propias pruebas para garantizar que su programa funcione como se espera.
std::string replacer(const std::string &line, const std::string &s1, const std::string &s2) {
	std::string result;
	int pos = 0;
	int find;

	while ((find = line.find(s1, pos)) != -1) {
		result += line.substr(pos, find - pos);
		result +=s2;
		pos = find + s1.length();
	}
	result += line.substr(pos);
	return result;
}

int main(int argc, char **argv) {

	if (argc != 4) {
		std::cerr << "execute example: ./losers file s1 s2" << std::endl;
		return 1;
	}

	std::string fileN = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	if (s1.empty() || s2.empty()) {
		std::cerr << "Error: s1 and s2 can't be empty the program need a text" << std::endl;
		return 1;
	}
	std::ifstream file(fileN.c_str());
	if (!file) {
		std::cerr << "Error: ifstream can't open the file" << fileN << std::endl;
		return 1;
	}
	std::ofstream outfile((fileN + ".replace").c_str());
	if (!outfile) {
		std::cerr << "Error: " << std::endl;
	}

	std::string line;
	while (std::getline(file, line)) {
		outfile << replacer(line, s1, s2) << std::endl;
	}
	
	file.close();
	outfile.close();
	return 0;

}
