#include <stdio.h>

void imprimir(int i ,int veces, char a){
    if ( i == veces || veces <=0 ){

    }else{
        printf("%c",a);
        imprimir(i +1 , veces, a);
    }
}

void ahorraLineas(int i){
        imprimir(0,i,' ');imprimir(0,1,'Z');imprimir(0,17-2*i,' ');
}

void mantenerCiclo(int i){
    if ( i == 9){ahorraLineas(i);}else{
        ahorraLineas(i);
        imprimir(0,1,'Z');
        ( i == 9)?  :printf("\n");
        mantenerCiclo(i+1);
    }
}

int main(){
    mantenerCiclo(0);
    return 0;
}