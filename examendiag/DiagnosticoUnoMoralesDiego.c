#include <stdio.h>

int main(){
	int mat1, mat2, mat3, mat4, mat5;
	float promedio;

	printf("Ingresa tu calificacion en Matematicas: ");
	scanf("%d", &mat1);
	printf("Ingresa tu calificacion en Espanol: ");
	scanf("%d", &mat2);
	printf("Ingresa tu calificacion en Redes de Datos: ");
	scanf("%d", &mat3);
	printf("Ingresa tu calificacion en Programacion: ");
	scanf("%d", &mat4);
	printf("Ingresa tu calificacion en Sistemas Operativos: ");
	scanf("%d", &mat5);

	promedio = (mat1 + mat2 + mat3 + mat4 + mat5) / 5;

	printf("Tu promedio es: %.2f\n", promedio);

	return 0;
}
