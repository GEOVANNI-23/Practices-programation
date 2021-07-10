/*
Diseñar el algoritmo correspondiente a un programa
que escribe el porcentaje descontado en una compra, introduciendo por teclado el
precio de la tarifa y el precio pagado.

descuento=tarifa-precio
%descuento=descuemto*100/tarifa
*/

#include <stdio.h>

int main(){
	
	int tarifa,precio,descuento;
	float porcentajeDescuento;
	
	printf("Ingrese la tarifa: ");
	scanf("%i",&tarifa);
	
	printf("Ingrese el precio: ");
	scanf("%i",&tarifa);
	
	descuento= tarifa - precio;
	
	porcentajeDescuento= descuento / 100 * tarifa;
	
	printf("El porcentaje de descuento es %.0f ", porcentajeDescuento);
	
	return 0;
}
