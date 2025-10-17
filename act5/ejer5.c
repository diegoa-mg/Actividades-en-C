#include <stdio.h>

int main(){
	
	int veloci;
	float horas, distancia;

	printf("Ingresa la velocidad en km/h en la que ibas: ");
	scanf("%d", &veloci);
	printf("Ingresa las horas que tardaste en llegar: ");
	scanf("%f", &horas);

	distancia = horas * veloci;
	printf("Recorriste %f km.", distancia);

	return 0;
}
