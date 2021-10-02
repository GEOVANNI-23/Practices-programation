/*Escribir un programa que pida por teclado dos resistencias y calcule 
y presente la resistencia equivalente en paralelo (Req=(R1*R2)/(R1+R2)).*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int resistencia1,resistencia2,resistencia_equivalente;
	
	printf("Ingrese el valor de la primera resistencia: ");
	scanf("%d",&resistencia1);
	
	printf("Ingrese el valor de la segunda resistencia: ");
	scanf("%d",&resistencia2);
	
	//Req=(R1*R2)/(R1+R2)
	resistencia_equivalente = (resistencia1*resistencia2) + (resistencia1*resistencia2);
	
	system("cls");
	printf("La resistencia equivalente es igual a: %d\n", resistencia_equivalente);
	
	system("pause");
	return 0;
}
