/*Crear un programa que te al introducir un número del 1-7 te diga el día
al que corresponda siendo 1 Lunes y 7 Domingo*/

#include <stdio.h>

int n;
int main(){
	
	printf("Intrduzca un numero entre 1-7: ");
	scanf("%i", &n);
	
	switch(n){
		case 1: printf("Lunes"); break;
		case 2: printf("Martes"); break;
		case 3: printf("Miercoles"); break;
		case 4: printf("Jueves"); break;
		case 5: printf("Viernes"); break;
		case 6: printf("Sabado"); break;
		case 7: printf("Domingo"); break;
		default: printf("Introduzo un numero incorrecto"); break;
	}
	
	return 0;
}
