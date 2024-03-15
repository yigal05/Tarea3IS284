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
- El programa imprime un tipo de moño lleno de 'A' en pantalla.
*/

#include <stdio.h>

void PrintChar(int i ,int times, char letter){
    //i guarda el numero de iteraciones que se han hecho
    //times guarda las veces que se debe PrintChar Letter
    //letter contiene que caracter debe PrintChar
    if ( i == times || times<=0 ){

    }else{
        printf("%c",letter);
        PrintChar(i +1 , times, letter);
    }
} //funcion encargada de ir imprimiendo caracteres

void SaveLines(int i){
    //i guarda el numero de iteraciones que se han hecho
    PrintChar(0,27,' '); PrintChar(0,i+1,'A');
    PrintChar(0,5-2*i,' ');PrintChar(0,i+1,'A');
    PrintChar(0,27,' ');
} // Esto se ha hecho para el principio de DRY que busca no tener codigo repetido

void KeepCycle(int i){
    if ( i == 3){
        PrintChar(0,27,' ');
        PrintChar(0,7,'A');
        PrintChar(0,27,' ');
    }else{
        SaveLines(i);
        printf("\n");
        KeepCycle(i+1);
    }
    if ( i != 3){
        printf("\n");
        SaveLines(i);   
    }
}//keepCycle es la funcion encargada de repetir una seria de intrucciones la veces que queramos

int main(){
    KeepCycle(0);
    return 0;
}