/*
Trabajo #01: Adición
Descripción: Aplicación de Consola para sumar dos números ingresados y mostrar la suma en pantalla, con una sola variable
Autor: Matías Salinas, Curso K1051
Fecha: 25/04/2019 (v2.0)

stdafx.h es un Precompilador utilizado por el Visual Studio
para abreviar el tiempo de compilación
Fuente 1: https://stackoverflow.com/questions/4726155/what-is-stdafx-h-used-for-in-visual-studio/4726182#4726182
Fuente 2: https://stackoverflow.com/questions/37257725/why-do-we-use-include-stdafx-h-instead-of-include-stdafx-h
*/



#include "stdafx.h" //Precompilador de Visual Studio 2015
#include <iostream>
using namespace std;

void main()
{
	double a;
	std::cout << "Ingrese el primer numero: \n";
	std::cin >> a;
	std::cout << "Ingrese el segundo numero: \n";
	a += (double)std::cin; //Error sintáctico de compilación
	std::cout << "La suma es igual a " << a << "\n";
	std::cin.get();
}
