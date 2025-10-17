#include <stdio.h>

int main(){
	
	float fahren, celsius;
	printf("Ingresa la temperatura en grados Fahrenheit: ");
	scanf("%f", &fahren);

	celsius = (fahren - 32) * 5/9;

	printf("Conversion a grados Celsius: %f\n", celsius);

	return 0;
}
