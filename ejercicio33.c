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
- El programa calcula ln con la serie de taylor, pide el valor x y el numero determinos.
- Salvedad: para valores que requieran mas de un int para su proceso , no se garantizan resultados
- Salvedad: El numero de terminos deber ser un entero positivo
*/
#include <stdio.h>
#include <math.h>

long long int Factorial ( long long int n ){
    return ( n == 0 )? 1:  n * Factorial( n - 1 );
}

double CalculateSum ( double number, int limit, int i, double resultado ){
	//i guarda el numero de iteracines que se han hecho
	// number guarda el valor de x
	//limit guarda los terminos que se desean
	//resultado va guardando el resultado de los terminos anteriores
    if ( i == limit )
    	return resultado;
   	else
        return CalculateSum ( number, limit, i + 1, resultado + ( pow ( -1, i + 1 ) * ( pow ( number - 1, i ) / i ) ) );
}

int main() {
    double number = 0; //guardara el valor para x
    int amount = 0; //guardara numero de terminos deseados
    printf ( "Ingrese el valor para X: " );
    scanf ( "%lf", &number );
    printf ( "Ingrese cantidad de terminos: " );
    scanf ( "%d", &amount );
    printf ( "%lf",  CalculateSum ( number, amount, 1, 0 ) );
    return 0;
}