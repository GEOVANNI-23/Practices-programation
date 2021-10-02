//Pedir un número entre 0 y 99999 y mostrar las cifras al reves
#include<stdio.h>
#include<stdlib.h>

int main(){
			int numero;
	int unidad,decena,centena,unidadMillar,decenaMillar;
	
	printf("Ingresa un numero entre 0 y 99999: ");
	scanf("%d",&numero);
	
	//unidad
	unidad=numero%10;
	numero=numero/10;
	
	//decena
	decena=numero%10;
	numero=numero/10;
	
	//centenas
	centena=numero%10;
	numero=numero/10;
	
	//unidad de millar
	unidadMillar=numero%10;
	numero=numero/10;
	
	//decena de millar
	decenaMillar=numero;
	
	numero=10000*unidad+1000*decena+100*centena+10*unidadMillar+decenaMillar;
	printf("%d\n",numero);
	
	system("PAUSE");
	return 0;
}
