#include <stdio.h>


int HallarLucas(int a){
	return (a == 0)? 2 : (a==1)? 1 :HallarLucas(a-1)+HallarLucas(a-2);
}

void MantenerCiclo(int i){
	(i == 9)? : (printf("%i ", HallarLucas(i) ) ,MantenerCiclo(i+1)) ;
}

int main(){
	MantenerCiclo(0);
}