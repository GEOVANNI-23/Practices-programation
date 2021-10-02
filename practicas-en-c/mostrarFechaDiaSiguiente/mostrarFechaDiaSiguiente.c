//Pedir un dia, mes y año y mostar la fecha del dia siguiente.
//Suponiendo que todos los meses son de 30 dias
#include<stdio.h>
#include<stdlib.h>

int main(){
	int dia,mes,year;
	
	printf("Ingresa un dia: ");
	scanf("%d",&dia);
	
	printf("Ingresa un mes: ");
	scanf("%d",&mes);
	
	printf("Ingresa un dia: ");
	scanf("%d",&year);
	
	dia++;
	
	if(dia>=30){
		dia=1;
		mes++;
		if(mes>12){
			mes=1;
			year++;
		}
	}
	
	if(year==0){
		year==1;
	}
	
	
	printf("%d/%d/%d\n",dia,mes,year);
	system("PAUSE");
	return 0;
}
