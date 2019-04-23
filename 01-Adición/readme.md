- Etapa #1: Análisis del Problema.

- Transcripción del problema: Realizar una Aplicación de Consola que reciba dos
números (double) ingresados por el usuario y muestre la suma de ambos por pantalla.

- Refinamiento del problema e Hipótesis de trabajo: Se crea una variable a de tipo double,
se almacena el primer número que ingresa el usuario en la variable a, 
se crea una variable b de tipo double,
se almacena el segundo número que ingresa el usuario en al variable b
y finalmente se muestra por consola la sumatoria de ambos valores contenidos en las dos variables.

- Modelo IPO:
- R⨉R ➝ Adición ➝ R
- Entradas: Dos números por Consola de tipo double
- Proceso: Almacenar el primer número ingresado la variable a y
almacenar el segundo número ingresado en la variable b
- Salidas: La suma del número a con el número b por Consola

- Compilador: Se utilizó el compilador del Visual Studio 2015

- Etapa #2: Diseño de la Solución.

- Léxico del Algoritmo:
a, b ∈ R ^ a + b ∈ R

- Representación textual del Algoritmo:
1) Se ingresa un número de tipo double por consola y se lo almacena en la variable a
2) Se ingresa un número de tipo double por consola y se lo almacena en la variable b
3) Se muestra por consola la sumatoria de la variable a con la variable b

- Representación visual del Algoritmo (NS, Diagrama de Nassi-Shneiderman):

|Read a|
|:------------- |
|**Read b**|
|**Write a + b**|
