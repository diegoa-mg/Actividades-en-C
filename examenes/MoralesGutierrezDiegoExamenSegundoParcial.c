#include <stdio.h>

void areaEsfera(float radio){	
	float area = 4 * 3.1416 * (radio * radio);
	printf("Area: %.2f\n", area);
}

void tablaMultiplicar(int inicio, int fin, int num){
	int res;
	for(int i = inicio; i <= fin; i++){
		res = num * i;
		printf("%d * %d = %d\n", num, i, res);
	}
}

int main(){
	int opc;
	do{
		printf("\n=== Menu Interactivo ===\n");
		printf("1. Calcular el area de una esfera\n");
		printf("2. Tabla de mutiplicar personalizada\n");
		printf("3. Matriz 3x5\n");
		printf("4. Salir\n");
		printf("Selecciona una opcion: ");
		scanf("%d", &opc);
		printf("\n");

		switch(opc){
			case 1:{
				float radio;
				printf("Ingresa el valor del radio: ");
				scanf("%f", &radio);
				
				while(radio <= 0){
					printf("Error: el radio no puede ser negativo. Ingresa de nuevo.\n");
					scanf("%f", &radio);
				}
				
				areaEsfera(radio);

 				break;				
			}
			case 2:{
				int inicio, fin, num;
				
				printf("Ingresa el inicio de la tabla: ");
				scanf("%d", &inicio);
				printf("Ingresa el fin de la tabla: ");
				scanf("%d", &fin);
				printf("Ingresa el numero a multiplicar: ");
				scanf("%d", &num);
				
				while(inicio > fin){
					printf("Error: El inicio tiene que ser menor o igual a el fin: ");
					scanf("%d", &inicio);
				}
				
				while(inicio <= 0 || fin <= 0 || num <= 0){
					printf("Error: Todos tienen que ser positivos\n");
					printf("Ingresa el inicio de la tabla: ");
					scanf("%d", &inicio);
					printf("Ingresa el fin de la tabla: ");
					scanf("%d", &fin);
					printf("Ingresa el numero a multiplicar: ");
					scanf("%d", &num);
				}
				
				tablaMultiplicar(inicio, fin, num);

				break;
			}
			case 3:{
			       	int matriz[3][5];
				
				printf("Ingresa los valores de la matriz 3 x 5:\n");
				for(int i = 0; i < 3; i++){
					for(int j = 0; j < 5; j++){
						printf("Elemento [%d] [%d]: ", i + 1, j + 1);
						scanf("%d", &matriz[i][j]);
					}
				}

				// Mostrar matriz
				for(int i = 0; i < 3; i++){
					for(int j = 0; j < 5; j++){
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
			       printf("Error: Opcion invalida. Intenta de nuevo.\n");
		}

	}while(opc != 4);

	return 0;
}
