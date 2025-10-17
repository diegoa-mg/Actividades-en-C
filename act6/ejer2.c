#include <stdio.h>
#include <math.h>

int main(){
	int suma, resta, multi, pote, num1, num2;
	float divi;

	printf("Ingresa dos numeros:\n");
	scanf("%d %d", &num1, &num2);

	suma = num1 + num2;
	resta = num1 - num2;
	multi = num1 * num2;
	divi = num1 / num2;
	pote = pow(num1, num2);

	printf("Operaciones basicas y potencia\n");
	printf("Suma: %d\n", suma);
	printf("Resta: %d\n", resta);
	printf("Multiplicacion: %d\n", multi);
	printf("Division: %f\n", divi);
	printf("Potencia: %d\n", pote);

	return 0;
}
