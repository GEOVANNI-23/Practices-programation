/*Realizar un programa que pida al usuario dos n?meros y presente los n?meros del
primero n?mero al segundo que introdujo el usuario. Repetir este ejercicio con todos 
los tipos de bucles (for, while, y do-while).*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	int i;
	int numero_inicial,numero_final;
	printf("Ingresa el numero inicial: ");
	scanf("%d",&numero_inicial);
	printf("Ingresa el numero al que deseas llegar: ");
	scanf("%d",&numero_final);
	for(i=numero_inicial; i<=numero_final; i++){
		printf("%d\n",i);
	}
	printf("\n");
	system("pause");
	return 0;
}
