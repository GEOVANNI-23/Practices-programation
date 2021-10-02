/*Pedir una hora de la forma: hora, minuto, segundo y mostrar la hora 
con el segundo siguiente*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	int hora,minuto,segundo;
	
	printf("Ingresa la hora: \n");
	scanf("%d",&hora);
	scanf("%d",&minuto);
	scanf("%d",&segundo);
	
	segundo ++;
	
	if(segundo>=60){
		segundo=0;
		minuto++;
	}
	if(minuto>=60){
		minuto=0;
		hora++;
	}
	if(hora>=24){
		hora=0;
	}
	
	printf("La hora es: %d : %d : %d\n", hora,minuto,segundo);
	
	system("pause");
	return 0;
}
