/*Escribir un programa que pida por teclado cuatro números y calcule y presente la media
de los cuatro. */

#include <stdio.h>
int i;
int main(){
	float num[4],resultado;
	
	for(i=0;i<4;i++){
		printf("Ingrese el valor numero %i: ", i+1);
		scanf("%f",&num[i]);
		resultado=resultado+num[i];
	}
	
	resultado=resultado/4;
	
	printf("La media o promedio es igual a: %.2f\n", resultado);
	
	system("PAUSE");
	return 0;
}
