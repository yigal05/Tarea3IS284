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
- El programa imprime una V llena con las letras PNLJHFD en pantalla.
*/

#include <stdio.h>

void PrintChar(int i, int rangeOfChars ,char letter){
	//i guarda el numero de iteraciones que se han hecho
	//rangeOfChars Contiene cuantas letras de seben imprimir
	//letter guarda el caracter que se debe imprimir en la linea actual
	if ( i == 13){
	}else{
		( i >= rangeOfChars && i<13-rangeOfChars )?  printf("%c",letter):printf(" ");
		PrintChar(i+1, rangeOfChars,letter);
	}
} //funcion encargada de ir imprimiendo caracteres

void KeepCycle(int i){
	//i guarda el numero de iteraciones que se han hecho
	(i ==0 || i==7 )? :printf("\n");
	(i == 7)? : (PrintChar(0 ,i, 80-2*i), KeepCycle(i+1));
}//keepCycle es la funcion encargada de repetir una seria de intrucciones la veces que queramos

int main(){
	KeepCycle(0);
	return 0;
}