//Pedir dos números y ordenarlos de mayor a menor
#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int numero1,numero2;
	
	printf("Ingresa el 1er numero: ");
	scanf("%d",&numero1);
	
	printf("Ingresa el 2do numero: ");
	scanf("%d",&numero2);
	
	if(numero1>numero2){
		printf("\t%d, %d\n",numero1,numero2);
	}else{
		printf("\t%d, %d\n",numero2,numero1);
	}
	
	system("PAUSE");
	return 0;
} 
