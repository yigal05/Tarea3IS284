#include <stdio.h>

void imprimir(int i ,int veces, char a){
    if ( i == veces ){

    }else{
        printf("%c",a);
        imprimir(i +1 , veces, a);
    }
}

void mantenerCiclo(int i){
    if ( i == 3){}else{
        imprimir(0,9-i,' ');
        imprimir(0,i,'Z');
        imprimir(0,1,'Z');
        imprimir(0,i,'Z');
        imprimir(0,0+i,' ');
        printf("\n");
        mantenerCiclo(i+1);
    } // recursividad por cola ->
        imprimir(0,9-i,' ');
        imprimir(0,i,'Z');
        imprimir(0,1,'Z');
        imprimir(0,i,'Z');
        imprimir(0,0+i,' ');
        ( i == 0)?  :printf("\n");
}

int main(){
    mantenerCiclo(0);
    return 0;
}