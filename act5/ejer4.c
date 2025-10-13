#include <stdio.h>
#include <math.h>

int main(){

    float interes, monto, capdep, cp, tasa;

    printf("Ingresa un capital: \n");
    scanf("%f", &capdep);
    printf("Ingresa la cantidad de periodos: \n");
    scanf("%f", &cp);
    printf("Ingresa la tasa de interes: \n");
    scanf("%f", &tasa);

    monto = capdep * pow((1 + tasa/100), cp);
    interes = monto - capdep;

    printf("Tu ganancia fue de: %.2f", interes);
    
}