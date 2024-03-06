#include <stdio.h>
#include <string.h>


int mantenerCiclo( int size , char cadena[] ){
	return (size == 0 )? : (printf("%c", cadena[size-1] ) , mantenerCiclo( size-1, cadena));	
}

int main(){
	int  numero = 25;
	char cadena[20];
	sprintf(cadena,"%d", numero);
	int longitud = strlen(cadena);
	mantenerCiclo(longitud, cadena);
}