// Convertir millas a kilometros
#include <stdio.h>
int main(){
    
    int millas, metros, km;
    printf("Ingresa una medida en millas: ");
    scanf("%d", &millas);

    metros = 1609 * millas;
    km = metros / 1000;

    printf("Conversion a Km: %d\n", km);

    return 0;
}