/*Escribir un programa que pida por teclado los tres coeficientes (a, b y c) de la ecuaci�n
ax2+bx+c=0 y calcule las dos soluciones suponiendo que ambas ser�n reales (es decir
que la ra�z queda positiva).*/

#include <stdio.h>
#include <Math.h>

int main(){
	
	float a,b,c, resultado1, resultado2;
	
	printf("Ingrese el valor de a: ");
	scanf("%f", &a);
	
	printf("Ingrese el valor de b: ");
	scanf("%f", &b);
	
	printf("Ingrese el valor de c: ");
	scanf("%f", &c);
	fflush(stdin);
	
	
	resultado1 =  -(b)+(sqrt(pow(b,2) - (4*a*c)));
	resultado1 =  -(b)-(sqrt(pow(b,2) - (4*a*c)));
	
	fflush(stdin);
	
	printf("Resultado 1: %.2f \n", resultado1);
	printf("Resultado 2: %.2f \n", resultado2);
	
	system("PAUSE");
	return 0;
}
