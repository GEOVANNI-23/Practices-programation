/*Realizar un programa que pida los tres coeficientes de una ecuación de 2º grado 
y calcule las dos soluciones aunque estas sean números imaginarios. 
Después de calcular las soluciones, el programa dará la opción de seguir 
resolviendo ecuaciones: Continuar (pulse C)? / Salir (pulse S)?. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	int a,b,c;
	float r1,r2;
	char letra;
	
	do{
		printf("Ingrese el valor a: ");
		scanf("%d",&a);
	
		printf("Ingrese el valor b: ");
		scanf("%d",&b);
		
		printf("Ingrese el valor c: ");
		scanf("%d",&c);
		
		
		r1= (-(b) + (sqrt((pow(b,2))+(4*a*c))))/(2*a);
		r2= (-(b) - (sqrt((pow(b,2))+(4*a*c))))/(2*a);
		
		//
		
		printf("El primer resultado es igual a: %.2f\n", r1);
		printf("El segundo resultado es igual a: %.2f\n", r2);
		
		fflush(stdin);
		printf("Pulse C para continuar o S para salir: \n");
		scanf("%c",&letra);
		
		if(letra=='s'){
			break;
		}
		
	}while(letra!='s');
	
	printf("Adios \n");
	system("pause");
	return 0;
}
