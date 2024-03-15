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
- El programa imprime la suma de los factoriales de todos los números desde 0 hasta number.
- Salvedad: Para valores no enteros y/o no positivos no se garantizan resultados.
- Salvedad : si se ingresa un numero que para su proceso necesite mas de un long long int 
  de almacenamiento no se garantizan resultados
*/

#include <stdio.h>

long long int factorial(int n){
    // n representa el elemento que se esta buscando actualmente
    return (n == 0)? 1: n*factorial(n-1);
} // funcion que encuetra el factorial de un numero

int KeepCycle(long long int i , long long int suma){
    //i guarda el numero de iteraciones que se han hecho
    //suma ira llevando la suma de los elementos encontrados
    return (i == -1)? suma : ( KeepCycle(i-1, suma+factorial(i)));
}//keepCycle es la funcion encargada de repetir una seria de intrucciones la veces que queramos

int main(){
    long long int number=0; //almacena el numero que el usuario ingrese
    printf("Entre numero para encontrar la suma de sus factoriales:");
    scanf("%lli",&number);
    if(number<0)
        printf("\33[1;31mPROGRAMA FINALIZADO:EL NUMERO NO PUEDE SER NEGATIVO \33[0m" );
    else
        printf("La suma de los factoriales es: %lli", KeepCycle(number,0));
    return 0;
}