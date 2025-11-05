#include <stdio.h>


int main(){

    int matriz[5][7] = {};

    // Ingresar datos en un array
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 7; j++){
            printf("Ingresa el valor de fila %d y columna %d: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Imprimir datos de un array
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 7; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}