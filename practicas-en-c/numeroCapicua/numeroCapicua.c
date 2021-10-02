//Pedir un número entre 0 y 9999 y decir si es capicúa
/*Un número será capicua si las cifras son iguales de dos en dos
por los extremos 
*/
#include<stdio.h>
#include<stdlib.h>

int main(){
	int numero;
	int unidad,decena,centena,unidadMillar;
	
	printf("Ingresa un numero entre 0 y 9999: ");
	scanf("%d",&numero);
	
	if(numero>100 && numero<1000){
		//unidad
		unidad=numero%10;
		numero=numero/10;
		
		//decena
		decena=numero%10;
		numero=numero/10;
		
		//centenas
		centena=numero;
	
		if(unidad==centena){
			printf("El numero es capicua\n");
		}else{
			printf("El numero no es capicua\n");
		}
	}else if(numero>1000 && numero<10000){
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
		unidadMillar=numero;
		
		if(unidad==unidadMillar && decena==centena){
			printf("El numero es capicua\n");
		}else{
			printf("El numero no es capicua\n");
		}
	}
	
	system("PAUSE");
	return 0;
}
