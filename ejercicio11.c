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
- El programa imprime tantos numeros de la serie de triangular como el usuario desee.
- salvedad: para valores muy grandes no se garantizan resultados
- salvedad: Para valores no enteros no se garantizan resultados
- Salvedad: la formula que nos dan en el ejercicio no arroja resultados correctos , por ende se ha buscado una 
*/
#include <stdio.h>

int FindTriangular(int n){
    return n*(n+1)/2;
} //funcion que encuentra un elemento de la serie triangular

void KeepCycle(int i,int desiredTerms){
    //i guarda el numero de iteraciones que se han hecho
    //desiredTerms guarda los terminos que el usuario desea ver
    (i == desiredTerms+1)? printf("\b\b."): ( printf("%i, ", FindTriangular(i)) , KeepCycle(i+1,desiredTerms));
}//keepCycle es la funcion encargada de repetir una seria de intrucciones la veces que queramos

int main(){
    int desiredTerms=0; //guardara la cantidad de terminos que el usario deseea
    printf("Ingrese numero de terminos deseados en la Serie de Triangular: ");
    scanf("%i",&desiredTerms);
    KeepCycle(1,desiredTerms);
}