/*Diseñar el algoritmo  
que lea el valor correspondiente a una distancia en millas marinas y las escriba
expresadas en metros. Sabiendo que 1 milla marina equivale a 1852 metros.
*/

#include <stdio.h>

int main(){
	int op;
	double resultado,distancia;
	const METROS= 1852;
	double constante=METROS;
	
	do{
		printf("\n1. Millas Marinas a Metros\n");
		printf("2. Metros a Milas Marinas\n");
		printf("3. Salir\n");
		
		printf("Ingrese una opcion ");
		scanf("%i",&op);
		
		switch(op){
			
			case 1: 
				printf("Ingrese el valor de la Distancia en millas marinas ");
				scanf("%d",&distancia);
				
				resultado = distancia * METROS;
				
				printf("%2g millas equivalen a %g metros.", distancia, resultado);
				
				break;
				
			case 2:
				printf("Ingrese el valor de la Distancia en metros ");
				scanf("%d",&distancia);
				
				resultado = distancia / METROS;
				
				printf("%g metros a %g millas equivalen.", distancia, resultado);
				
				break;
			
				case 3:
					system("exit");
					break;	
				
			default: 
				printf("Opcion no válida");
					
		}
		
	}while(op!=3);
	

	
	return 0;
}
