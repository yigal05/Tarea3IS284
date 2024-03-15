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
- El programa imprime tantos numeros de la serie de Narayana como el usuario desee.
*/
#include <stdio.h>

int FindNarayana(int n){
	// n representa el elemento que se esta buscando actualmente
	return (n ==0)? 1 : (n == 1)? 1 : (n==2)? 1 : FindNarayana(n-1)+ FindNarayana(n-3);
}//Funcion que se encarga de encontrar el valor para para cierto termino de la serie

void KeepCycle(int i,int desiredTerms){
	//i guarda el numero de iteraciones que se han hecho
	//desiredTerms guarda los terminos que el usuario desea ver
	(i == desiredTerms)? printf("\b\b."): ( printf("%i, ", FindNarayana(i)) , KeepCycle(i+1,desiredTerms));
}//keepCycle es la funcion encargada de repetir una seria de intrucciones la veces que queramos

int main(){
	int desiredTerms=0; //guardara la cantidad de terminos que el usario deseea
	printf("Ingrese numero de terminos deseados en la Serie de Narayana: ");
	scanf("%i",&desiredTerms);
	KeepCycle(0,desiredTerms);
}