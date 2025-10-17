#include <stdio.h>

int main(){
	int edad, meses, mesestotal;

	printf("Ingresa tu edad en anios y meses: ");
	scanf("%d %d", &edad, &meses);

	mesestotal = (edad * 12) + meses;

	printf("Tienes %d meses\n", mesestotal);

	return 0;
}
