#include <stdio.h>

int factorial(int i){
    return (i == 0)? 1: i*factorial(i-1);
}

int main(){
    printf("%i", factorial(5));
    return 0;
}