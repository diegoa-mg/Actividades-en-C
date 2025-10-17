#include <stdio.h>
#include <math.h>

int main(){
	float x, y, z, res;
	
	printf("Ingresa tres numeros: ");
	scanf("%f %f %f", &x, &y, &z);

	res = pow((x - 3), 2) + 2 * (z - 5) + (3 * pow(y, 3)) - 7;

	printf("El resultado de (x - 3)^2 + 2(z - 5) + 3y^3 - 7 es: %f\n", res);

	return 0;
}
