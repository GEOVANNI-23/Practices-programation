/*Realizar un programa que pida que se pulse la letra “C” si se pulsa cualquier otra 
tecla que no sea la “C”, dice “letra incorrecta” y vulva a pedir que se pulse 
la letra “C”. Cuando se pulsa la tecla “C” el programa dice “gracias” y termina.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char letra;
	
	do{
		printf("Ingrese la letra c: ");
		scanf("%c",&letra);	
		
		if(letra=='c'){
			break;		
		}else{
			printf("Letra Incorrecta\n ");	
		}
		
		fflush(stdin);
	}while(letra!='c');
	
	printf("Gracias\n");
		
	system("pause");
	return 0;
}
