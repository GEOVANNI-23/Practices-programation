/*Escribir un programam que lea números consecutivos por teclado y
finalice cuandose introduzca uno mayor a la suma de los dos anteriores*/

#include <stdio.h>

int n1,n2,n3;
int main(){
	
	printf("Introduzca un numero: ");
	scanf("%i", &n1);
	
	printf("Introduzca un numero: ");
	scanf("%i", &n2);
		
	
	while(n3<=n1+n2){
		
		printf("Introduzca un numero: ");
		scanf("%i", &n3);
		if(n3<=n1+n2){
			n1=n2;
			n2=n3;
		}	
		
	}
		
	printf("FIN ");
	
	
	return 0;
}
