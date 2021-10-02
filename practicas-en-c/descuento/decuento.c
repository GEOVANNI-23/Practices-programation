/*Escribe un programa que pregunte el precio, el tanto por ciento de 
descuento, y te diga el precio con descuento. Por ejemplo, si el precio 
que introduce el usuario es 300 y el descuento 20, el programa dirá que 
el precio final con descuento es de 240. */

#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int main(){
	float precio;
	float descuento,porcentaje;
	float precio_total;
	
	printf("Ingresa el precio: ");
	scanf("%f",&precio);
	
	printf("Ingresa el descuento: ");
	scanf("%f",&descuento);
	
	porcentaje=(descuento/100)*precio;
	precio_total=precio - porcentaje; 
	
	system("cls");
	
	printf("El descuento es de: %.2f \n",descuento);
	printf("Precio total: %.2f \n",precio_total);
	
	system("pause");
	return 0;
}
