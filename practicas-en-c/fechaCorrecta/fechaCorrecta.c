/*Pedir día. mes y año de una fecha e indicar si la fecha es correcta.
Suponiendo que todos los meses tienen 30 días*/
/*
Fecha correcta
	dia entre 1 y 30
	mes entre 1 y 12
	año cualquiera mayor a 0
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int dia,mes,year;
	
	printf("Ingresa el dia:");
	scanf("&d",&dia);
	
	fflush(stdin);
	
	printf("Ingresa el mes:");
	scanf("&d",&mes);
	
	fflush(stdin);
	
	printf("Ingresa el year:");
	scanf("&d",&year);
	
	if(dia=1 && dia<=30){
		if(mes>=1 && mes<=12){
			if(year!=0){
				printf("Fecha correcta\n");
			}else{
				printf("year incorrecto\n");
			}
		}else{
			printf("mes incorrecto\n");
		}
	}else{
		printf("dia incorrecto\n");
	}
	
	system("PAUSE");
	return 0;
}
