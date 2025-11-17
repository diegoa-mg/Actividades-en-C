#include <stdio.h>

int main(){
    int opc;
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

        switch (opc){
            case 1:{
                printf("Ejercicio 1: \n");
                
                break;
            }
            case 2: {
                printf("Ejercicio 2: \n");
                
                break;
            }
            case 3:{
                printf("Ejercicio 3: \n");
                
                break;
            }
            case 4:{
                printf("Ejercicio 4: \n");
                
                break;
            }
            case 5:{
                printf("Ejercicio 5: \n");
                
                break;
            }
            case 6:
                printf("Saliendo del programa...\n");
                break;
            
            default:
                printf("Opcion no valida. Intente de nuevo.\n");
                break;
        }
    } while (opc != 6);
    
    return 0;
}