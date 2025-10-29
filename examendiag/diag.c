#include <stdio.h>

void menu(){		
	printf("\n === Calcular Promedio ===\n");
	printf("1. Ingresar Calificaciones\n");
	printf("2. Salir\n");
	printf("Selecciona una opcion:\n");
}


int calcular_promedio(float suma){
	return suma / 7;
}

int main(){
	int opc;

	do{
		menu();
		scanf("%d", &opc);
		
		switch(opc){
			case 1:{
				float promedio, calif, suma = 0;
				int planas;

				for(int i = 1; i <= 7; i++){
					printf("Ingresa la calificacion del examen %d: ", i);
					scanf("%f", &calif);
		
					while(calif < 0 || calif > 10){
						printf("Error: Calificacion invalida. Ingrese de nuevo: ");
						scanf("%f", &calif);
					}
					suma += calif;
				}		

				promedio = calcular_promedio(suma);
			
				if(promedio == 10){						
					printf("\nTu promedio es: %.2f\n", promedio);
					printf("Felicidades!\n");
				}
				else if(promedio >= 8){
					printf("\nTu promedio es: %.2f\n", promedio);
					printf("Muy bien\n");
				}
				else if(promedio >= 6){
					printf("\nTu promedio es: %.2f\n", promedio);
					printf("Sigue mejorando\n");
				}
				else{	
					printf("\nTu promedio es: %.2f\n", promedio);
					printf("Promedio menor a 6.\n");
					printf("Cuantas planas quieres hacer? ");
					scanf("%d", &planas);

					for(int i = 1; i <= planas; i++){
						printf("%d. Tengo que estudiar mas\n", i);
					}
				}
				break;	
			}
			case 2:
			       printf("Saliendo del programa\n");
			       break;
			
			default:
			       printf("Opcion no valida. Intente de nuevo.\n");
			       break;
		}
	}while(opc != 2);
	
	return 0;
}
