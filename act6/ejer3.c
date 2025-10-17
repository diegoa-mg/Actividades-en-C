#include <stdio.h>
#include <math.h>

int main(){
	int num;
	double rad, seno, coseno, tangen;

	printf("Ingresa un numero: ");
	scanf("%d", &num);

	rad = num;

	seno = sin(rad);
	coseno = cos(rad);
	tangen = tan(rad);

	printf("Seno: %lf\n", seno);
	printf("Coseno: %lf\n", coseno);
	printf("Tangente: %lf\n", tangen);

	return 0;
}
