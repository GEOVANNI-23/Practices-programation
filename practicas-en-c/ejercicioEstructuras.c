/*Crear una estructura llamada "rango" con las variables nombre, edad, sexo, categoria.
se le pediran los datos al usuario y en la funcion de edad, se le asignara un rango.
Hasta 18 -Menor de edad
De 18 a 31 -Joven
De 32 a 65 -Adulto
De 65 en adelante -Tercera edad 
Crear una sola persona
--------------------------------
*/

#include <stdio.h>

struct rango{
	char nombre[20];
	int edad;
	char sexo[15];
	char categoria[30];
}persona;

int main(){
	
	printf("Ingresa el nombre: ");
	gets(persona.nombre);
	
	printf("Ingresa la edad: ");
	scanf("%i", &persona.edad);
	
	fflush(stdin);
	printf("Ingresa el sexo: ");
	gets(persona.sexo);
	
	
	if(persona.edad<18){
		
		strcpy(persona.categoria, "Menor de edad. ");
		
	}else if(persona.edad>=18 && persona.edad<=31){
		
		strcpy(persona.categoria, "Joven.");
		
	}else if(persona.edad>=32 && persona.edad<=65){
		
		strcpy(persona.categoria, "Adulto.");
		
	}else{
		
		strcpy(persona.categoria, "De la Tercera edad.");
	}
	
	printf("La persona llamada %s, tiene &i años, su sexo es %s, y es %s .",
	persona.nombre, persona.edad, persona.sexo, persona.categoria);
	
	return 0;	
}
