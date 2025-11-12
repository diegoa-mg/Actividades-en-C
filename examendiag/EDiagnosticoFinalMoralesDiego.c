#include <stdio.h>

float areaCirculo(float radio){
	return 3.1416 * (radio * radio);
}

float promedio(){
	float num[5];
	float suma = 0;	

	for(int i = 0; i <= 4; i++){
		printf("Ingresa el numero %d: ", i + 1);
		scanf("%f", &num[i]);

		while(num[i] <= 0){
			printf("Valor invalido. Ingresa de nuevo: ");
			scanf("%f", &num[i]);	
		}
		
		suma += num[i];		
	}

	float prom = suma / 5;
	return prom;
}

int main(){
	int opc;

	do{
		printf("\n=== MENU INTERACTIVO ===\n");
		printf("1. Calcular el area de un circulo\n");
		printf("2. Calcular el promedio de 5 numeros\n");
		printf("3. Llenar y mostar una matriz 5x3\n");
		printf("4. Salir\n");

		printf("Selecciona una opcion: ");
		scanf("%d", &opc);

		switch(opc){
			case 1:{
			       float radio;
			       printf("Ingresa el radio del circulo: ");
			       scanf("%f", &radio);

			       while(radio <= 0){
			       		printf("Valor invalido. Ingresa de nuevo: ");
			       		scanf("%f", &radio);
			       }
			       	
			       float res = areaCirculo(radio);
			       printf("El area del circulo es: %.2f\n", res);

			       break;      
			}
			
			case 2:{
			       float res = promedio();
			       printf("El promedio es: %.2f\n", res);
		               
			       break;
			}
			case 3:{
			       int matriz[5][3];

			       printf("Ingresando los valores de la matriz (5x3):\n");
			       for(int i = 0; i <= 4; i++){
					for(int j = 0; j <= 2; j++){
						printf("Elemento [%d][%d]: ", i + 1, j + 1);
						scanf("%d", &matriz[i][j]);
					}
			       }

			       printf("La matriz ingresada es:\n");
			       for(int i = 0; i <= 4; i++){
					for(int j = 0; j <= 2; j++){
						printf("%d ", matriz[i][j]);
					}
					printf("\n");
			       }
			       break;
			}
			case 4:
			       printf("Saliendo del programa...\n");
			       break;

			default:
			       printf("Opcion invalida. Intenta de nuevo.");
			       break;
		}
		
	}while(opc != 4);
	
	return 0;
}
