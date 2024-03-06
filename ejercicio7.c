#include <stdio.h>

int Narayana(int i){
	return (i ==0)? 1 : (i == 1)? 1 : (i==2)? 1 : Narayana(i-1)+ Narayana(i-3);
}

void mantenerCiclo(int i){
	(i == 9)? : ( printf("%i ", Narayana(i)) , mantenerCiclo(i+1));
}

int main(){
	mantenerCiclo(0);
}