#include <stdio.h>

long double converapesos(long double cantidad, int monedaorigen){
    switch (monedaorigen){
        case 1: // Bitcoin
            return cantidad * 2044480L; // L para forzar a los numeros a ser long double
        
        case 2: // Dolares
            return cantidad * 18.56L;
        
        case 3: // Libras
            return cantidad * 24.23L;
        
        case 4: // Yenes
            return cantidad * 0.12L;

        case 5: // Euros
            return cantidad * 21.38L;
    }
}

int main(){
    printf("Ejercicio 2: Conversion de Bitcoin, dolares, libras, yenes, o euros a pesos\n"); // Hacer este ejercicio con mas funciones despues
    long double cantidad;
    int monedaorigen;

    printf("Ingresa la cantidad a convertir: ");
    scanf("%Lf", &cantidad);
                
    while (cantidad < 0){
        printf("Error: Cantidad invalida. Ingresa de nuevo: ");
        scanf("%Lf", &cantidad);
    }

    printf("\nIngresa la moneda de origen\n");
    printf("1. Bitcoin\n");
    printf("2. Dolares\n");
    printf("3. Libras\n");
    printf("4. Yenes\n");
    printf("5. Euro\n");
    printf("Selecciona una opcion:\n");
    scanf("%d", &monedaorigen);

    while (monedaorigen < 0 || monedaorigen > 5){
        printf("Error: Opcion invalida. Ingresa de nuevo:\n");
        scanf("%d", &monedaorigen);
    }

    long double res = converapesos(cantidad, monedaorigen);
    printf("Conversion: %Lf\n", res);
    
    return 0;
}