#include <stdio.h>

int main(){
    float kt, ms; // Nudos y milisegundos

    printf("Ingresa la velocidad en nudos: ");
    scanf("%f", &kt);

    // 1 kt = 0.514444
    ms = kt * 0.514444;
    printf("Conversion a milisegundos: %f", ms);

    return 0;
}