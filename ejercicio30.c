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
- El programa calcula Cos con la serie de taylor, pide el valor x y el numero determinos.
- Salvedad: para valores que requieran mas de un long long int para su proceso , no se garantizan resultados
- Salvedad: El numero de terminos deber ser un entero positivo
*/
#include <stdio.h>
#include <math.h>

long long int factorial(long long int i){
    return (i == 0)? 1: i*factorial(i-1);
}//Esta funcion encuentra el factorial de algun numero

void FindCos(int i,float number,int terminosDeseados, double resultado){
	//i guarda el numero de iteracines que se han hecho
	// number guarda el valor de x
	//terminosDeseados guarda los terminos que se desean
	//resutado va guardando el resultado de los terminos anteriores
	if(i == terminosDeseados){
		printf("%lf" ,resultado + pow(-1,i)*pow(number ,2*i)/factorial(2*i));
	}else{
		FindCos(i+1 ,number, terminosDeseados,resultado + pow(-1,i)*pow(number ,2*i)/factorial(2*i) );
	}//endif

} //Esta funcion es la encargada de encontrar el cos(number)


int main(){
	float number=.0;//guardara el valor para x
	int numberOfTerms=0; //guardara numero de terminos deseados
	printf("Ingrese valor para X: ");
	scanf("%f",&number);
	printf("Ingrese numero de terminos: ");
	scanf("%i",&numberOfTerms);
	FindCos(0,number,numberOfTerms,0);
	return 0;
}
