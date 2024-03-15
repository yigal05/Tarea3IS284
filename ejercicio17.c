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
- El programa imprime un pareja de numeros por pantalla
*/
#include <stdio.h>

int PrintCouple(int digit1, int digit2){
    //digit1 almacenara el primer digito de la pareja para este momento
    //digit2 almacenara el segundo digito de la pareja para este momento
    return (digit1 == 10)? : (digit1%2!=0 && digit1!=0)? 
    (printf("%i %i \n",digit1,digit2), PrintCouple(digit1+1, digit2+1)) : (printf("%i %i\n",digit1,digit2), PrintCouple(digit1+1, digit2));
}//funcion encargada de imprimir la tupla

int main(){
    PrintCouple(0,1);
    return 0;
}