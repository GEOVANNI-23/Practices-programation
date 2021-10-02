//Pedir un número y decir si son positivos o no
#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int numero;
	
	printf("Ingresa el 1er numero: ");
	scanf("%d",&numero);
	
	
	if(numero>0 ){
		printf("\nEl numero %d es positivo.\n",numero);
	}else{
		printf("\nEl numero %d no es positivo.\n",numero);
	}
	
	system("PAUSE");
	return 0;
}
