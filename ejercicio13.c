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
- El programa lee 75 numeros em imprime:
  * Cantidad de números Mayores a 150
  * Número mayor y número menor encontrado en el grupo
  * Cantidad de Números negativos encontrados
  * Promedio de los Positivos Encontrados
*/
#include <stdlib.h>
#include <stdio.h>
#define RED_TEXT "\033[1;31m" //ANSI escape code : Permite darle estilo a la consola
#define RESET_TEXT "\033[0m" // ANSI escape code 

void ReadNumbers(int i,int* countGreaterThan150,int* smallest  , int* largest ,int* countNegatives ,int* countPositives,int*sumPositives){
	//i lleva la cuenta de iteraciones validas para el programa
	if (i == 75){
		printf("* Cantidad de numeros mayores a 150: %i\n\
* Numero menor: %i\n\
*numero mayor: %i\n\
* Cantidad de Numeros negativos encontrados: %i \n\
* Promedio de los Positivos Encontrados: %.2f",*countGreaterThan150,*smallest ,*largest ,*countNegatives , (float)*sumPositives/(*countPositives));
	}else{
		printf("ingrese un numero: ");
		int number=0 ;
		scanf("%i", &number);
		if(number ==0 ){
			printf(RED_TEXT "NO VALIDO Su numero debe ser difente a cero.\n" RESET_TEXT);
			ReadNumbers(i ,countGreaterThan150,smallest ,largest , countNegatives , countPositives, sumPositives);
		}else{
		if( number >150) { *countGreaterThan150+=1; }
		if( number <*smallest ) { *smallest =number; }
		if( number >*largest ) { *largest =number; }
		if( number >0) { *countPositives+=1; *sumPositives+=number;}
		if( number <0) {*countNegatives +=1;} 
		ReadNumbers(i+1 ,countGreaterThan150,smallest ,largest , countNegatives , countPositives, sumPositives);
	}

	}
}// Termina la funcion ReadNumbers

int main(){
	int* countGreaterThan150 = calloc(1,sizeof(int)); // Guardara los numeros mayores a 150
	int* smallest  = calloc(1,sizeof(int)); // Guardara el numero mas pequeño que se ingrese
	int* largest = calloc(1,sizeof(int)); // Guardara el numero mas grande que se ingrese
	int* countNegatives  = calloc(1,sizeof(int)); // Guardara la cantidad de negativos que se ingrese
	int* countPositives = calloc(1,sizeof(int)); // Guardara la cantidad de postivos que se ingrese
	int* sumPositives = calloc(1,sizeof(int)); // Guardara la Suma de los positivos ingresados
	// La funcion calloc abre un espacio en memoria y lo inicializa en 0
	ReadNumbers(0,countGreaterThan150,smallest ,largest,countNegatives,countPositives,sumPositives);
	free(countGreaterThan150);free(smallest );free(largest);
	free(countNegatives );free(countPositives);free(sumPositives);
	//free libera y marca como disponible cada buffer que se ha utilizado
	return 0;
}