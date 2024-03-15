/*
- Fecha de publicación: 11/03/2024
- Hora de publicación : 5:00 AM
- Versión de su código: 1.1
- Autor: Ing(c) Yigal Fabricio Rojas Acevedo
- Nombre del lenguaje utilizado: C
- Versión del lenguaje utilizado : C11
- Nombre y versión del Sistema Operativo(S.O): Windows 11 23H2
- Version del compilador utilizado : 6.3.0
- Presentado a: Doctor Ricardo Moreno Laverde
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- Asignatura IS284 Programación II
- Este programa imprime por pantalla la serie de fibonacci sin que esta sobrepase el numero 10.000
*/

#include <stdio.h>

int FindFibonacci(int a) {
    return (a == 0) ? 0 :  (a == 1)? 1 : FindFibonacci(a-1)+FindFibonacci(a-2)  ;
}//Funcion que se encarga de encontrar el valor para para cierto termino de la serie

void KeepCycle(int i)
{	//i guarda el numero de iteraciones que se han hecho
	int nFibonachi= FindFibonacci(i); // Esta variable guarda el termino de fibonacci para la posicion actual
	(nFibonachi > 10000) ? : (printf("%i ", nFibonachi), KeepCycle(i + 1));
}//keepCycle es la funcion encargada de repetir una seria de intrucciones la veces que queramos

int main(){
	printf("Este programa presenta la serie de Fibonacci como la serie que comienza con los digitos 1 y 0 y va\n\
sumando progresivamente los dos ultimos elementos de la serie, asi: 0 1 1 2 3 5 8 13 21 34.......\n\
Para este programa, se presentara la serie de Fibonacci hasta llegar sin sobrepasar el numero 10,000.\n");
	KeepCycle(0);
	return 0;
}
