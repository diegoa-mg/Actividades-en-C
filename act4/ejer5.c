#include <stdio.h>

int main(){
	int gradossexa;
	float rad, pi;

	printf("Ingresa un angulo en grados sexadecimales: ");
	scanf("%d", &gradossexa);
	
	pi = 3.1416;
	rad = gradossexa * pi / 180;

	printf("Conversion a radianes: %.2f", rad);

	return 0;
}
