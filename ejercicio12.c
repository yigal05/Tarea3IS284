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
- El programa lee un numero y lo imprime al reves
- salvedad: para valores muy grandes no se garantizan resultados
- salvedad: Para valores no enteros no se garantizan resultados
*/
#include <stdio.h>

void ReverseNumber( long long int i){
	//i guarda los numero que aun no se han impreso por pantalla
	( i < 10)?printf("%lli",i):(printf("%lli", i%10),ReverseNumber(i/10));
}//ReverseNumber es la funcion encargada de invertir un numero

int main(){
	long long int number =0; // guardara el numero que el usuario ingrese para imprimir al reves
	printf("Este programa lee desde el teclado un numero\n\
entero y lo imprime al reves.\n");
	printf("Entre el numero: ");
	scanf("%lli",&number);
	(number<0)? (printf("-"),ReverseNumber(-1*number)) : ReverseNumber(number) ;
	return 0;
}