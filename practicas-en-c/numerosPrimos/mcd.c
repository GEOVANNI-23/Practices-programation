//Realizar un programa Muestre los 10 primeros números primos
#include <stdio.h>
#include <stdlib.h>



int i,numerosPrimos[15];


int main(){
	
	//Obtenemos los números primos
	printf("1\n");
	for(i=1; i<20; i++){
		
		if(i%2!=0){
			if(i==1){
				i=2;	
			}
			numerosPrimos[i]=i;	
			printf("%d\n", i);
		}
		
	}

	system("pause");
	return 0;
}


