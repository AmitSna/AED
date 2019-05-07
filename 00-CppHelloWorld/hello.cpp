/*
Trabajo #0: Hola Mundo!
Descripción: Aplicación de Consola para mostrar string por pantalla
Autor: Matías Salinas, Curso K1051
Fecha: 07/04/2019 (v1.0)

stdafx.h es un precompilador utilizado por el Visual Studio para
abreviar el tiempo de compilación
Fuente 1: https://stackoverflow.com/questions/4726155/what-is-stdafx-h-used-for-in-visual-studio/4726182#4726182
Fuente 2: https://stackoverflow.com/questions/37257725/why-do-we-use-include-stdafx-h-instead-of-include-stdafx-h
*/

#include "stdafx.h"
#include <iostream>
#include <fstream>
using namespace std;

void main()
{
	//Mostrar un string por consola
	std::cout << "Hola Mundo!\n";
	std::cin.get();

	//Escribir un string en la primera línea de un .txt
	ofstream myfile;
	myfile.open("output.txt");
	myfile << "Hola Mundo!\n";
	myfile.close();
}
