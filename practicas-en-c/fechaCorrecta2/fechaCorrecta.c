/*Pedir día, mes, año  de una fecha e indicar  si la fecha es correcta.
Con meses de 28,30 y 31 días. Sin años biciestos*/
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
	
	if(year<=0){
		printf("El year es incorrecto\n");
	}else{
		if(mes==2 &&(dia>=1 && dia<=28)){
			printf("Fecha correcta\n");
		}else{
			if((mes==4 || mes==6 || mes==9 || mes==11)&& (dia>=1 && dia<=30)){
				printf("Fecha correcta\n");
			}else{
				if((mes==1 || mes==3 || mes==5 || mes==8 || mes==10 || mes==12)&& (dia>=1 && dia<=30)){
					printf("Fecha correcta\n");	
				}else{
					printf("Fecha incorrecta\n");		
				}
			}
		}
	}
	
	system("PAUSE");
	return 0;
}


