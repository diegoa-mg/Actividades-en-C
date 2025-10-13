#include <stdio.h>
#include <math.h>
#define PI 3.1416 // Definir PI con un valor

int main(){

    float x, z, y, res1, res2, res3, x2, y2;

    printf("Ingresa 3 numeros separados por un espacio: ");
    scanf("%f %f %f", &x, &y, &z);

    // Convertir a radianes
    x2 = x * (PI / 180);
    y2 = y * (PI / 180);

    res1 = (x + 5) / (y - 2);
    res2 = (sin(x2) + cos(y2)) / (sqrt(2 - y));
    res3 = pow((x - 3), 2) + (2*(z - 5)) + (3 * pow(y, 3) - 7);

    printf("El resultado de (x + 5) / y -2 es: %.4f\n", res1);
    printf("El resultado de sen(x) + cos(y) / √2 - y es: %.4f\n", res2);
    printf("El resultado de (x - 3)^2 + 2(z - 5) + 3y^3 - 7 es: %.4f\n", res3);

    return 0;

}