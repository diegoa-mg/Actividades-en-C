#include <stdio.h>
#include <string.h>

int main(){
	char genero[15];
	int peso_kg;
	float calorias, lb;

	printf("~~Calculadora de calorias~~\n");
	printf("Ingresa tu genero (Femenino o Masculino):\n");
	scanf("%s", genero);
	printf("Ingresa tu peso en KG:\n");
	scanf("%d", &peso_kg);

	lb = peso_kg * 2.2;

	if(strcmp(genero, "Femenino") == 0){
		calorias = lb * 16;
		printf("Calorias necesarias al dia: %.2f\n", calorias);
	}
	else if(strcmp(genero, "Masculino") == 0){
		calorias = lb * 18;
		printf("Calorias necesarias al dia: %.2f\n", calorias);
	}	

	return 0;
}
