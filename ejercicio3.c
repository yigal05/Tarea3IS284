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
- El programa imprime tantos numeros de la serie de Lucas como el usuario desee.
- Salvedad:Los numeros de ingreso deben ser enteros positivos.
*/

#include <stdio.h>

int FindLucas(int n){
	//n guarda numero para el cual se esta buscando al serie en este momento
	return (n == 0)? 2 : (n==1)? 1 :FindLucas(n-1)+FindLucas(n-2);
}//Funcion que se encarga de encontrar el valor para para cierto termino de la serie

void KeepCycle(int i, int desiredTerms ){
	//i guarda el numero de iteraciones que se han hecho
	//desiredTerms contiene la cantidad de terminos que se desean
	(i == desiredTerms)? printf("\b.") : (printf(" %i,", FindLucas(i) ) ,KeepCycle(i+1,desiredTerms)) ;
}//keepCycle es la funcion encargada de repetir una seria de intrucciones la veces que queramos

int main(){
	int desiredTerms=0; //guardara la cantidad de terminos que el usario desea
	printf("Ingrese numero de terminos deseados en la Serie de Lucas: ");
	scanf("%i",&desiredTerms);
	KeepCycle(0,desiredTerms);
}