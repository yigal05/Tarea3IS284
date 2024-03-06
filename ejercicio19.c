#include <stdio.h>


void imprimir(int i, int b){
	if ( i == 8){
		printf("\n");
	}else{
		(i==b || i== 7-b)? printf("A"): printf(" ");
		imprimir(i+1, b);
	}
}

void mantenerCiclo(int i){ (i == 4)? : (imprimir(0 ,i), mantenerCiclo(i+1));}

int main(){
	mantenerCiclo(0);
	return 0;
}