/*Realizar un programa que pida al usuario un n�mero y presente los n�meros del 1 al
n�mero que introdujo el usuario. Repetir este ejercicio con todos los tipos de bucles
(for, while, y do-while)*/

#include <stdio.h>
#include <stdlib.h>
int main(){
	int i;
	int numero;
	printf("Ingresa el numero al que deseas llegar: ");
	scanf("%d",&numero);
	for(i=1; i<=numero; i++){
		printf("%d\n",i);
	}
	printf("\n");
	system("pause");
	return 0;
}
