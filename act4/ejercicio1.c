// Obtener la edad en meses
#include <stdio.h>

int main(){

    int edad, meses, mesestotal;
    printf("Ingresa tu edad (Años y Meses, ejemplo: 18 1): ");
    scanf("%d %d", &edad, &meses);
    
    mesestotal = (edad * 12) + meses;
    printf("Tienes %d meses\n", mesestotal);

    return 0;
}
