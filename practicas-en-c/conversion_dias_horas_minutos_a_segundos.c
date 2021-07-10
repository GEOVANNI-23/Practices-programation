/*Escribe un programa que pida al usuario los siguientes datos: días, horas y minutos. Y le
conteste con la cantidad de segundos totales que son esos datos. */

#include <stdio.h>

int main(){
	int dias, horas, minutos, resultado;
	int d,h,m;
	
	printf("Ingrese los dias: ");
	scanf("%i", &dias);
	
	printf("Ingrese las horas: ");
	scanf("%i", &horas);
	
	printf("Ingrese los minutos: ");
	scanf("%i", &minutos);
	
	d = dias * 86400;
	
	h = horas * 3600;
	
	m = minutos * 60;
	

	resultado= d+h+m;
	
	printf("Total de segundos es igual a : %i \n", resultado);
	
	
	system("PAUSE");
	return 0;
}
