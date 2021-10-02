/*Escribe un programa que pida al usuario los siguientes datos: 
días, horas y minutos. Y le conteste con la cantidad de segundos 
totales que son esos datos.*/

#include <stdio.h>
#include <stdlib.h>
//Prototipos de las funciones
void pedirDatos();
int segundosTotales(int h,int m,int s);
//Variables globales
int hora,minuto,segundo; 
int main(){
	
	pedirDatos();
	
	printf("La hora: %d:%d:%d tiene: %d segundos\n",
	hora,minuto,segundo,segundosTotales(hora,minuto,segundo));
	system("pause");
	return 0;
}
void pedirDatos(){
	printf("Ingrese la hora: \n");
	scanf("%d",&hora);
	scanf("%d",&minuto);
	scanf("%d",&segundo);
	segundosTotales(hora,minuto,segundo);
}
int segundosTotales(int h,int m,int s){
	
	return (h*3600) +(m*60)+(s); 
}
