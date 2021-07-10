/*Realizar un programa que pida tres números y diga cuáles son pares
 y cuáles impares*/
 
#include <stdio.h>

int main(){
	int n1,n2,n3;
	
	printf("Ingrese el primer numero: ");
	scanf("%i",&n1);
	
	printf("Ingrese el segundo numero: ");
	scanf("%i",&n2);
	
	printf("Ingrese el tercer numero: ");
	scanf("%i",&n3);
	
	if(n1%2==0 && n2%2==0 && n3%2==0){
		printf("Todos son pares \n");
	}else if(n1%2==0 && n2%2==0 && n3%2!=0){
		printf("%i, %i son pares y %i es impar \n", n1,n2,n3);
	}else if(n1%2==0 && n3%2==0 && n2%2==0){
		printf("%i, %i son pares y %i es impar \n", n1,n3,n2);
	}else if(n1%2!=0 && n2%2==0 && n3%2==0){
		printf("%i, %i son pares y %i es impar \n", n2,n3,n1);
	}else if(n1%2==0 && n2%2!=0 && n3%2!=0){
		printf("%i, %i son impares y %i es par \n", n2,n3,n1);
	}else if(n1%2!=0 && n2%2==0 && n3%2!=0){
		printf("%i, %i son impares y %i es impar \n", n1,n3,n2);
	}else if(n1%2!=0 && n2%2!=0 && n3%2==0){
		printf("%i, %i son impares y %i es impar \n", n1,n2,n3);
	}else{
			printf("Todos son impares \n");
	}
	
	system("PAUSE");
	return 0;
}
