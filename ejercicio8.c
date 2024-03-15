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
- El programa imprime tantos numeros de la serie de Catalan como el usuario desee.
- Salvedad: Para valores no enteros y/o no positivos no se garantizan resultados.
- Salvedad: Para terminos que en su proceso requieran mas de un double , no se garantizan
  resutados
*/
#include <stdio.h>

double Factorial(int n) {
    // n representa el elemento que se esta buscando actualmente
    if (n == 0)
        return 1;
    else
        return n * Factorial(n - 1);
} //funcion que encuentra el factial de un numero

double FindCatalan(int n) {
    // n representa el elemento que se esta buscando actualmente
    if (n == 0)
        return 1;
    else
        return Factorial(2 * n) / (Factorial(n) * Factorial(n + 1));
}//Funcion que se encarga de encontrar el valor para para cierto termino de la serie

void KeepCycle(int i, int desiredTerms) {
    //i guarda el numero de iteraciones que se han hecho
    //desiredTerms guarda los terminos que el usuario desea ver
    if (i == desiredTerms)
        printf("\b\b.");
    else {
        printf("%.0f, ", FindCatalan(i));
        KeepCycle(i + 1, desiredTerms);
    }
}//keepCycle es la funcion encargada de repetir una seria de intrucciones la veces que queramos

int main() {
    int desiredTerms = 0; //guardara la cantidad de terminos que el usario deseea
    printf("Ingrese numero de terminos deseados en la Serie de Catalan: ");
    scanf("%i", &desiredTerms);
    KeepCycle(0, desiredTerms);

    return 0;
}
