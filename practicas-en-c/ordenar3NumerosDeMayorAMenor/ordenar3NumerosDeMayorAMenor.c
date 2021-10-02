//Pedir 3 números y ordenarlos de mayor a menor
/*
combinaciones
a>b y b>c = a b c
a>c y c>b = a c b
b>a y a>c = b a c
b>c y c>a = b c a
c>a y a>b = c a b
c>b y b>a = c b a 

*/
#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int numero1,numero2,numero3;
	
	printf("Ingresa el 1er numero: ");
	scanf("%d",&numero1);
	
	printf("Ingresa el 2do numero: ");
	scanf("%d",&numero2);
	
	printf("Ingresa el 3er numero: ");
	scanf("%d",&numero3);
	
	if(numero1>numero2 && numero2>numero3){
		printf("%d, %d, %d\n",numero1,numero2,numero3);
	}else if(numero1>numero3 && numero3>numero2){
		printf("%d, %d, %d\n",numero1,numero3,numero2);
	}else if(numero2>numero1 && numero1>numero3){
		printf("%d, %d, %d\n",numero2,numero1,numero3);
	}else if(numero2>numero3 && numero3>numero1){
		printf("%d, %d, %d\n",numero2,numero3,numero1);	
	}else if(numero3>numero1 && numero1>numero2){
		printf("%d, %d, %d\n",numero3,numero1,numero2);
	}else{
		printf("%d, %d, %d\n",numero3,numero2,numero1);
	}
	
	system("PAUSE");
	return 0;
}
