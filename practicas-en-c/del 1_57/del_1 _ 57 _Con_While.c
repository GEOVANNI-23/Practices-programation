/*Realizar un programa que imprima los n?meros del 1 al 57. Repetir este 
ejercicio con todos los tipos de bucles (for, while, y do-while).
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int i=1;
	
	while(i<=57){
		printf("%d-",i);
		i++;
	}
	printf("\n");
	system("pause");
	return 0;
}
