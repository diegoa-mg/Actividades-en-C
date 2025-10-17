#include <stdio.h>

int main(){
	float kt, ms;

	printf("Ingresa la velocidad en nudos: ");
	scanf("%f", &kt);

	ms = kt * 0.514444;

	printf("Convesion a ms: %f", ms);
	
	return 0;	
}
