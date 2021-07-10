/*Crear un programa que lea array de estructutas con las variables nombre y salario 
e imprimir el empleado con mayor y menor salario
------------------------------------------------
*/
#include <stdio.h>
float mayorSalario();
void menorSalario();

struct emplados{
	char nombre[15];
	float salario;
}empleado[3];



int i;
int cont;
int mayor, menor;

int main(){
	
	for(i=0;i<3;i++){
		fflush(stdin);
		printf("Ingresa el nombre del empleado: %i ", (i+1) );
		gets(empleado[i].nombre);
		
		printf("Ingresa el salario del empleado: %i ", (i+1) );
		scanf("%f",&empleado[i].salario);
		
		printf("\n");
	}
	
	printf("El mayor salario es de %s con %g. ", empleado[cont], mayorSalario());
	printf("\n");
	menorSalario();	
	return 0;
}

float mayorSalario(){
	mayor=0;
	cont=0;
	for(i=0;i<3;i++){
		if(empleado[i].salario > mayor){
			mayor=empleado[i].salario;
			cont=i;
		}
	}
	return mayor;
}

void menorSalario(){
	menor=mayorSalario();
	cont=0;
	for(i=0;i<3;i++){
		if(empleado[i].salario < menor){
			menor=empleado[i].salario;
			cont=i;
		}
	}
	printf("El menor salario es de %s con %g. ", empleado[cont], menor);
}

