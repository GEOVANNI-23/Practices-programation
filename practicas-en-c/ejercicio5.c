/*Pedir al usuario un número  y sumar todos los numeros pares 
desde 0 hast el número introducido*/

#include <stdio.h>

int n,suma,inicio=0;
int main(){
	
	printf("Introduce un numero: ");
	scanf("%i",&n);
	
	while(inicio<=n){
		if(inicio%2==0){
			suma=suma+inicio;
		}
		inicio++;	
	}
	printf("La suma de todos los numeros pares es: %i ", suma);
	
	return 0;
}
