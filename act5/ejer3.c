#include <stdio.h>
#include <math.h> // biblioteca de mate

int main(){
    float area, peri, sp; 
    int lado1, lado2, lado3;

    printf("Ingresa los lados de un triangulo: ");
    scanf("%d %d %d", &lado1, &lado2, &lado3);

    peri = lado1 + lado2 + lado3;
    sp = peri / 2;
    area = sqrt(sp*(sp-lado1)*(sp-lado2)*(sp-lado3)); // sqrt es raiz cuadrada

    printf("Perímetro: %f\n", peri);
    printf("Área: %f", area);

    return 0;
}