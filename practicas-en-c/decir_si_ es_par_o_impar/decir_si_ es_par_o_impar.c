//Realizar un programa que pida tres números y diga cuáles son pares y cuáles impares

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int num1, num2, num3;
	
	printf("Ingresa 3 n%cmeros: \n",150);
	scanf("%d",&num1);
	scanf("%d",&num2);
	scanf("%d",&num3);
	
	if(num1%2==0 && num2%2==0 && num3%2==0){
		printf("Todos son pares\n");
	}else if(num1%2==0 && num2%2==0 && num3%2!=0){
		printf("%d y %d son pares y %d es impar\n", num1,num2,num3);
	}else if(num1%2==0 && num2%2!=0 && num3%2==0){
		printf("%d y %d son pares y %d es impar\n", num1,num3,num2);
	}else if(num1%2!=0 && num2%2==0 && num3%2==0){
		printf("%d y %d son pares y %d es impar\n", num2,num3,num1);
	}else if(num1%2!=0 && num2%2!=0 && num3%2==0){
		printf("%d y %d son impares y %d es impar\n", num1,num2,num3);
	}else if(num1%2!=0 && num2%2==0 && num3%2!=0){
		printf("%d y %d son impares y %d es impar\n", num1,num3,num2);
	}else if(num1%2==0 && num2%2!=0 && num3%2!=0){
		printf("%d y %d son impares y %d es impar\n", num2,num3,num1);
	}else{
		printf("Todos son impares\n");
	}
	
	system("pause");
	return 0;
}
