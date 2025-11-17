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
                printf("Ejercicio 1: Multiplicar por 4 los numeros de un array y almacenarlos en otro\n");
                int X[3][3] = { {7, 3, 9}, {4, 0, 5}, {1, 8, 2} }, Y[3][3];

                // Multiplicar por 4 y almacenar en matriz Y
                for(int i = 0; i < 3; i++){
                    for(int j = 0; j < 3; j++){
                        Y[i][j] = X[i][j] * 4;
                    }
                }

                // Mostrar matriz original
                printf("Matriz Original\n");
                for(int i = 0; i < 3; i++){
                    for(int j = 0; j < 3; j++){
                        printf("%d ", X[i][j]);
                    }
                    printf("\n");
                }

                // Mostrar matriz resultante
                printf("Matriz Resultante\n");
                for(int i = 0; i < 3; i++){
                    for(int j = 0; j < 3; j++){
                        printf("%d ", Y[i][j]);
                    }
                    printf("\n");
                }

                break;
            }
            case 2: {
                printf("Ejercicio 2: Elevar al cubo y guardar en la segunda fila\n");
                int cuadrado[2][7] = { {5, 8, 3, 1, 9, 2, 3}, {0, 0, 0, 0, 0, 0, 0} };
                
                // Elevar numeros al cubo
                for(int i = 0; i < 7; i++){
                    cuadrado[1][i] = cuadrado[0][i] * cuadrado[0][i] * cuadrado[0][i];
                }

                // Mostrar matriz
                printf("Matriz Resultante\n");
                for(int i = 0; i < 2; i++){
                    for(int j = 0; j < 7; j++){
                        printf("%d\t", cuadrado[i][j]);
                    }
                    printf("\n");
                }

                break;
            }
            case 3:{
                printf("Ejercicio 3: Sumar los elementos de cada fila de una matriz\n");
                int matriz[2][8] = { {7, 4, 1, 3, 8, 7, 4 , 0}, {9, 6, 3, 7, 2, 9, 3, 0} };
                
                // Sumar y almacenar en la octava columna
                // Suma desde el indice 0 hasta el 6 y deja el resultado en el 7
                for(int i = 0; i < 2; i++){ // Filas
                    for(int j = 0; j < 7; j++){ // Columnas
                        matriz[i][7] += matriz[i][j];
                    }
                }

                // Mostrar matriz
                for(int i = 0; i < 2; i++){
                    for(int j = 0; j < 8; j++){
                        printf("%d\t", matriz[i][j]);
                    }
                    printf("\n");
                }

                break;
            }
            case 4:{
                printf("Ejercicio 4: Sumar los elementos de cada columna de una matriz\n");
                int matriz[4][4] = { {4, 7, 5, 3}, {6, 5, 1, 2}, {7, 4, 8, 9}, {0, 0, 0, 0} };

                // column-major traversal
                for(int i = 0; i < 4; i++){ // Recorre todas las columnas
                    for(int j = 0; j < 3; j++){ // Recorre de la fila 0 a la 2 y deja el resultado en la 3 (indices)
                        matriz[3][i] += matriz[j][i];
                    }
                }

                // Mostrar matriz
                for(int i = 0; i < 4; i++){
                    for(int j = 0; j < 4; j++){
                        printf("%d\t", matriz[i][j]);
                    }
                    printf("\n");
                }

                break;
            }
            case 5:{
                printf("Ejercicio 5: Sumar las filas poniendo el resultado en la derecha, y sumar las columnas poniendo el resultado abajo\n");
                int matriz[5][3] = { {2, 3, 0}, {3, 4, 0}, {8, 6, 0}, {1, 3, 0}, {0, 0, 0} };

                // Combinacion de los 2 ejercicios anteriores
                // Sumar las columnas
                for(int i = 0; i < 2; i++){ // Columnas
                    for(int j = 0; j < 4; j++){ // Filas
                        matriz[4][i] += matriz[j][i];
                    }
                }

                // Sumar filas
                for(int i = 0; i < 5; i++){ // Filas
                    for(int j = 0; j < 2; j++){ // Columnas
                        matriz[i][2] += matriz[i][j];
                    }
                }
                
                // Mostrar matriz
                for(int i = 0; i < 5; i++){
                    for(int j = 0; j < 3; j++){
                        printf("%d\t", matriz[i][j]);
                    }
                    printf("\n");
                }

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