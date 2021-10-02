/*Realizar un programa que pida al usuario dos números y presente los números del
primero número al segundo que introdujo el usuario. Repetir este ejercicio con todos 
los tipos de bucles (for, while, y do-while).*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	
	int numero_inicial,numero_final;
	printf("Ingresa el numero inicial: ");
	scanf("%d",&numero_inicial);
	printf("Ingresa el numero al que deseas llegar: ");
	scanf("%d",&numero_final);
	while(numero_inicial<=numero_final){
		printf("%d\n",numero_inicial);
		numero_inicial++;
	}
	printf("\n");
	system("pause");
	return 0;
}
