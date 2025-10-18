#include <stdio.h>

int main(){
    int unidades = 1, costo, total;
    printf("Ingrese el costo por unidad:\n");
    scanf("%d", &costo);

    while(unidades <= 1000){
        total = costo * unidades;
        printf("Unidades: %d. Costo: %d\n", unidades, total);
        unidades++;
    }
    return 0;
}