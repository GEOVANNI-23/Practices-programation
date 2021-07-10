/*Escribir un programa que pida por teclado dos resistencias y calcule y presente la
resistencia equivalente en paralelo (Req=(R1*R2)/(R1+R2)). */

#include <stdio.h>

int main(){
	
	float R1,R2,resultado;
	
	printf("Ingrese el valor de R1: ");
	scanf("%f", &R1);
	
	printf("Ingrese el valor de R2: ");
	scanf("%f", &R2);
	
	resultado = (R1*R2) / (R1+R2);
	
	printf("El resultado es igual a: %.2f \n", resultado); 
	
	system("PAUSE");
	return 0;
}
