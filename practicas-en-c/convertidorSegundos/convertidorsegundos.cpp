/*Escribe un programa que pida al usuario los siguientes datos: 
días, horas y minutos. 
Y le conteste con la cantidad de segundos totales que son esos datos. */

#include <stdio.h>
#include <stdlib.h>

int convertidorSegundos(int d, int h, int m);
 
 int dias,horas,minutos,segundos_totales;
 
 int main(){
 	
 	printf("Ingrese los dias: \n");
 	scanf("%d",&dias);
 	
 	printf("Ingrese las horas: \n");
 	scanf("%d",&horas);
 	
 	printf("Ingrese los minutos: \n");
 	scanf("%d",&minutos);
 	
 	printf("El total de segundos es: %d segundos\n",
	convertidorSegundos(dias,horas,minutos));
 	
 	system("pause");
 	return 0;
 }
 
int convertidorSegundos(int d, int h, int m){
	
	segundos_totales= (d*86400) + (h*3600) + (m*60);
	
	return segundos_totales;
}
