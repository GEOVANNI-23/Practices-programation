/*Realizar un programa que pida un número y calcule su factorial*/
#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int numero,i;
	double factorial=1;
	printf("Ingrese un n%cmero: ",151);
	scanf("%d",&numero);
	
	for(i=1; i<=numero; i++){
		factorial*=i;
	}
	printf("El factorial de %d es: %.0f \n",numero, factorial);
	
	system("pause");
	return 0;
}
