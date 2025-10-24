#include <stdio.h>

float Suma(float num1, float num2){
	float suma;
	printf("Ingresa el primer número: ");
	scanf("%f", &num1);
	printf("Ingresa el segundo número: ");
	scanf("%f", &num2);

	suma = num1 + num2;

	if(num1 <= 0 || num2 <= 0){
		printf("Error. Números inválidos");
	}
	else{
		printf("La suma es: %.2f\n", suma);
	}	
}

int main(){
	int opc;
	
	do{
		printf("\n=== MENU INTERACTIVO ===\n");
		printf("1. Suma (solo números positivos)\n");
		printf("2. Conteo de número N a número M\n");
		printf("3. Evaluacion de calificación\n");
		printf("4. Salir\n");
		printf("Selecciona una opción: ");
		scanf("%d", &opc);
		printf("\n");

		switch(opc){
			case 1:
				float num1, num2;
				Suma(num1, num2);

				break;
			case 2:
				int N, M;
				printf("Ingresa el número inicial (N): ");
				scanf("%d", &N);
				printf("Ingresa el número final (M): ");
				scanf("%d", &M);
				
				if(N <= 0 || M <= 0 || M <= N){
					printf("Error. Números inválidos\n");
				}
				else{
					for(N; N <= M; N++){
						if(N == M){
							printf("%d\n", N);
						}
						else{
							printf("%d ", N);
						}
					}
				}

				break;
			case 3:
				float calif;
				printf("¿Cuánto sacaste en Fundamentos de Programación? ");
				scanf("%f", &calif);

				if(calif == 10){
					printf("Excelente.\n");
				}
				else if(calif >= 9){
					printf("Muy bien.\n");
				
				}
				else if(calif >= 6){
					printf("Buen esfuerzo.\n");				
				}
				else{
					printf("Sigue practicando y estudiando.\n");
				}
				break;
			case 4:
				printf("Saliendo del programa...\n");

				break;
			default:
				printf("Error. Opción inválida.\n");
				
				break;
		}
	}while(opc != 4);

	
	return 0;
}
