#include <stdio.h>

int imprimir(int i, int b, int c){
    return (i == 10)? : (i%3==0)? 
    (printf("%i %i %i\n",i,b,c), imprimir(i+1, b+1,1)) : (printf("%i %i %i\n",i,b,c), imprimir(i+1, b,c+1));
}

int main(){
    imprimir(1,1,1);
    return 0;
}