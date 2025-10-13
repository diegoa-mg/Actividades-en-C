#include <stdio.h>
// Diego Morales 1E

int main(){

    int dineroalmes;

    printf("Ingresa tus ganancias al mes:\n");
    scanf("%d", &dineroalmes);

    if(dineroalmes >= 20000){
        printf("Estatus alto.");
    }
    else if(dineroalmes >= 10000){
        printf("Estatus medio.");
    }
    else if(dineroalmes < 10000){
        printf("Estatus bajo.");
    }

    return 0;
}