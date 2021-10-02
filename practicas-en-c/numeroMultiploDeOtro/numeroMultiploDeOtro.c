//Pedir dos números y decir si uno es multiplo de otro
#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int numero1,numero2;
	
	printf("Ingresa el 1er numero: ");
	scanf("%d",&numero1);
	
	printf("Ingresa el 2do numero: ");
	scanf("%d",&numero2);
	
	if(numero1%numero2==0){
		printf("El numero %d es multiplo de %d.\n",numero1,numero2);
	}else if(numero2%numero1==0){
		printf("El numero %d es multiplo de %d.\n",numero2,numero1);
	}else{
		printf("Ningun numero es multiplo de otro\n");
	}	
	system("PAUSE");
	return 0;
}
