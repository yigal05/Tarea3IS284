
#include <stdio.h>


int hallarFibonachi(int a) {
    return (a == 0) ? 0 :  (a == 1)? 1 : hallarFibonachi(a-1)+hallarFibonachi(a-2)  ;
}

void mantenerCiclo(int i)
{
	(hallarFibonachi(i) > 10000) ? : (printf("%i ", hallarFibonachi(i)), mantenerCiclo(i + 1));

}

int main(){
	mantenerCiclo(0);
	return 0;
}
