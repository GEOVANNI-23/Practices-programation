//Pedir el radio de una circunferencia y calcular su área A=PI*r^2
#include<stdio.h>
#include<stdlib.h>
#include<math.h>//libreria para utilizar las funciones math

int main(){
	
	int radio;
	double area;
	#define PI 3.1416; //definimos la constante PI
	
		
	//pedimos el radio
	printf("Ingresa el radio del circulo: ");
	scanf("%d",&radio);
	
	//calculamos el área
	area=pow(radio,2) * PI;
	
	//mostramos el resultado
	printf("\nEl area del circulo con radio %d es igual a: %.2f\n",radio,area);
	system("PAUSE");
	return 0;
}
