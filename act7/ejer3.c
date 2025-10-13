#include <stdio.h>

int main(){

    int dinero, dados, dado1, dado2;

    printf("Ingresa dinero para iniciar a jugar dados:\n");
    scanf("%d", &dinero);
    
    for(int i = 1; i <= 3; i++){
        printf("Ingresa el valor de los dos dados (dado1 y dado2):\n");
        scanf("%d %d", &dado1, &dado2);

        dados = dado1 + dado2;

        if(dados <= 7){
            dinero = dinero - 5;
            printf("Usted pierde $5.\n");
        } else if(dados >= 8){
            dinero = dinero + 5;
            printf("Usted gana $5.\n");
        }
    }

    printf("\nDinero: %d\n", dinero);

    return 0;
}