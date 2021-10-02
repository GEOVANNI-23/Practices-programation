/*Realizar un programa que pida dos números y presente por pantalla la ecuación de
segundo grado que tiene por soluciones estos dos números. Ejemplo: 5 y -3, 
la ecuación sería (x-5) (x+3) = x2-2x-15, los coeficientes son 1, -2 y -15. 
El programa permitirá repetir esta operación tantas veces como el usuario quiera, 
introduciendo números diferentes, hasta que decida terminar el programa 
(por ejemplo pulsando ‘S’).*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int numero1,numero2,b,c;
	char letra;
	
	do{
			printf("Ingrese el 1er n%cmero: ",151);
		scanf("%d",&numero1);
		
		printf("Ingrese el 2do n%cmero: ",151);
		scanf("%d",&numero2);
		
		b=numero1+numero2;
		c=numero1*numero2;
		
		if(b>=0 && c>=0){
			printf("x^2+%dx+%d\n",b ,c);	
		}else if(b>=0){
			printf("x^2+%dx%d\n",b ,c);
		}else if(c>=0){
			printf("x^2%dx+%d\n",b ,c);
		}else{
			printf("x^2%dx%d\n",b ,c);
		}
		printf("\n");
		fflush(stdin);
		scanf("%c",&letra);
		
	}while(letra!='s');
	
	system("cls");
	printf("Adios\n");
	
	
	system("pause");
	return 0;
}
