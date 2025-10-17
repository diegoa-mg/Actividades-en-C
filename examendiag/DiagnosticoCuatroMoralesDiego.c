#include <stdio.h>
#include <math.h>

int main(){
	float area, base, altura, radio;
	int opcion;

	printf("=== Calculadora de areas ===\n");
	printf("1. Area de un circulo.\n");
	printf("2. Area de un triangulo.\n");
	printf("3. Area de un rectangulo.\n");
	printf("Elige una opcion: ");
	scanf("%d", &opcion);

	if(opcion == 1){
		printf("\nIngresa el radio del circulo: ");
		scanf("%f", &radio);

		if(radio <= 0){
			printf("Error: el radio debe ser mayor a 0.\n");
		}
		else{
			area = 3.1416 * pow(radio, 2);
			printf("El area del circulo es: %.2f.\n", area);
		}
	}

	else if(opcion == 2){
		printf("\nIngresa la base del triangulo: ");
		scanf("%f", &base);
		printf("Ingresa la altura del triangulo: ");
		scanf("%f", &altura);

		if(base <= 0 || altura <= 0){
			printf("Error: la base y la altura deben ser mayores a 0.\n");
		}
		else{
			area = (base * altura) / 2;
			printf("El area del triangulo es: %.2f\n", area);
		}
	}

	else{
		printf("\nIngresa el ancho del rectangulo: ");
		scanf("%f", &base);
		printf("Ingresa la altura del rectangulo: ");
		scanf("%f", &altura);

		if(base <= 0 || altura <= 0){
			printf("Error: el ancho y la altura deben ser mayores a 0.\n");
		}
		else{
			area = base * altura;
			printf("El area del rectangulo es: %.2f\n", area);
		}
	}

	return 0;
}
