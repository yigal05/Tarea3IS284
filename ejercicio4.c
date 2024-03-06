#include <stdio.h>

int hallarPell(int i){
	return ( i == 0)? 0 : (i == 1)? 1 : 2*hallarPell(i-1)+hallarPell(i-2) ;
}

void mantenerCiclo(int i){
	(i==9)? : ( printf("%i ", hallarPell(i) ) , mantenerCiclo(i+1) );
}

int main(){
	mantenerCiclo(0);
}