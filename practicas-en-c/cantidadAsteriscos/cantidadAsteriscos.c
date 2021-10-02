/*Realizar un programa que imprima por pantalla tántos asteriscos como diga el usuario.
Al ejecutarse debe preguntar “Cuantos asteriscos desea imprimir?”, leer el número que
introduce el usuario e imprimir los asteriscos.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int cantidad,i;
	printf("%cCu%cntos asteriscos desea imprimir?: ",131,160);
	scanf("%d",&cantidad);
	
	system("color 2f");
	
	for(i=1;i<=cantidad;i++){
		printf("%d %c * \n",i,175);
	}
	
	system("pause");
	return 0;
}
