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
- El programa imprime tantos numeros de la serie de Bell como el usuario desee.
- Salvedad: Para valores no enteros y/o no positivos no se garantizan resultados.
- Salvedad: Para terminos que en su proceso requieran mas de un double , no se garantizan
  resutados
*/

#include <stdio.h>

float Bell(int ); // declaro la funcion para que se pueda acceder desde cualquier linea

int factorial(int n){
	return (n == 0)? 1: n*factorial(n-1);
} // funcion para encotrar el factorial de un numero

float FindBinomial(int n , int k){
	return factorial(n)/ ( factorial(k)*factorial(n-k) );
} //funcion para encontrar el FindBinomialfiente binomial

float CalculateBell(int num , int k , int acumulado){
	return (num == k)? acumulado: CalculateBell(num,  k+1 , acumulado+FindBinomial(num-1,k)*Bell(k));
} // funcion que busca un termino para Bell 

float Bell(int i){
	if (i <= 0){
		return 1;
	}else{
		return CalculateBell(i,0,0);
	}
} // funcion que llama mira si se requiere buscar Bell o simplemente es 1

void KeepCycle(int i, int desiredTerms) {
    //i guarda el numero de iteraciones que se han hecho
    //desiredTerms guarda los terminos que el usuario desea ver
    if (i == desiredTerms)
        printf("\b\b.");
    else {
        printf("%.0f, ", Bell(i));
        KeepCycle(i + 1, desiredTerms);
    }
}//keepCycle es la funcion encargada de repetir una seria de intrucciones la veces que queramos

int main() {
    int desiredTerms = 0; //guardara la cantidad de terminos que el usario deseea
    printf("Ingrese numero de terminos deseados en la Serie de Bell: ");
    scanf("%i", &desiredTerms);
    KeepCycle(0, desiredTerms);

    return 0;
}