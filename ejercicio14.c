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
- El programa imprime las tablas de multiplicar del 1 al 10
*/
#include <stdio.h>

void MakeTable(int factor1 , int factor2){
	//factor1 guarda el numero del cual se esta creando la tabla
	//factor2 guarda el numero por el cual se multiplicara factor1 para ir creando la tabla
	(factor1 == 11)? printf("\n\n") : ( printf("%ix%i=%i\n", factor2 , factor1 , factor2*factor1), MakeTable(factor1+1,factor2));
}

void KeepCycle(int i){
	//i guarda el numero de iteracion que se han hecho , en este caso nos sirve para saber que tabla vamos a imprimir
	(i == 11)? : (MakeTable(1,i), KeepCycle(i+1));
} //keepCycle es la funcion encargada de repetir una seria de intrucciones la veces que queramos

int main(){
	KeepCycle(1);
	return 0;
}