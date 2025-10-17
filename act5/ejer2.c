#include <stdio.h>

int main(){
	int area, base, altura;

	printf("Ingresa la altura y la base: ");
	scanf("%d %d", &altura, &base);

	area = (base * altura) / 2;

	printf("El area es: %d\n", area);

	return 0;
}
