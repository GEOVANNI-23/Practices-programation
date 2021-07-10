/*Escribir un programa que solicite al usuario: nombre y dos valores númericos
Una vez introducidos los valores el programa saliudara al usuario y realizara
la suma, resta, multiplicación, división y modulo con esos valores. 
*/
#include <stdio.h>
int num1,num2,suma,resta,mul,div,mod;
char nombre[20];

int main(){
	
	printf("Introduzca su nombre: ");
	gets(nombre);
	
	printf("\nIntroduce el primer numero: ");
	scanf("%i",&num1);
	
	printf("\nIntroduce el segundo numero: ");
	scanf("%i",&num2);
	
	suma=num1+num2;
	resta=num1-num2;
	mul=num1*num2;
	div=num1/num2;
	mod=num1%num2;
	
	printf("\nHola %s ", nombre);
	printf("\nLa suma es: %i ", suma);
	printf("\nLa resta es: %i ", resta);
	printf("\nLa multiplicacion es: %i ", mul);
	printf("\nLa division es: %i ", div);
	printf("\nEl modulo es: %i ", mod);
	
	return 0;
}
