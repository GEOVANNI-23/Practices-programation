/*
Diseñar el algoritmo correspondiente a un programa
que pida por teclado dos números enteros y muestre su suma, resta, multiplicación,
división y el resto (módulo) de la división. Si la operación no es conmutativa, también
se mostrará el resultado invirtiendo los operadores
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
