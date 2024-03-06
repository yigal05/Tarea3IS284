#include <stdio.h>

int Padovan(int i){
	return (i ==0)? 1 : (i == 1)? 0 : (i==2)? 0 : Padovan(i-2)+ Padovan(i-3);
}

void mantenerCiclo(int i){
	(i == 9)? : ( printf("%i ", Padovan(i)) , mantenerCiclo(i+1));
}

int main(){
	mantenerCiclo(0);
}