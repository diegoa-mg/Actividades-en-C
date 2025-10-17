#include <stdio.h>
#include <string.h>

int main(){
	char nombre[100];
	int horas, tarifa, salario;

	printf("Ingresa tu nombre: ");
	fgets(nombre, sizeof(nombre), stdin);

	nombre[strcspn(nombre, "\n")] = '\0';

	printf("Cuantas horas trabajaste esta semana?\n");
	scanf("%d", &horas);
	printf("Cual es tu tarifa por hora?\n");
	scanf("%d", &tarifa);

	salario = horas * tarifa;

	printf("Trabajador: %s\n", nombre);
	printf("Salario semanal: %d\n", salario);

	return 0;
}
