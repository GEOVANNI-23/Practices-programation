/*Realizar un programa que pida el numerador y denominador de una fracción y devuelva 
la fracción simplificada*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int nominador,denominador,max,i=2;
	
	printf("Ingrese el valor del nominador: ");
	scanf("%d",&nominador);
	
	printf("Ingrese el valor del denominador: ");
	scanf("%d",&denominador);
	
	if(nominador>denominador){
		max=nominador;
	}
	else{
		max=denominador;
	}
	
	while(i<max){
			nominador/i;
			denominador/i;
			i++;
	}
	
	printf("%d / %d\n",nominador,denominador);
	
	system("pause");
	return 0;
}
