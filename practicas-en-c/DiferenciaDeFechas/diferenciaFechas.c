/*Pedir dos fechas y mostrar el número de días que hay de diferencia. 
Suponiendo que todos los meses sean de 30 días. Suponiendo que las fechas
sean correctas*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	int dias1,meses1,years1,dias2,meses2,years2,total_dias;
	//Pedir fecha-1
	printf("Ingresa la fecha 1: \n");
	scanf("%d",&dias1);
	scanf("%d",&meses1);
	scanf("%d",&years1);	
	fflush(stdin);
	//Pedir fecha-2
	printf("Ingresa la fecha 2: \n");
	scanf("%d",&dias2);
	scanf("%d",&meses2);
	scanf("%d",&years2);
	
	total_dias=abs((dias2-dias1)+(30*(meses2-meses1)+(365*(years2-years1))));
	
	printf("La diferencia de dias son: %d dias\n",total_dias);
	
	system("pause");
	return 0;
}
