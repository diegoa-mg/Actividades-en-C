#include <stdio.h>

int main(){
    int num = 1, cuad, impar, N;

    printf("Ingresa el final del bucle: ");
    scanf("%d", &N);

    printf("Numero\tResultado del cuadrado obtenido asi:\n");

    while(num <= N){
        printf("%d\t", num);
        cuad = 0; // reiniciar la suma

        for(int i = 1; i <= num; i++){
            impar = 2 * i - 1; // formula para obtener el numero impar
            cuad += impar; // suma de los impares

            if (i == 1)
                printf("%d", impar);
            else
                printf(" + %d", impar);
        }

        printf(" = %d\n", cuad);
        num++;
    }
    return 0;
}