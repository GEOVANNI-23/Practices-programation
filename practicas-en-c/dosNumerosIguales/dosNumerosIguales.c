//Pedir dos n�meros y decir si son iguales o no

#include<stdio.h>
#include<stdlib.h>

int main(){
	//Declaraci�n de variables
	int numero1,numero2;
	
	//Pedir los n�meros al usuario
	printf("Introduce el 1er numero: ");
	scanf("%d",&numero1);
	
	printf("Introduce el 2do numero: ");
	scanf("%d",&numero2);
	
	//Comparar los n�meros
	if(numero1==numero2 || numero2==numero1){
		printf("Los numeros son iguales\n");
	}else{
		printf("Los numeros no son iguales\n");
	}
	
	system("PAUSE");
	return 0;
}
