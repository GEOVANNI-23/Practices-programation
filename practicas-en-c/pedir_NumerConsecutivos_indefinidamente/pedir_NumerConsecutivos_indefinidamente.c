/*Realizar un programa que pida dos números consecutivos (3 y 4; 9 y 10 etc.).
Cuando se introducen tres números consecutivos dice “gracias” y termina. 
Mientras no se introduzcan tres números consecutivos el programa sigue 
pidiendo números indefinidamente.*/
#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int numero1,numero2,contador=0;;
	
	do{
		printf("Ingrese dos n%cmeros: ",151);
		scanf("%d",&numero1);	
		scanf("%d",&numero2);
		
		if(numero2==numero1+1){
			contador++;		
		}else{
			contador=0;
		}

	}while(contador<3);
	
	printf("Gracias\n");
		
	system("pause");
	return 0;
}


