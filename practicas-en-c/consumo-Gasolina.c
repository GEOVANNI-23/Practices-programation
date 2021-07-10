/*
Diseñar el algoritmo correspondiente a un programa
que pida el total de kilómetros recorridos, 
el precio de la gasolina (por litro), 
el dinero de gasolina gastado en el viaje y 
el tiempo que se ha tardado (en horas y minutos) y que calcule:

• Consumo de gasolina (en litros y pesos) por cada 100 km.
• Consumo de gasolina (en litros y pesos) por cada km.
• Velocidad media (en km/h y m/s)
*/

#include <stdio.h>

int main(){
	float totalkm, precioGasolina, dineroGastado;
	int tiempoH, tiempoM;
	float consumoGasCienKm, consumoGasKm;
	float velocidadMediaKh, velociadadMediaMs;
	
	printf("Ingrese los kilometros recorridos: ");
	scanf("%f", &totalkm);
	
	printf("\nIngrese el precio de la gasolina (por litro): ");
	scanf("%f", &precioGasolina);	
	
	printf("\nIngrese el dinero de gasolina gastado en el viaje: ");
	scanf("%f", &dineroGastado);
	
	printf("\nIngrese las horas que ha tardado): ");
	scanf("%i", &tiempoH);
	printf("\nIngrese los minutos que ha tardado: ");
	scanf("%i", &tiempoM);
	
	//total de litros de gasolina introducidos
	float totalLitros=dineroGastado/precioGasolina;
	
	//litros por km
	float litros= totalLitros / totalkm;
	
	//dinero por km
	float dinerokm= dineroGastado/totalkm; 
	
	//convertir el tiempo a horas
	//Tranformamos los minutos a horas y lo sumas con las horas que ya teniamos
	float totalHoras= tiempoH + (tiempoM/60);
	
	//consumo de gasolona por litro cada 100km
	float consumoLitrosGas100= litros * 100;
	
	//consumo de gasolona por peso cada 100km
	float consumaPesosGas100= dinerokm * 100;
	
	//calculamos la velocidad media en km/h
	float velociadMediakm= totalkm/totalHoras;
	
	//calculamos la velociad media en m/s
	float velocidadMediams= (totalkm*1000) / 60;
	
	printf("Consumo de gasolina en litros por cada 100km: %.2f\n", consumoLitrosGas100);
	printf("Consumo de gasolina en pesos por cada 100km: %.2f\n", consumaPesosGas100);
	
	printf("Consumo de gasolina en litros por km: %.2f\n", litros);
	printf("Consumo de gasolina en pesos por km: %.2f\n", dinerokm);
	
	printf("Velocidad Media (km/h): %.2f\n", velociadMediakm);
	printf("Velocidad Media (m/s): %.2f\n", velocidadMediams);
	
	return 0;
}
