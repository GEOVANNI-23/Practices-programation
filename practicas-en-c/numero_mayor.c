/*Realizar un programa que pida al usuario dos 
n�meros y diga cu�l es el mayor y cu�l el menor*/

#include <stdio.h>

int main(){
	int n1,n2;
	
	printf("Ingrese el primer numero: ");
	scanf("%i",&n1);
	
	printf("Ingrese el segundo numero: ");
	scanf("%i",&n2);
	
	if(n1>n2){
		printf("%i es maoyor: \n",n1);
	}else{
		printf("%i es maoyor: \n",n2);
	}
	
	system("PAUSE");
	return 0;
}
