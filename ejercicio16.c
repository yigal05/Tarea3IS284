#include <stdio.h>

int factorial(int i){
    return (i == 0)? 1: i*factorial(i-1);
}

int mantenerCiclo(int i , int suma){
    return (i == -1)? suma : ( mantenerCiclo(i-1, suma+factorial(i)));
}

int main(){
    printf("%i", mantenerCiclo(5,0));
    return 0;
}