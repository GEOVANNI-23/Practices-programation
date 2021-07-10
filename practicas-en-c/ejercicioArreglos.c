/*Escribe  pida al usuario una frase y una vocal. 
Imprime el numero de veces que se repite esa vocal*/

#include <stdio.h>

int main(){
	char frase[50];
	char vocal;
	int i,con=0;
	printf("Escriba una frase: ");
	gets(frase);
	
	printf("Escriba una vocal: ");
	scanf("%c",&vocal);

	for(i=0;i<50;i++){
		if(frase[i]==vocal){
			con++;
		}
	}
	
	printf("La vocal %c aparece: %i", vocal, con);
	return 0;
}
