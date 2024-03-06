#include <stdio.h>


void imprimir(int i, int b ,char c){
	if ( i == 13){
		printf("\n");
	}else{
		( i > b-1 && i<13-b )?  printf("%c",c):printf(" ");
		imprimir(i+1, b,c);
	}
}

void mantenerCiclo(int i){
	char letras[8] = "PNLJHFD";
	(i == 7)? : (imprimir(0 ,i, letras[i]), mantenerCiclo(i+1));
}

int main(){
	mantenerCiclo(0);
	return 0;
}