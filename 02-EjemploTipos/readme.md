- Etapa #1: Análisis del Problema.

- Transcripción del problema: Realizar una Aplicación de Consola que mediante un ejemplo
demuestre la utilización de distintos tipos de datos.

- Refinamiento del Problema e Hipótesis de Trabajo:
Se declaran valores constantes,
se realizan operaciones pertinentes a su conjunto de operaciones
y se muestra el resultado de los mismos por pantalla.

- Modelo IPO:
- R⨉R ➝ Adición ➝ R
- Entradas: No hay entradas, sino valores constantes pre-declarados
- Proceso: Realizar operaciones del conjunto peritnente a los tipos
de datos presentados
- Salidas: Datos respectivos al respectivo conjunto de valores
(int, unsigned, double, bool, char, string) 

- Compilador: Se utilizó el compilador del Visual Studio 2015

- Etapa #2: Diseño de la Solución.

- Léxico del Algoritmo:
No es estructurado

- Representación textual del Algoritmo:
1) Se declaran valores constantes
2) Se realiza una operación correspondiente al conjunto de operaciones del dato
3) Se muestra por consola el resultado de la operación entre los valores

- Bonus 1:
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

- Bonus 2:
Ejemplos de aplicación de tipos de datos utilizando assert en lugar de cout,
incluidos en el programa.
