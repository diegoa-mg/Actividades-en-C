#include <stdio.h>
#include <math.h>

int main(){
	float x, y, z, res1, res2, res3;
	double x2, y2;

	printf("Ingresa 3 numeros:\n");
	scanf("%f %f %f", &x, &y, &z);

	x2 = x;
	y2 = y;

	res1 = (x + 5) / (y -2);
	res2 = (sin(x2) + cos(y2)) / (sqrt(2 - y));
	res3 = pow(x - 3, 2) + (2 * (z - 5)) + (3 * pow(y, 3) - 7);

	printf("El resultado de (x + 5) / (y - 2) es: %.4f\n", res1);
	printf("El resultado de sin(x) + cos (y) / sqrt(2 - y) es: %.4f\n", res2);
	printf("El resultado de (x - 3)^2 + 2(z - 5) + 3y^2 -7 es: %.4f\n", res3);

	return 0;
}
