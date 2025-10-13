#include <stdio.h>

int main(){
    
    int veloci;
    float horas, distancia;

    printf("Ingresa la velocidad en la que ibas: ");
    scanf("%d", &veloci);
    printf("Ingresa cuantas horas tardaste en llegar: ");
    scanf("%f", &horas);

    distancia = veloci * horas;
    printf("Recorriste %f km.", distancia);

    return 0;
}