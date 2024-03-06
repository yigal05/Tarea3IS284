#include <stdio.h>

void imprimir(int i ,int veces, char a){
    if ( i == veces || veces<=0 ){

    }else{
        printf("%c",a);
        imprimir(i +1 , veces, a);
    }
}

void ahorraLineas(int i){
        imprimir(0,27,' '); imprimir(0,i+1,'A');
        imprimir(0,5-2*i,' ');imprimir(0,i+1,'A');
        imprimir(0,27,' ');
}

void mantenerCiclo(int i){
    if ( i == 3){
        imprimir(0,27,' ');
        imprimir(0,7,'A');
        imprimir(0,27,' ');
    }else{
        ahorraLineas(i);
        printf("\n");
        mantenerCiclo(i+1);
    }
    if ( i != 3){
        printf("\n");
        ahorraLineas(i);   
    }
}

int main(){
    mantenerCiclo(0);
    return 0;
}