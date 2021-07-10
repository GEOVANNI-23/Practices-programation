/*Realizar un programa que imprima por pantalla tántos asteriscos como diga el usuario.
Al ejecutarse debe preguntar “Cuantos asteriscos desea imprimir?”, leer el número que
introduce el usuario e imprimir los asteriscos. */

#include <stdio.h>

int main(){
	int n,i;
	printf("\"Cuantos asteriscos desea imprimir?\": ");
	scanf("%i",&n);
	
	for(i=0;i<n;i++){
		printf("*");
	}
	printf("\n");
	system("PAUSE");
	return 0;
}
