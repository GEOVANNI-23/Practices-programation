/*Realizar un programa que pida al usuario dos números y una letra: “i” ó “p”.
El programa presentará los números pares (si se pulsó la “p”) ó impares (si se pulsó 
la “i”) que hay desde el primer número al segundo que introdujo el usuario. 
Si se pulsa alguna tecla distinta de “p” ó “i”, el programa no imprime ningún número.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int numeroInicial,numeroFinal,i,impar;
	char letra;
	printf("Ingresa 2 n%cmeros: \n",150);
	scanf("%d",&numeroInicial);
	scanf("%d",&numeroFinal);
	
	fflush(stdin);
	
	printf("i para n%cmeros impares: \n",150);
	printf("p para n%cmeros pares: \n",150);
	printf("Elije la opci%cn que desee: ",147);
	scanf("%c",&letra);
	
	
	system("cls");
	
	if(letra == 'p'){
		printf("\tN%cmeros Pares\n",150);
		for(i=numeroInicial; i<=numeroFinal; i++){
			if(i%2==0){
				printf("%d\n",i);	
			}
		}
	}else if(letra == 'i'){
		printf("\tN%cmeros Impares\n",150);
		for(i=numeroInicial; i<=numeroFinal; i++){
			if(i%2!=0){
				printf("%d\n",i);	
			}
		}
	}
	system("pause");
	return 0;
}
