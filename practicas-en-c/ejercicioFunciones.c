/*Realizar una calculadora que pregunte al usuario que operación desea realizar
Utilizar un switch para evaluar las opciones

1: Sumar
2: Restar
3: Multiplicar
4: Dividir:
5: Salir
UTILIZA FUNCIONES DE TIPO VOID Y DE RETORNO*/
#include <stdio.h>
int op;
int n1,n2;
int main(){
	
	Saludo();
	
	/*printf("\t1: SUMA\n");
	printf("\t2: RESTA\n");
	printf("\t3: MULTIPLICACION\n");
	printf("\t4: DIVISION\n");
	printf("\t5: SALIR\n");
				
	printf("ELIJA UNA OPCION: ");
	scanf("%i",&op);
		
	
	switch(op){
		case 1: printf("%i",suma()); break;
		case 2: printf("%i",resta()); break;
		case 3: printf("%i",mult()); break;
		case 4: printf("%i",div()); break;
		case 5: printf("Adios"); break;
		default: printf("Opcion invalida"); break;
	}*/	

	return 0;
}

void Saludo(){
	printf("Bienvenidos");
}
/*
int suma(){
	
	printf("Ingrese el primer valor: ");
	scanf("%i",&n1);
	printf("Ingrese el segundo valor: ");
	scanf("%i",&n2);
	
	return n1+n2;
}
int resta(){
	
	printf("Ingrese el primer valor: ");
	scanf("%i",&n1);
	printf("Ingrese el segundo valor: ");
	scanf("%i",&n2);
	
	return n1-n2;
}
int div(){
	
	printf("Ingrese el primer valor: ");
	scanf("%i",&n1);
	printf("Ingrese el segundo valor: ");
	scanf("%i",&n2);
	
	return n1/n2;
}
int mult(){
	
	printf("Ingrese el primer valor: ");
	scanf("%i",&n1);
	printf("Ingrese el segundo valor: ");
	scanf("%i",&n2);
	
	return n1*n2;
}
*/

