/*Realizar un programa que pida al usuario dos n�meros y presente los n�meros impares
que hay desde el primer n�mero al segundo que introdujo el usuario.*/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int numeroInicial,numeroFinal,i,impar;
	printf("Ingresa 2 n%cmeros: \n",151);
	scanf("%d",&numeroInicial);
	scanf("%d",&numeroFinal);
	
	for(i=numeroInicial; i<=numeroFinal; i++){
		if(i%2!=0){
			printf("%d\n",i);	
		}	
	}
	
	system("pause");
	return 0;
}
