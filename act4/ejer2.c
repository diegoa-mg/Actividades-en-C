#include <stdio.h>
#include <string.h>

int main(){
	char nombre[150], prefijo[250] = "Alumno ";

	printf("Ingresa tu nombre: ");
	fgets(nombre, sizeof(nombre), stdin);

	nombre[strcspn(nombre, "\n")] = '\n';

	strcat(prefijo, nombre);

	printf("%s\n", prefijo);

	return 0;
}

