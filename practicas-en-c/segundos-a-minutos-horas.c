/*
Diseñar el algoritmo  correspondiente a un programa
que exprese en horas, minutos y segundos un tiempo expresado en segundos.
*/

#include <stdio.h>

int main(){
	int segundos,minutos, horas, dias;
	
	printf("Ingrese los segundos: ");
	scanf("%i",&segundos);
	
	horas = segundos / 3600;
	segundos=segundos % 3600;
	
	minutos= segundos / 60;
	segundos= segundos % 60;
	

	printf(" %i horas %i minutos, %i segundos", horas, minutos, segundos);
	
	
	return 0;
}
