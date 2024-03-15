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
- El programa imprime cierto patron de una letras en pantalla.
*/
#include <stdio.h>

void PrintChar(int i, int amountOfA){
	//i guarda el numero de iteraciones que se han hecho
	//amountOfA guarda la cantida de 'A' a imprimir
	if ( i == 80){
		printf("\n");
	}else{
		(i >= 80-amountOfA)? printf("A"): printf(" ");
		PrintChar(i+1, amountOfA);
	}
} //Funcion encargada de imprimir caracteres para obtener lo que queremos

void KeepCycle(int i){ (i == 25)? : (PrintChar(0 ,i), KeepCycle(i+1));}
//keepCycle es la funcion encargada de repetir una seria de intrucciones la veces que queramos

int main(){
	KeepCycle(1);
	return 0;
}