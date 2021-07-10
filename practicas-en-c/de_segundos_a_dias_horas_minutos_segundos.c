/*Escribe un programa que pida al usuario que introduzca los segundos, y le conteste
diciéndole el número de días, horas, minutos y segundos que son. */

#include <stdio.h>

int main(){
	int segundos, minutos, horas, dias;
	
	
	printf("Ingrese los segundos: ");
	scanf("%i", &segundos);
	
	dias= segundos/86400;
	segundos = segundos%86400;
	
	horas= segundos/3600;
	segundos = segundos%3600;
	
	
	minutos= segundos/60;
	segundos=segundos&60;
	
	
	printf("Son %i dias, %i horas , %i minutos y %i segundos son:\n", dias, horas, minutos, segundos);
	
	system("PAUSE");
	return 0;
}
