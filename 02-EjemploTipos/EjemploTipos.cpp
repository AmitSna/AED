/*
Trabajo #02: Ejemplos de Valores y Operaciones de Tipos de Datos
Descripci�n: Aplicaci�n de Consola para realizar operaciones entre tipos de datos y su aplicaci�n,
a modo de ejemplo entre los mismos (bool, unsigned, int, double, char y string).
Autor: Mat�as Salinas, Curso K1051
Fecha: 01/05/2019 (v1.0)
stdafx.h es un Precompilador utilizado por el Visual Studio
para abreviar el tiempo de compilaci�n
Fuente 1: https://stackoverflow.com/questions/4726155/what-is-stdafx-h-used-for-in-visual-studio/4726182#4726182
Fuente 2: https://stackoverflow.com/questions/37257725/why-do-we-use-include-stdafx-h-instead-of-include-stdafx-h
*/

#include "stdafx.h"
#include <iostream>
#include <cassert>
using namespace std;

void main()
{
	bool bTrue = true, bFalse = false; //Incluye los valores true y false
	std::cout << bTrue && bFalse; //Permite Conjunci�n
	std::cout << bFalse || bFalse; //Permite Disyunci�n
	std::cout << !bFalse << "\n"; //Permite Negaci�n L�gica
	bTrue = 1; std::cout << bTrue << "\n"; //Permite Valores num�ricos, los cuales dan true
	bFalse = 0; std::cout << bFalse << "\n"; //Permite Valores num�ricos, si es 0 da false
	std::cout << bTrue + bFalse << "\n"; //Permite Adici�n
	std::cout << bTrue - bTrue << "\n"; //Permite Diferencia
	bTrue = 1 > 2; std::cout << bTrue << "\n\n";
	/*El resultado de una comparaci�n l�gica entre valores num�ricos o de caracteres
	(<, >, <=, <=, == y !=) retorna un bool. Como el ejemplo conten�a un valor num�rico,
	devuelve 0 lo que equivale a false en boolean.*/

	unsigned uA = 6, uB = 3; //Incluye el Conjunto N ^ {0}
	std::cout << uA + uB << "\n"; //Permite Adici�n
	std::cout << uA - uB << "\n"; //Permite Diferencia en Enteros
	std::cout << uA * uB << "\n"; //Permite Producto
	std::cout << uA / uB << "\n"; //Permite Divisi�n Entera
	bTrue = uA > uB; std::cout << bTrue << "\n\n"; //Permite Comparaci�n L�gica

	int iA = -2, iB = 12; //Incluye el Conjunto Z
	std::cout << iA + iB << "\n"; //Permite Adici�n
	std::cout << iA - iB << "\n"; //Permite Diferencia
	std::cout << iA * iB << "\n"; //Permite Producto
	std::cout << iA / iB << "\n"; //Permite Divisi�n en Z+
	bTrue = iA == iB; std::cout << bTrue << "\n\n"; //Permite Comparaci�n L�gica

	double dA = 2.3, dB = 5.4; //Incluye el Conjunto Q
	std::cout << dA + dB << "\n"; //Permite Adici�n
	std::cout << dA - dB << "\n"; //Permite Diferencia
	std::cout << dA * dB << "\n"; //Permite Producto
	std::cout << dA / dB << "\n"; //Permite Divisi�n Fraccional
	bTrue = dA != dA; std::cout << bTrue << "\n\n"; //Permite Comparaci�n L�gica	

	char cA = 'A', cB = '5';
	std::cout << cA++ << "\n"; //Permite Adici�n, lo cual modifica el valor ASCII contenido
	std::cout << cA-- << "\n"; //Permite Diferencia, lo cual modifica el valor ASCII contenido
	std::cout << cA + cB + cA + cB + cB << "\n"; //Permite Adici�n entre varios char
	bTrue = cA > cB; std::cout << bTrue << "\n\n"; //Permite Comparaci�n L�gica
	

	//El string se crea como objeto en lugar de como tipo de dato primitivo
	string sA = "Alfab�ticas", sB = "012345";
	string sC = sA + sB; //Permite Concatenaci�n
	bTrue = sA == sB; std::cout << bTrue; //Permite Comparaci�n L�gica


	std::cin.get();
}

/*
Bonus 1:
Adicionalmente, hay otros tipos de datos m�s abstractos que a�n no hemos visto en clase,
por lo cual los aqu� presentados no son todos los tipos de datos existentes en C++.
Adicionalmente, el Object Stream (para input std::cin y output std::cout) es un tipo
de dato visto en clase pero no contemplado en la demostraci�n, el cual a su vez tiene
su propio conjunto de operaciones con >> (para input) y << (para output) y se utiliza
para recibir valores por medio de interacci�n del usuario y mostrar otros valores por pantalla.
Tambi�n, otros datos primitivos no vistos en clase a�n pueden ser:
float, void, wchar_t, unsigned char, signed char, unsigned int, signed int, short int,
unsigned short int, signed short int, long int, signed long int, unsigned long int,
long double
*/

/*
Bonus 2:
Sin utilizar cout y utilizando assert, ejemplos a continuaci�n:
Modificar el nombre de la Funci�n a main y ejecutar!!
*/

void main2() {
	int iUno = 1, iDos = 2, iTres = 3;

	assert(iUno != iDos); //Completa la instrucci�n y contin�a		
	std::cin.get();

	assert(iDos == 2); //Completa la instrucci�n y contin�a
	std::cin.get();

	assert(iTres < 0); //Devuelve error y cierra el programa
	std::cin.get();



	bool bTrue = true, bFalse = false;

	assert(!bFalse); //Completa la instrucci�n y contin�a
	std::cin.get();



	char cEszett = '�';
	assert('�' == cEszett); //Completa la instrucci�n y contin�a
	std::cin.get();
}