#include <stdio.h>

int main(){
	float num;

	printf("Ingresa un numero decimal:\n");
	scanf("%f", &num);

	if(num <= 0){
		printf("Error: solo se permiten numeros mayores a 0\n");
		return 0;
	}

	if(num < 10){
		printf("El numero es pequeno.\n");
	}
	else if(num <= 50){
		printf("El numero es mediano.\n");
	}
	else{
		printf("El numero es grande.\n");
	}

	return 0;
}
