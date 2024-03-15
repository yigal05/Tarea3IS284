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
- El programa imprime el factorial de un numero
- Salvedad: Para valores no enteros y/o no positivos no se garantizan resultados.
- Salvedad: Para valores que requieran mas de un long long int para su procedimiento
  no se garantizan resultados
*/

#include <stdio.h>

long long int factorial(int n){
    // n representa el elemento que se esta buscando actualmente
    return (n == 0)? 1: n*factorial(n-1);
} //esta funcion encuetra el factorial de algun numero

int main(){
    int number=0; //guarda el numero que el usuario ingrese
    printf("Ingrese numero para saber su factorial: ");
    scanf("%i",&number);
    printf("%lli", factorial(number));
    return 0;
}