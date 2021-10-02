/*Escribir un programa que pida por teclado los tres coeficientes 
(a, b y c) de la ecuación ax2+bx+c=0 y calcule las dos soluciones 
suponiendo que ambas serán reales (es decir que la raíz queda positiva)*/
#include<stdio.h>
#include<math.h>

int main(){
    int numero1,numero2,numero3;
	float resultado1,resultado2;

    printf("Ingresa el valor de a: ");
    scanf("%d",&numero1);
    printf("Ingresa el valor de b: ");
    scanf("%d",&numero2);
    printf("Ingresa el valor de c: ");
    scanf("%d",&numero3);
    
    resultado1 = -(numero2)+sqrt((pow(numero2,2))-(4*numero1*numero3));
    resultado2 = -(numero2)-sqrt((pow(numero2,2))-(4*numero1*numero3));

    printf("\nEl primer resultado es igual a: %.2g", resultado1);
    printf("\nEl segundo resultado es igual a: %.2g", resultado2);

    
    return 0;
    
}
