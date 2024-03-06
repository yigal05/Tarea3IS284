#include <stdio.h>


int hallarFibonachi(int a) {
    return (a == 0) ? 0 :  (a == 1)? 1 : hallarFibonachi(a-1)+hallarFibonachi(a-2)  ;
}

int mantenerCiclo(int i , int suma)
{
	if ( hallarFibonachi(i) >100){
		return suma;
	}else{
		int a = hallarFibonachi(i);
		printf("%i " , a);
		suma += mantenerCiclo(i + 1, suma+a);
	}

}

int main(){
	int a = mantenerCiclo(0, 0);
	printf("y su suma es :%i" , a);
	return 0;
}