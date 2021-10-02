/*Escribe un programa que pida al usuario que introduzca los segundos, 
y le conteste diciéndole el número de días, horas, minutos y segundos 
que son.  */
#include <stdio.h>
#include <stdio.h>


int dias,horas,minutos,segundos;

int main(){
	
	printf("Ingresa los segundos a convertir: ");
	scanf("%d",&segundos);
	
	dias=segundos/86400;
	segundos=segundos%86400;
	
	printf("%d\n",segundos%86400);
	
		
	horas=segundos/3600;
	segundos=segundos%3600;
	
	minutos=segundos/60;
	segundos=segundos%60;
	
	printf(" son %d dias, %d horas, %d minutos, %d segundos \n",
	dias,horas,minutos,segundos);
	system("pause");
	return 0;
}


