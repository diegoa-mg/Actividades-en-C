#include <stdio.h>

int main(){
    int opc;
    //ejercicio 1
    int num1, num2, sim1, sim2, divisor = 2, MCD;

    do{
        printf("\nMenu de ejercicios\n");
        printf("1. Ejercicio 1\n");
        printf("2. Ejercicio 2\n");
        printf("3. Ejercicio 3\n");
        printf("4. Ejercicio 4\n");
        printf("5. Ejercicio 5\n");
        printf("6. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opc);
        printf("\n");

        switch(opc){
            case 1:
                printf("Ingresa una fraccion (Ej: 15/18):\n");
                scanf("%d/%d", &num1, &num2);

                // Validar que el denominador no sea cero
                while(num2 == 0){
                    printf("El denominador no puede ser cero. Ingresa una fraccion valida:\n");
                    scanf("%d/%d", &num1, &num2);
                }

                // En caso de que la fraccion sea negativa, pasarla a positiva
                if(num1 < 0 || num2 < 0){
                    printf("Convirtiendo fraccion a positiva para simplificar...\n");
                    num1 = num1 * -1;
                    num2 = num2 * -1;
                }
                
                // Sacar maximo comun divisor
                MCD = num2 / num1;

                sim1 = num1 / MCD;
                sim2 = num2 / MCD;

                printf("Fraccion simplificada: %d/%d\n", sim1, sim2);
                break;

            case 2:
                // Ejercicio 2 code here
                break;
            case 3:
                // Ejercicio 3 code here
                break;

            case 4:
                // Ejercicio 4 code here
                break;

            case 5:
                // Ejercicio 5 code here
                break;

            case 6:
                printf("Saliendo del programa...\n");
                break;

            default:
                printf("Opcion no valida. Intente de nuevo.\n");
        }
    }while(opc != 6);

    return 0;
}