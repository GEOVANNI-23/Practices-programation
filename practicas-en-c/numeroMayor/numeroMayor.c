//Pedir dos números y decir cual es el mayor
#include<stdio.h>
#include<stdlib.h>

int main(){
	int numero1,numero2;
	
	printf("Ingrese el 1er numero: ");
	scanf("%d",&numero1);
	
	printf("Ingrese el 2do numero: ");
	scanf("%d",&numero2);
	
	if(numero1>numero2){
		printf("%d es mayor a %d \n",numero1,numero2);
	}else if(numero2>numero1){
		printf("%d es mayor a %d \n",numero2,numero1);
	}else{
		printf("Ambos son iguales \n");
	} 
	
	system("PAUSE");
	return 0;
}
