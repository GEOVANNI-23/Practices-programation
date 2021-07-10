#include <stdio.h>

//constantes
#define PI 3.1416
float pi=PI;
//variables	
int num=5;
float d=3.154;
long nl=14165;
double dl=1.213456;
char le='a';
int num;

int main(){
	
	printf("Hola mundo");
	printf("\nEl entero es: %i", num);
	printf("\nEl flotante es: %g", d);
	printf("\nEl long es: %li", nl);
	printf("\nEl double es: %g", dl);
	printf("\nEl char es: %c", le);
	printf("\nLa constante es: %g", PI);
	
	printf("\nintroduzca un numero:  ");
	scanf("%i",&num);
	printf("\n numero introducido es: %i", num);
	
	
	return 0;
}
