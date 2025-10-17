#include <stdio.h>
#include <math.h>

int main(){
	double area, peri, sp;
	int lado1, lado2, lado3;

	printf("Ingresa los 3 lados de un triangulo: ");
	scanf("%d %d %d", &lado1, &lado2, &lado3);

	peri = lado1 + lado2 + lado3;
	sp = peri / 2;
	area = sqrt(sp*(sp-lado1)*(sp-lado2)*(sp-lado3));

	printf("Perimetro: %lf\n", peri);
	printf("Area: %lf\n", area);

	return 0;
}
