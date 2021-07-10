/*
Diseñar el algoritmo correspondiente a un programa
que calcule el área y el perímetro de un triángulorectángulo
dada la base y la altura.
*/

#include <stdio.h>
#include <math.h>

int main(){
	int base, altura, area;
	float hipotenusa, perimetro;
	
	printf("Ingresa la base: ");
	scanf("%i",&base);
	printf("Ingresa la altura: ");
	scanf("%i",&altura);
	
	area = base * altura;
			
	hipotenusa= sqrt(pow(base,2) + pow(altura,2));
	
	perimetro= base + altura + hipotenusa;
	
	printf("\nEl area es igual a: %i", area);	
	printf("\nEl perimetro es igual a: %.2g \n", perimetro);
	
	return 0;
}
