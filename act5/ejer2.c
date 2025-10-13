#include <stdio.h>

int main(){
    int area, base, altura;
    printf("Ingresa la base y la altura (separados por un espacio): ");
    scanf("%d %d", &base, &altura);

    area = (base * altura) / 2;
    printf("Area: %d", area);

    return 0;
}