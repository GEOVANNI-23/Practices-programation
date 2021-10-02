//Pedir un número entre 0 y 9999 y decir cuántas cifras tiene
#include<stdio.h>
#include<stdlib.h>

int main(){
	int numero;
	
	printf("Ingresa un numero entre 0 y 9999: ");
	scanf("%d",&numero);
	
	if(numero<10){
		printf("Tiene 1 cifra \n");
	}else if(numero<100){
		printf("Tiene 2 cifra \n");
	}else if(numero<1000){
		printf("Tiene 3 cifra \n");
	}else if(numero<10000){
		printf("Tiene 4 cifra \n");
	}
	

	return 0;
}
