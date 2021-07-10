/*Suponiendo que pi = 3.1416. Escribe un programa que pida al usuario que introduzca el
radio, y presente por pantalla el cálculo del perímetro de la circunferencia (2*pi*r), el
área del círculo (pi*r2), y el volumen de la esfera (V = 4*pi*r3/3). 
*/

#include <stdio.h>
#include <Math.h>
#define PI 3.1416
float pi=PI;

int main(){
	
	float radio, perimetro_circunferencia, area_circulo, volumen_esfera;
		
	printf("Ingrese el radio: ");
	scanf("%f",&radio);
	
	perimetro_circunferencia = 2*pi*radio;
	
	area_circulo = pi*(pow(radio,2)); 
	
	volumen_esfera= (4*pi*(pow(radio,3)))/3;
	
	printf("El perímetro de la circunferencia es igual a: %.2f\n", perimetro_circunferencia);
	printf("El area del circulo es igual a: %.2f\n", area_circulo);
	printf("El volumen del circulo es igual a: %.2f\n", volumen_esfera);
		
	system("PAUSE");
	return 0;
}
