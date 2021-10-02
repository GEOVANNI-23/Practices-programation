//Realizar un programa que pida la base y el exponente y calcule la potencia
#include <stdio.h>
#include <stdlib.h>

int main(){
	int base,exponente,i,resultado=1;
	
	printf("Ingrese la base: ");
	scanf("%d",&base);
	
	printf("Ingrese el exponente: ");
	scanf("%d",&exponente);
	
	for(i=1; i<=exponente; i++){
		resultado*=base;
	}
	printf("El resultado es igual a: %d\n", resultado);
	system("pause");
	return 0;
}
