//Pedir una nota de 0 a 10 y mostrarla de la siguiente forma
//Insufisiente, Suficiente y Bien
#include<stdio.h>
#include<stdlib.h>

int main(){
	float calificacion;
	
	printf("Ingresa una calificacion: ");
	scanf("%f",&calificacion);
	
	fflush(stdin);
	
	if(calificacion>=9){
		printf("Bien\n");	
	}else if(calificacion>=7){
		printf("Suficiente\n");		
	}else if(calificacion<7){
		printf("Insuficiente\n");
	}
	
	system("PAUSE");
	return 0;
}
