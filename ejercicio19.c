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
#include <stdlib.h>

#ifdef _WIN32
    #include <windows.h>
    #define clear system("cls")
#else
    #include <unistd.h>
    #define clear printf("\n")
#endif /*Este tipo de if se hace en el precompilado y selecciona que
se añadira o no al codigo para este caso , elegimos libreria y declaramos 
una macro*/

void PrintPart(int i, int hereChar){
    //hereChar se usa para saber donde poner una 'A'
    //i guarda el numero de iteraciones que se han hecho
	if ( i == 8){
		#if defined(_WIN32) || defined(_WIN64) 
    		Sleep(1500);
		#else
    		sleep(1);
		#endif
	}else{
		(i==hereChar || i== 7-hereChar)? printf("A"): printf(" ");
		PrintPart(i+1, hereChar);
	}
}//funcion encargada de ir imprimiendo caracteres

void KeepCycle(int i){ (i == 4)? : (clear,PrintPart(0 ,i),KeepCycle(i+1));} 
//keepCycle es la funcion encargada de repetir una seria de intrucciones la veces que queramos

int main(){
	KeepCycle(0);
	return 0;
}