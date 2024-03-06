#include <stdio.h>

int imprimir(int i, int b){
    return (i == 10)? : (i%2!=0 && i!=0)? 
    (printf("%i %i \n",i,b), imprimir(i+1, b+1)) : (printf("%i %i\n",i,b), imprimir(i+1, b));
}

int main(){
    imprimir(0,1);
    return 0;
}