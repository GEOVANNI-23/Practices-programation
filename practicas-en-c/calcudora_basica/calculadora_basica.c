//Realizar una programa que realice las cuatro operaciones básicas utilizando funciones

#include <stdio.h>
#include <stdlib.h>

void pedir_datos();
int suma(int n1,int n2);
int resta(int n1,int n2);
int multiplicacion(int n1,int n2);
int division(int n1,int n2);

int opc,num1,num2;
int main(){
	
	printf("\tBIENVENIDO\n");
	printf("¿Qu%c operaci%cn desea realizar%c\n",138,162,63);
	printf("1.-SUMA\n");
	printf("2.-RESTA\n");
	printf("3.-MULTIPLICACIC%cN\n",224);
	printf("4.-DIVISI%cN\n",224);
	printf("5.-SALIR\n");
	scanf("%d",&opc);
	
	switch(opc){
		case 1: 
			pedir_datos();
			printf("\nLa suma es = %d \n",suma(num1,num2));
			
		break;
		case 2: 
			pedir_datos();
			printf("\nLa resta es = %d \n",resta(num1,num2));
		break;
		case 3: 
			pedir_datos();
			printf("\nLa multiplicaci%cn es = %d \n",162,multiplicacion(num1,num2));
		break;
		case 4: 
			pedir_datos();
			printf("\nLa sdivisi%cn es = %d \n",162,division(num1,num2));
		break;
		case 5: 
			system("cls"); 
			system("pause");
		break;
		default:
			printf("ADIO%cS",224);
			break;
		 
	}
	
	
	system("pause");
	return 0;
}

void pedir_datos(){
	printf("\nIngresa el 1er n%cmero: ",151);
	scanf("%d",&num1);
	printf("\nIngresa el 2do n%cmero: ",151);
	scanf("%d",&num2);
	
}

int suma(int n1,int n2){
	return  n1+n2;
}

int resta(int n1,int n2){
	return n1-n2;
}

int multiplicacion(int n1,int n2){
	return n1*n2;
}

int division(int n1,int n2){
	return n1/n2;
}
