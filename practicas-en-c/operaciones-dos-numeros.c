/*
Dise�ar el algoritmo correspondiente a un programa
que pida por teclado dos n�meros enteros y muestre su suma, resta, multiplicaci�n,
divisi�n y el resto (m�dulo) de la divisi�n. Si la operaci�n no es conmutativa, tambi�n
se mostrar� el resultado invirtiendo los operadores
*/

#include <stdio.h>

int main(){
	int num1,num2;
	
	printf("Escribir el 1er numero: ");
	scanf("%i",&num1);
	
	printf("Escribir el 2do numero: ");
	scanf("%i",&num2);
	
	printf("La Suma es igual a: %i \n", num1 + num2);
	printf("La Resta es igual a: %i \n", num1 - num2);
	printf("La Multiplicacion es igual a: %i \n", num1 * num2);
	printf("La Division es igual a: %i \n", num1 / num2);
	printf("El Resto es igual a: %i \n", num1 % num2);
	printf("La Resta es igual a: %i \n", num2 - num1);
	printf("La Division es igual a: %i \n", num2 / num1);
	printf("El Resto es igual a: %i ", num2 % num1);
	
	return 0;
}
