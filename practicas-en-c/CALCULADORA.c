/*Realizar una calculadora que pregunte al usuario que operación desea realizar
Utilizar un switch para evaluar las opciones

1: Sumar
2: Restar
3: Multiplicar
4: Dividir:
5: Salir
*/

#include <stdio.h>
int opcion,n1,n2,resultado;
int main(){
	
	do{
		printf("\n\tCALCULADORA\n");
		printf("\t 1: Sumar\n");
		printf("\t 2: Restar\n");
		printf("\t 3: Multiplicar\n");
		printf("\t 4: Dividir\n");
		printf("\t 5: Salir\n");
		
		printf("\tELIJA UNA OPCION: ");
		scanf("%i", &opcion);
		
		if(opcion!=5){
				printf("\nIntroduzca un numero: ");
				scanf("%i", &n1);
				printf("Introduzca un numero: ");
				scanf("%i", &n2);
		}
		
		switch(opcion){
			case 1:
				resultado=n1+n2;
				printf("La suma es igual a: %i \n", resultado);
			break;
			
			case 2:
				resultado=n1-n2;
				printf("La resta es igual a: %i \n", resultado);
			break;
			
			case 3:
				resultado=n1*n2;
				printf("La multiplicacion es igual a: %i \n", resultado);
			break;
			
			case 4:
				resultado=n1/n2;
				printf("La division es igual a: %i \n", resultado);
			break;
			
			default:
				printf("ADIOS");
				break;
		}
		
	}while(opcion!=5);
	
	
	
	return 0;	
} 
