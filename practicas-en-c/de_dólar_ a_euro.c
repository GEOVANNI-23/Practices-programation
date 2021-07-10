/*Suponiendo que 1 euro = 1.33250 dólares. Escribe un programa que pida al
usuario un número de dólares y calcule el cambio en euros. 
*/

#include <stdio.h>

int main(){
	
	#define DOLAR 1.33250
	float dolar= DOLAR;
	float dolares_convertir,euros;
	
	printf("Introduzca los dolares a convertir: ");
	scanf("%f",&dolares_convertir);
	
	euros=dolares_convertir/dolar;
	
	printf("%.2f dolares son %.2f euros\n", dolares_convertir, euros); 
	system("PAUSE");
	return 0;
}
