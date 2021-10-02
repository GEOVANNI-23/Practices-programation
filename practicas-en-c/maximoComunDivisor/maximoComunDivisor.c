//Realizar un programa que pida dos números y diga su máximo común divisor

#include <stdio.h>
#include <stdlib.h>

int maximoComunDivisor(int n1, int n2);
int minimo(int n1, int n2);

int main(){
	int numero1,numero2,mcd;
	printf("Ingrese un numero: ");
	scanf("%d",&numero1);
	printf("Ingrese un numero: ");
	scanf("%d",&numero2);
	
	mcd=maximoComunDivisor(numero1, numero2);
	
	printf("El maximo comun divisor de %d y %d es %d  \n", numero1, numero2, mcd);
	
	system("pause");
	return 0;
}

int maximoComunDivisor(int n1, int n2){
	
	int mcd; //por defecto 1 es el primer número primo 
	int min, i=1;
	
	min= minimo(n1,n2);
	
	mcd=1;
	
	for(i=2; i<=min; i++){
		if(n1%i==0 && n2%i==0){
			mcd=i;
		}
	}
	return mcd;
		
		
	
}
int minimo(int n1, int n2){
	
	int min;
	
	if(n1>n2){
		min=n2;
	}else{
		min=n1;
	}
	
	return min;
}

