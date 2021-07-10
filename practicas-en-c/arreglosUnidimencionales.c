/*Crear un array de float, double, char y string de las posiciones que se desee 
y pedirle al usuario que los rellene. una vez rellenos imprimir cada uno de ellos*/

#include <stdio.h>

int i,nPos;
int main(){
	
	printf("Intrudoce el numero de posiciones de los arreglos: ");
	scanf("%i",&nPos);
	
	float aFlotantes[nPos];
	double aDoubles[nPos];
	char aCaracteres[nPos];
	char aStrings[nPos];
	
	for(i=0;i<nPos;i++){
		fflush(stdin);
		printf("Escriba el valor de la posicion %i: ",i);
		scanf("%f", &aFlotantes[i]);
	}
	for(i=0; i<nPos; i++){
		fflush(stdin);
		printf("\nLos valores del arreglo de numeros flotantes son: %g", aFlotantes[i]);
	}
	/*-------------------------------*/
	
	for(i=0;i<nPos;i++){
		fflush(stdin);
		printf("\nEscriba el valor de la posicion %i: ", i);
		scanf("%lf", &aDoubles[i]);
	}
	for(i=0; i<nPos; i++){
		fflush(stdin);
		printf("\nLos valores del arreglo de numeros doubles son: %g", aDoubles[i]);		
	}
	
	/*-------------------------*/
	
	for(i=0;i<nPos;i++){
		fflush(stdin);
		printf("\nEscriba el valor de la posicion %i: ", i);
		scanf("%c", &aCaracteres[i]);
	}

	for(i=0; i<nPos; i++){
		fflush(stdin);
		printf("\nLos valores del arreglo de caracteres son: %c", aCaracteres[i]);
		
	}
	
	/*------------------------------------*/
	fflush(stdin);
		fflush(stdin);
		printf("\nEscriba el valor del string: ");
		gets(aStrings);

		printf("\nLos valores del arreglo de Strings son: %s", aStrings);

	return 0;
}
