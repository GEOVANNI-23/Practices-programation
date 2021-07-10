/*Declara dos arreglos de enteros del mismo tamaño y copia el contenido del primero
al segundo arreglo usando un bucle for*/

#include <stdio.h>

int main(){
	
	int arreglo1[3]={15,45,75};
	int arreglo2[3];
	int i;
	for(i=0; i<3; i++){
		arreglo2[i]=arreglo1[i];
	}
	for(i=0; i<3; i++){
		printf("%i\n", arreglo2[i]);
	}
	
	
	return 0;
}
