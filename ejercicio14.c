#include <stdio.h>

void HacerTabla(int i , int a){
	(i == 11)? printf("\n\n") : ( printf("%ix%i=%i\n", a , i , a*i), HacerTabla(i+1,a));
}

void mantenerCiclo(int i){
	(i == 11)? : (HacerTabla(0,i), mantenerCiclo(i+1));
}

int main(){
	mantenerCiclo(1);
	return 0;
}