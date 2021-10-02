//Realizar un programa que pida dos números y diga sus divisores comunes.

#include <stdio.h>
#include <stdlib.h>

int main(){
	int numero1,numero2,i;
	
	printf("Ingresa un n%cumero: ",151);
	scanf("%d",&numero1);
	
	printf("Ingresa un n%cumero: ",151);
	scanf("%d",&numero2);
	
	for(i=1; i<numero1; i++){
		for(i=1; i<numero2; i++){
			if(numero1%i==0 && numero2%i==0){
				printf("%d es divisor de %d y %d \n",i, numero1, numero2);
			}
		}
	}
	

	system("pause");
	return 0;
}
 
