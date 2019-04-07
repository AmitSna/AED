/*
Trabajo #0: Hola Mundo!
Descripción: Aplicación de Consola para mostrar string por pantalla
Autor: Matías Salinas, Curso K1051
Fecha: 07/04/2019 (v1.0)
*/

#include "stdafx.h"
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	//Mostrar un string por consola
	std::cout << "Hola Mundo!\n";
	std::cin.get();

	//Escribir un string en un txt
	ofstream myfile;
	myfile.open("output.txt");
	myfile << "Hola Mundo!\n";
	myfile.close();
}