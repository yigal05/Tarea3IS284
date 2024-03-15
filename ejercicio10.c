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
- El programa imprime tantos numeros de la serie de motzkin como el usuario desee.
- Salvedad: Para valores no enteros y/o no positivos no se garantizan resultados.
*/

#include <stdio.h>

void FindMotzkin(int num1 ,int num2 , int i , int limit){
	//num1 ultimo termino encntrado
	//num2 guarda el siguiente termino a imprimir 
	//i lleva las iteraciones que se han hecho
	//limit guarda cantidad de terminos que se desea 
	printf("%d ",num1);
	if (i < limit){
		FindMotzkin(num2, (3*(i-1)*num1+(2*i+1)*num2) / (i+2) ,i+1, limit);
	}else{
		printf("%d ",num2);
	}
}


int main(){
	int desiredTerms=0; //guardara la cantidad de terminos que el usario deseea
    printf("Ingrese numero de terminos deseados en la Serie de Motzkin: ");
    scanf("%i",&desiredTerms);
	FindMotzkin(1,1,2,desiredTerms);
	return 0 ;
}