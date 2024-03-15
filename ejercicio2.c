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
- Este programa imprime el valor de la suma de los elementos
de la serie de Fibonacci entre 0 y 100.
*/

#include <stdio.h>

int FindFibonacci(int n) {
    return (n == 0) ? 0 :  (n == 1)? 1 : FindFibonacci(n-1)+FindFibonacci(n-2)  ;
} //funcion para hallar Fibonacci de un numero

int KeepCycle(int i , int addition)
{	//i guarda el numero de iteraciones que se han hecho
	//addition va guardando la suma de resultados anteriores
	if ( FindFibonacci(i) >100){
		return addition;
	}else{
		int nFibonacci = FindFibonacci(i); //guarda fibonacci para numero actual
		printf("%i " , nFibonacci);
		addition += KeepCycle(i + 1, addition+nFibonacci);
	}
}//keepCycle es la funcion encargada de repetir una seria de intrucciones la veces que queramos

int main(){
	printf("Este programa presenta la suma de los elementos de la serie de Fibonacci entre 0 y 100.\n\
Los numeros a sumar son:\n");
	printf("y su suma es :%i" , KeepCycle(0, 0));
	return 0;
}