/*Crear un programa que esulva la serie de fibonacci con recursividad
fibonacci= (n-1) + (n-2)
0, 1, 1, 2, 3, 5, 8...
*/

#include <stdio.h>

int fibonacci(int n);
int i;
int numero;
int main(){
	
	printf("Ingrese el numero de numeros de fibonacci desea imprimir: ");
	scanf("%i",&numero);
	for(i=0;i<=numero;i++){
		printf("%i ", fibonacci(i));	
	}
		
	
	
	return 0;
}

int fibonacci(int n){
	
		if(n==0||n==1){
			return n;
		}else{
			return (fibonacci(n-1)+fibonacci(n-2));
		}

}

