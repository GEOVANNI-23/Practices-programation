/*Suponiendo que una paella se puede cocinar exclusivamente con arroz y gambas, y
que para cada cuatro personas se utiliza medio kilo de arroz y un cuarto de kilo de
gambas, escribir un programa que pida por pantalla el número de comensales para la
paella, el precio por kilo de los ingredientes y muestre las cantidades de los
ingredientes necesarios y el coste de la misma.*/

#include <stdio.h>

int main(){
	#define PRECIO_ARROZ 27.50
	#define PRECIO_GAMBAS 31.70
	float precio_arroz=PRECIO_ARROZ;
	float precio_gambas=PRECIO_GAMBAS;
	
	int numcomensales; 
	float costo_total_arroz,costo_total_gambas,cantidad_total_arroz,cantidad_total_gambas;
	
	printf("Ingrese el numero de comensales: ");
	scanf("%i",&numcomensales);
	
	/*
		SI 1/2 KILO DE ARROZ = 4 PERSONAS
		ENTONCES cantidad = (número de personas * 0.5) / 4
	*/
	cantidad_total_arroz= (numcomensales*0.5) / 4;
	
	/*
		SI 1/4 DE GAMBAS = 4 PERSONAS
		ENTONCES cantidad = (número de personas * 0.25) / 4
	*/
	cantidad_total_gambas= (numcomensales*0.25) / 4;
	
	
	costo_total_arroz= cantidad_total_arroz * precio_arroz;
	
	costo_total_gambas= cantidad_total_gambas * precio_gambas;
	
	
	printf("CANTIDAD DE ARROZ UTILIZADO: %.2f kilos", cantidad_total_arroz);
	
	printf("\nCOSTO TOTAL: %.2f pesos",costo_total_arroz);
	
	fflush(stdin);
	printf("\nCANTIDAD DE GAMBAS UTILIZADO: %.2f kilos", cantidad_total_gambas);
	
	printf("\nCOSTO TOTAL: %.2f pesos",costo_total_gambas);
	
	return 0;
}
