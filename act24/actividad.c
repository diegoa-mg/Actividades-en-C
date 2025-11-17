#include <stdio.h>
#include <string.h>

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
                printf("Ejercicio 1: Almacenar los numeros primos entre 1 y 100\n");
                int primos[50], contador = 0;

                // Identificar los numeros primos
                for(int i = 2; i < 100; i++){
                    int primo = 1;
                    for(int j = 2; j <= i / 2; j++){
                        if(i % j == 0){
                            primo = 0;
                            break;
                        }
                    }

                    if(primo){
                        primos[contador] = i;
                        contador++;
                    }
                }

                // Imprimir los numeros primos
                for(int i = 0; i < contador; i++){
                    printf("%d ", primos[i]);
                }
                printf("\n");

                break;
            }
            case 2: {
                printf("Ejercicio 2: Leer los valores de dos matrices, guardarlo en una tercera matriz la suma de ambas\n");
                int A[5][5], B[5][5], C[5][5];
                int i, j;

                // Array A
                printf("Array A\n");
                for(i = 0; i < 5; i++){
                    for(j = 0; j < 5; j++){
                        printf("Ingresa el numero [%d] [%d]: ", i, j);
                        scanf("%d", &A[i][j]);
                    }
                }

                // Array B
                printf("Array B\n");
                for(i = 0; i < 5; i++){
                    for(j = 0; j < 5; j++){
                        printf("Ingresa el numero [%d] [%d]: ", i, j);
                        scanf("%d", &B[i][j]);
                    }
                }

                // Almacenar todo a array C
                for(i = 0; i < 5; i++){
                    for(j = 0; j < 5; j++){
                        C[i][j] = A[i][j] + B[i][j];
                    }
                }

                // Mostrar los numeros
                for(i = 0; i < 5; i++){
                    for(j = 0; j < 5; j++){
                        printf("%d ", C[i][j]);
                    }
                    printf("\n");
                }
                
                break;
            }
            case 3:{
                printf("Ejercicio 3: Saber si es palindromo o no\n");
                char palabra[50], alrevez[50];
                int i, contador = 0;

                printf("Ingresa un palindromo: ");
                scanf("%[^\n]", palabra);

                for(i = 50; i >= 0; i--){
                    alrevez[i] = palabra[contador];
                    contador++;
                }

                if(strcmp(palabra, alrevez) == 0){
                    printf("Es Palindromo\n");
                }
                else{
                    printf("No es Palindromo\n");
                }

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