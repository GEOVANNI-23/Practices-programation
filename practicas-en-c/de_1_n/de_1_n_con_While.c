/*Realizar un programa que pida al usuario un n�mero y presente los n�meros del 1 al
n�mero que introdujo el usuario. Repetir este ejercicio con todos los tipos de bucles
(for, while, y do-while)*/

#include <stdio.h>
#include <stdlib.h>
int main(){
	int i=1;
	int numero;
	printf("Ingresa el numero al que deseas llegar: ");
	scanf("%d",&numero);
	while(i<=numero){
		printf("%d\n",i);
		i++;
	}
	printf("\n");
	system("pause");
	return 0;
}
