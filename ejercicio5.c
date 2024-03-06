#include <stdio.h>

int hallaPerrin(int i){
	return (i ==0)? 3 : (i == 1)? 0 : (i==2)? 2 : hallaPerrin(i-2)+ hallaPerrin(i-3);
}

void mantenerCiclo(int i){
	(i == 9)? : ( printf("%i ", hallaPerrin(i)) , mantenerCiclo(i+1));
}

int main(){
	mantenerCiclo(0);
}