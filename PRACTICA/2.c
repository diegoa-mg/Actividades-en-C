/* 
Menú con opciones

Muestra un menú:
1. Sumar
2. Restar
3. Salir

Usa un while para que el programa se repita hasta que el usuario elija salir.
Según la opción, pide dos números y muestra el resultado. */

#include <stdio.h>

int main(){
    int opc, num1, num2, res;

    do{
    printf("\n=== Calculadora Basica === \n");
    printf("Opciones:\n");
    printf("1. Sumar\n");
    printf("2. Restar\n");
    printf("3. Salir\n");
    printf("Elije la opcion: ");
    scanf("%d", &opc);

    
        if(opc == 1){
            printf("Ingrese dos numeros:\n");
            scanf("%d %d", &num1, &num2);

            res = num1 + num2;
            printf("Resultado de la suma: %d\n", res);
        }
        else if(opc == 2){
            printf("Ingrese dos numeros:\n");
            scanf("%d %d", &num1, &num2);

            res = num1 - num2;
            printf("Resultado de la resta: %d\n", res);
        }
    }while(opc != 3);

    return 0;
}