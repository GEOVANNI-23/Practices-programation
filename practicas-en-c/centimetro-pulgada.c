/*Diseñar el algoritmo correspondiente a un programa
que tras introducir una medida expresada en centímetros la convierta en pulgadas (1
pulgada = 2,54 centímetros)
*/

int main(){
	#define  PULGADA 2.54
	float centimetros;
	float pulgadas;
	
	printf("DE CENTIMETROS A PULGADAS\n");
	printf("Ingrese los centimetros que desean convertir. ");
	scanf("%f",&centimetros);
	
	pulgadas= centimetros / PULGADA;
	
	printf("%.2f centimetros son %.2f pulgadas: ",centimetros, pulgadas);
	
	return 0;
}
