/*Realizar un programa que pida al usuario dos n�meros y presente los n�meros del
primero n�mero al segundo que introdujo el usuario.*/

#include <stdio.h>

int main(){
	int i,n1,n2;
	
	printf("Ingrese el primer numero: ");
	scanf("%i",&n1);
	
	printf("Ingrese el segundo numero: ");
	scanf("%i",&n2);
	
	for(i=n1; i<n2; i++){
		printf("%i ",i);		
	}
	
	system("PAUSE");
	return 0;
}
