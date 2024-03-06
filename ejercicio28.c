#include <stdio.h>

void imprimir(int i ,int veces, char a){
    if ( i == veces ){

    }else{
        printf("%c",a);
        imprimir(i +1 , veces, a);
    }
}

void mantenerCiclo(int i){
    if ( i == 5){}else{
        imprimir(0,41-i,' ');
        imprimir(0,i+1,'A');
        imprimir(0,13+i,' ');
        ( i == 10)?  :printf("\n");
        mantenerCiclo(i+1);
    }
        imprimir(0,41-i,' ');
        imprimir(0,i+1,'A');
        imprimir(0,13+i,' ');
        ( i == 0)?  :printf("\n");
}

int main(){
    mantenerCiclo(0);
    return 0;
}