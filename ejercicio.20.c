#include <stdio.h>


void imprimir(int i, int b){
	if ( i == 80){
		printf("\n");
	}else{
		(i >= 80-b)? printf("A"): printf(" ");
		imprimir(i+1, b);
	}
}

void mantenerCiclo(int i){ (i == 25)? : (imprimir(0 ,i), mantenerCiclo(i+1));}

int main(){
	mantenerCiclo(1);
	return 0;
}