/*
Escribe un programa que pregunte el precio, el tanto por ciento de descuento, y te
diga el precio con descuento. Por ejemplo, si el precio que introduce el usuario es 300 y
el descuento 20, el programa dirá que el precio final con descuento es de 240. 
*/

#include <stdio.h>

int main(){
	float precio, descuento, resultado, porcentaje_descuento;
	
	printf("Introduzca el precio: ");
	scanf("%f", &precio);
	
	printf("Introduzca el porcentaje de descuento: ");
	scanf("%f", &porcentaje_descuento);
	
	descuento = (precio * porcentaje_descuento)/100;
	
	resultado = precio - descuento;
	
	printf("El precio final con descuento es: %.2f\n", resultado);
	system("PAUSE");
	return 0;
}
