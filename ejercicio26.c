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
- El programa imprime una v de letras 'Z' en pantalla.
*/

#include <stdio.h>

void PrintChar(int i ,int times, char letter){
    //i guarda el numero de iteraciones que se han hecho
    //times guarda las veces que se debe imprimir letter
    //letter contiene que caracter debe imprimir
    if ( i == times || times <=0 ){
        // fin de la recursividad
    }else{
        printf("%c",letter);
        PrintChar(i +1 , times, letter);
    }
} //funcion encargada de ir imprimiendo caracteres

void SaveLines(int i){
        PrintChar(0,i,' ');PrintChar(0,1,'Z');PrintChar(0,17-2*i,' ');
} //Funcion DRY (Dont Repeat Yourself)

void KeepCycle(int i){
    if ( i == 9){ SaveLines(i); }else{
        SaveLines(i);
        PrintChar(0,1,'Z');
        ( i == 9)?  :printf("\n");
        KeepCycle(i+1);
    }
}//keepCycle es la funcion encargada de repetir una seria de intrucciones la veces que queramos

int main(){
    KeepCycle(0);
    return 0;
}