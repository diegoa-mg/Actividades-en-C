#include <stdio.h>

int main(){
    int num1, num2;

    printf("Ingresa un numero (M): ");
    scanf("%d", &num1);
    printf("Ingresa otro numero (N): ");
    scanf("%d", &num2);

    while(num2 <= num1){ // Valida quue M sea menor a N
        printf("\nError. M tiene que ser menor a N.\n");
        printf("Ingresa un numero (M): ");
        scanf("%d", &num1);
        printf("Ingresa otro numero (N): ");
        scanf("%d", &num2);
    }

    for(int i = num1; i <= num2; i++){
            printf("%d\n", i);
    }

    return 0;
}