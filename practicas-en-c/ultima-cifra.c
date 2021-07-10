/*
Diseñar el algoritmo correspondiente a un programa
que obtiene la última cifra de un número introducido.
*/

#include <stdio.h>

int main(){
	
	int numero;
	printf("Ingresar un numero: ");
	scanf("%i",&numero);
	
	printf("La ultima cifa del numero es %i: ",numero%10);
	return 0;
}
