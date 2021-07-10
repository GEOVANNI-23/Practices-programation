/*Solicitar dos números al usuario y decirle si ambos son pares, si nunguno es par
o si es par alguno de ellos, en este caso decor cual de los dos es par */

#include <stdio.h>

int num1,num2;
int main(){
	
	printf("Introduzca el primer numero: ");
	scanf("%i",&num1);
	
	printf("Introduzca el segundo numero: ");
	scanf("%i",&num2);
	
	if(num1%2==0 && num2%2==0){
		printf("\tAmbos son pares");
	}else if(num1%2==0 && num2%2!=0){
		printf("\t%i: es par ", num1 );
	}else if(num1%2!=0 && num2%2==0){
		printf("\t%i: es par ", num2 );
	}else{
		printf("\tNinguno de los dos es par");
	}
	
	return 0;
}
