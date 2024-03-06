#include <stdio.h>

void imprimir(int i ,int veces, char a){
    if ( i == veces ){

    }else{
        printf("%c",a);
        imprimir(i +1 , veces, a);
    }
}

void mantenerCiclo(int i){
    if ( i == 7){}else{
        imprimir(0,33+i,' ');
        imprimir(0,13-2*i,'P');
        imprimir(0,33+i,' ');
        ( i == 6)?  :printf("\n");
        mantenerCiclo(i+1);
    }
}

int main(){
    mantenerCiclo(0);
    return 0;
}