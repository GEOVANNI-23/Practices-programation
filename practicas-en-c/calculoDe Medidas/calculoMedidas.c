/*Suponiendo que pi = 3.1416. Escribe un programa que pida al usuario que 
introduzca el radio, y presente por pantalla
el cálculo del perímetro de la circunferencia (2*pi*r),
el área del círculo (pi*r2), 
y el volumen de la esfera (V = 4*pi*r3/3).*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Prototipo de la función menú
void menu();
float perimetroCircunferencia(float radio);
float area_Circulo(float radio);
float volumenEsfera(float radio);
//Variables Globales
	#define PI 3.1416;//constante PI
	int opc; 
	float radio;
int main(){

	while(opc!=4){
		menu();
		scanf("%d",&opc);
		switch(opc){
			case 1: 
				printf("Ingresa el radio: ");
				scanf("%f",&radio);
				printf("El perimetro de la circunferencia es de: %.2f \n",
				perimetroCircunferencia(radio));	
			break;
			case 2: 
				printf("Ingresa el radio: ");
				scanf("%f",&radio);
				printf("El area del circulo es de: %.2f \n",
				area_Circulo(radio));	
			break;
			case 3: 
				printf("Ingresa el radio: ");
				scanf("%f",&radio);
				printf("El volumen de la esfera es de: %.2f \n",
				volumenEsfera(radio));	
			break;
		}
	}
	
	system("pause");
	return 0;
}

void menu(){
	
	printf("\tBienvenido\n");
	printf("Elija una Opcion\n");
	printf("1. Calcular el perimetro de una circunferencia. \n");
	printf("2. Calcular el area de un circulo. \n");
	printf("3. Calcular el volumen de una esfera. \n");
	printf("4. Salir. \n");
}

float perimetroCircunferencia(float radio){
	//(2*pi*r)
	return 2*radio*PI;
}
float area_Circulo(float radio){
	//(pi*r2)
	return pow(radio,2)*PI;	
}
float volumenEsfera(float radio){
	//(V = 4*pi*r3/3)
	float volumen=pow(radio,3)*4*PI;
	return volumen/3;
}

