#include <stdio.h>

int main(){
	
	unsigned long long tb, bits;

	printf("Ingresa un valor en TB (Terabytes): ");
	scanf("%llu", &tb);

	bits = tb * 1024ULL * 1024ULL * 1024ULL * 1024ULL * 8ULL;

	printf("Conversion a Bits: %llu", bits);

	return 0;
}
