#include <stdio.h>

int main(){
	float promedio, mate, progra, redes;

	printf("Ingresa tu calificacion en matematicas: ");
	scanf("%f", &mate);
	printf("Ingresa tu calificacion en programacion: ");
	scanf("%f", &progra);
	printf("Ingresa tu calificacion en redes de datos: ");
	scanf("%f", &redes);

	promedio = (mate + progra + redes) / 3;

	printf("Tu promedio es: %f\n", promedio);

	return 0;
}
