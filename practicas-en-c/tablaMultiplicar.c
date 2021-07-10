/*Escribir un programa que pida un número al usuario e imprima su tabla
 de multiplicar hasta 10 y escriba al lado del resultado si este es par o impar*/
 
#include <stdio.h>
int n,i;

int main(){
	
	printf("Introduzca un numero: ");
	scanf("%i", &n);
	
	for(i=0; i<=10; i++){
		
		if(i*n%2==0){
			printf("\n%i * %i = %i: es par  ", n, i, i*n);	
		}else{
			printf("\n%i * %i = %i: es impar  ", n, i, i*n);
		}
	}
	
	return 0;
}
