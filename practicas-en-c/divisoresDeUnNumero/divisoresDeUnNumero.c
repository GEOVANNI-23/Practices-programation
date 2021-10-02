//Realizar un programa que pida un número y diga todos sus divisores.

#include <stdio.h>
#include <stdlib.h>

int main(){
	int numero,i;
	
	printf("Ingrese un n%cmero: ",151);
	scanf("%d",&numero);
	
	
	for(i=numero; i>=1; i--){
		
		if(numero%i==0){
			printf("\t%d es divisor de %d\n",i,numero);
		}
	}
	system("pause");
	return 0;
}
