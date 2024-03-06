#include <stdio.h>

long int factorial(long int i){
    long int a = 0;
    if (i == 0){
        a = 1;
    }
    else{
        a = i*factorial(i-1);
    }
    return a;
}

long int Narayana(long int i){

    long int a = 0;
    if (i == 0 ){
        a = 1;
    }else{
        a = factorial(2*i) / (factorial(i)*factorial(i+1));
    }
    return a;
}

void mantenerCiclo(long int i){
    if (i == 9){

    }else{
         printf("%li ", Narayana(i));
         mantenerCiclo(i+1);
    }
}

int main(){
    mantenerCiclo(0);
}