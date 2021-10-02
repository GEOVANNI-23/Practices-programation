/*Escribir un programa que pida por teclado cuatro números y calcule y 
presente la media de los cuatro. 
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int n1,n2,n3,n4,promedio=0;
	printf("Ingrese el primer numero: ");
	scanf("%d",&n1);
	printf("Ingrese el segundo numero: ");
	scanf("%d",&n2);
	printf("Ingrese el tercero numero: ");
	scanf("%d",&n3);
	printf("Ingrese el cuarto numero: ");
	scanf("%d",&n4);
	
	
	promedio=(n1+n1+n3+n4)/4;
	printf("La media es igual a: %d\n",promedio);
	system("pause");
	return 0;
}







