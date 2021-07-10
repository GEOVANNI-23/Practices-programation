/*Suma de todos los números de 1 al 100*/

#include <stdio.h>

int main(){
	
	printf("%i",sumaNumeros());
	return 0;
}

int sumaNumeros(){
	int a,b,i,suma;
	printf("Ingrese el primer numero a sumar: ");
	scanf("%i",&a);
	printf("Ingrese el ultimo numero a sumar: ");
	scanf("%i",&b);
	
	for(i=0;i<=b;i++){
		suma=(i*(a+b))/2;
	}
	return suma;
}
