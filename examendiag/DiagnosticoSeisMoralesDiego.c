#include <stdio.h>

int main(){
	double num1, num2, res;
	int opc;
	
	do{
		printf("\n--- Menu ---\n");
		printf("1. Sumar dos numeros\n");
		printf("2. Restar dos numeros\n");
		printf("3. Salir\n");
		printf("Selecciona una opcion:\n");
		scanf("%d", &opc);

		switch(opc){
			case 1:
				printf("\nIngresa un numero: ");
				scanf("%lf", &num1);	
				printf("Ingresa otro numero: ");
				scanf("%lf", &num2);	
				res = num1 + num2;

				printf("Resultado: %.2lf\n", res);
				break;
			case 2:
				printf("\nIngresa un numero: ");
				scanf("%lf", &num1);	
				printf("Ingresa otro numero: ");
				scanf("%lf", &num2);
				res = num1 - num2;

				printf("Resultado: %.2lf\n", res);
				break;
			case 3:
				printf("\nSaliendo del programa\n");
				break;

			default:
				printf("\nOpcion no valida. Intenta nuevamente.\n");
				break;
		}	
	}while(opc != 3);
	return 0;
}
