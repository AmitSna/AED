/*
Trabajo #02: Ejemplos de Valores y Operaciones de Tipos de Datos
Descripción: Aplicación de Consola para realizar operaciones entre tipos de datos y su aplicación,
a modo de ejemplo entre los mismos (bool, unsigned, int, double, char y string).
Autor: Matías Salinas, Curso K1051
Fecha: 01/05/2019 (v1.0)
stdafx.h es un Precompilador utilizado por el Visual Studio
para abreviar el tiempo de compilación
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
	std::cout << bTrue && bFalse; //Permite Conjunción
	std::cout << bFalse || bFalse; //Permite Disyunción
	std::cout << !bFalse << "\n"; //Permite Negación Lógica
	bTrue = 1; std::cout << bTrue << "\n"; //Permite Valores numéricos, los cuales dan true
	bFalse = 0; std::cout << bFalse << "\n"; //Permite Valores numéricos, si es 0 da false
	std::cout << bTrue + bFalse << "\n"; //Permite Adición
	std::cout << bTrue - bTrue << "\n"; //Permite Diferencia
	bTrue = 1 > 2; std::cout << bTrue << "\n\n";
	/*El resultado de una comparación lógica entre valores numéricos o de caracteres
	(<, >, <=, <=, == y !=) retorna un bool. Como el ejemplo contenía un valor numérico,
	devuelve 0 lo que equivale a false en boolean.*/

	unsigned uA = 6, uB = 3; //Incluye el Conjunto N ^ {0}
	std::cout << uA + uB << "\n"; //Permite Adición
	std::cout << uA - uB << "\n"; //Permite Diferencia en Enteros
	std::cout << uA * uB << "\n"; //Permite Producto
	std::cout << uA / uB << "\n"; //Permite División Entera
	bTrue = uA > uB; std::cout << bTrue << "\n\n"; //Permite Comparación Lógica

	int iA = -2, iB = 12; //Incluye el Conjunto Z
	std::cout << iA + iB << "\n"; //Permite Adición
	std::cout << iA - iB << "\n"; //Permite Diferencia
	std::cout << iA * iB << "\n"; //Permite Producto
	std::cout << iA / iB << "\n"; //Permite División en Z+
	bTrue = iA == iB; std::cout << bTrue << "\n\n"; //Permite Comparación Lógica

	double dA = 2.3, dB = 5.4; //Incluye el Conjunto Q
	std::cout << dA + dB << "\n"; //Permite Adición
	std::cout << dA - dB << "\n"; //Permite Diferencia
	std::cout << dA * dB << "\n"; //Permite Producto
	std::cout << dA / dB << "\n"; //Permite División Fraccional
	bTrue = dA != dA; std::cout << bTrue << "\n\n"; //Permite Comparación Lógica	

	char cA = 'A', cB = '5';
	std::cout << cA++ << "\n"; //Permite Adición, lo cual modifica el valor ASCII contenido
	std::cout << cA-- << "\n"; //Permite Diferencia, lo cual modifica el valor ASCII contenido
	std::cout << cA + cB + cA + cB + cB << "\n"; //Permite Adición entre varios char
	bTrue = cA > cB; std::cout << bTrue << "\n\n"; //Permite Comparación Lógica
	

	//El string se crea como objeto en lugar de como tipo de dato primitivo
	string sA = "Alfabéticas", sB = "012345";
	string sC = sA + sB; //Permite Concatenación
	bTrue = sA == sB; std::cout << bTrue; //Permite Comparación Lógica


	std::cin.get();
}

/*
Bonus 1:
Además de los mencionados, hay otros tipos de datos más abstractos que aún no hemos visto en clase,
por lo cual los aquí presentados no son todos los tipos de datos existentes en C++, como por ejemplo:
String, Date and Time, Money/Currency/Monetary value (<iomanip>), Números Complejos y Números Compuestos.
Adicionalmente, el Object Stream (para input std::cin y output std::cout) es un tipo
de dato visto en clase pero no contemplado en la demostración, el cual a su vez tiene
su propio conjunto de operaciones con >> (para input) y << (para output) y se utiliza
para recibir valores por medio de interacción del usuario y mostrar otros valores por pantalla.
También, otros datos primitivos no vistos en clase aún pueden ser:
float, void, wchar_t, unsigned char, signed char, unsigned int, signed int, short int,
unsigned short int, signed short int, long int, signed long int, unsigned long int,
long double.
*/

/*
Bonus 2:
Sin utilizar cout y utilizando assert, ejemplos a continuación:
Modificar el nombre de la Función a main y ejecutar!!
*/

void main2() {
	int iUno = 1, iDos = 2, iTres = 3;

	assert(iUno != iDos); //Completa la instrucción y continúa		
	std::cin.get();

	assert(iDos == 2); //Completa la instrucción y continúa
	std::cin.get();

	assert(iTres < 0); //Devuelve error y cierra el programa
	std::cin.get();



	bool bTrue = true, bFalse = false;

	assert(!bFalse); //Completa la instrucción y continúa
	std::cin.get();



	char cEszett = 'ß';
	assert('ß' == cEszett); //Completa la instrucción y continúa
	std::cin.get();
}
