#include <stdio.h>

int main(){

    int A, B, C;

    printf("Ingresa tres numeros:\n");
    scanf("%d %d %d", &A, &B, &C);

    if(A > B){
        if(A > C){
            printf("El numero mayor es: %d\n", A);
        }
        else{
            printf("El numero mayor es: %d\n", C);
        }
    }
    else if(B > C){
        printf("El numero mayor es: %d\n", B);
    }
    else{
        printf("El numero mayor es: %d\n", C);
    }

    return 0;
}