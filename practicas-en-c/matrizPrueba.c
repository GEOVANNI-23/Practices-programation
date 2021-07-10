/*Pedir al usuario un numero par (comprobar si el número es par)
Crear una matriz[n][n] y rellearla alternativamente con B,N.

ejemplo
numero. 4

B N B N 
N B N B 
B N B N 
N B N B 


Una vez echo esto se le pedira al ususario 2 números a modeo de coordenadas xy
En el centro de la coordenada se escribira un "#" y en el resto de las filas y 
las columnas correspondientes se pondrá "*"

comprobar que los números introducidos no exedan el número de filas y columnas

ejemplo

B N B N 
N B N B 
B N B N 
N B N B 


x=2 FILA
y=2 COLUMNA

B N * N 
N B * B 
* * # * 
N B * B 

*/

#include <stdio.h>

int n,i,j;// i=fila, j=columna n=dimención de la matriz
int x,y; //coordenadas x=fila, y=columna
char letra ='B';
int main(){
	
	
	//pedimos el número par y comprobar si el número es par
	do{
		printf("Introduce un numero par: ");
		scanf("%i",&n);		
	}while(n%2!=0);
	
	//Creamos la matriz[n][n]
	if(n%2==0){	
		char matriz[n][n];
		
		
		//Rellenamos la matriz
		for(i=0;i<n;i++){
			if(letra=='B' ){
					letra='N';
				}else{
					letra='B';
				}
			for(j=0;j<n;j++){
				fflush(stdin);
				//limpiar el buffer	
				if(letra=='B' ){
					letra='N';
				}else{
					letra='B';
				}
				matriz[i][j]=letra;
			}
		}
		
		//Mostramos la matriz
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				printf("%c ", matriz[i][j]);
			}
			printf("\n");
		}
		/*
		//Pedimos las coordenadas
		printf("Introduce el valor de X (la fila): ");
		scanf("%i", &x);
		
		printf("Introduce el valor de Y (la columna): ");
		scanf("%i", &y);
		
		//comprobamos que los valores no excedan las dimensiones de la matriz
		
		while(x>=n || x<0 && y>=n ||y<0){
			printf("Introduce el valor de X (la fila): ");
			scanf("%i", &x);
		
			printf("Introduce el valor de Y (la columna): ");
			scanf("%i", &y);	
		}
		
		//Rellenamos la matriz con la # y los *
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
		
				matriz[x][y]='#';
				matriz[x][j]='*';
				matriz[i][y]='*';		
			}
		}
		
		//Mostramos la nueva matriz
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				printf("%c ", matriz[i][j]);
			}
			printf("\n");
		}
	*/					
	}
	
	return 0;
}
