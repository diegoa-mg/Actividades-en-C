#include <stdio.h>

const char* con_decabin(int num){ // Const para que no se puedan modificar
    const char* binarios[16] = {"0000","0001","0010","0011","0100","0101","0110","0111","1000","1001","1010","1011","1100","1101","1110","1111"};
    return binarios[num];
}

double converapesos(double cantidad, int monedaorigen){
    switch (monedaorigen){
        case 1: // Bitcoin
            return cantidad * 2044480;
        
        case 2: // Dolares
            return cantidad * 18.56;
        
        case 3: // Libras
            return cantidad * 24.23;
        
        case 4: // Yenes
            return cantidad * 0.12;

        case 5: // Euros
            return cantidad * 21.38;
    }
}

void factorial(int N){
    int multi = 1;
    for(int i = N; i >= 1; i--){
        multi = multi * i;
        if(i == 1){
            printf("%d ", i);
        }
        else{
            printf("%d x ", i);
        }
    }
    printf("= %d", multi);
}

int restaracuadrado(int num){
    return (num * num) - (2 * num);
}

float descuento(int cantidad, float precio){
    if(cantidad > 12){
        printf("Descuento del 10%% aplicado.\n");
        return (cantidad * precio) - ((cantidad * precio) * .10);
    }
    else if(cantidad > 6){
        printf("Descuento del 4%% aplicado.\n");
        return (cantidad * precio) - ((cantidad * precio) * .04);
    }
    else{
        return cantidad * precio;
    }
}

int main(){
    int opc;
    do
    {
        printf("\nMenu de ejercicios\n");
        printf("1. Ejercicio 1\n");
        printf("2. Ejercicio 2\n");
        printf("3. Ejercicio 3\n");
        printf("4. Ejercicio 4\n");
        printf("5. Ejercicio 5\n");
        printf("6. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opc);
        printf("\n");

        switch (opc){
            case 1:{
                printf("Ejercicio 1: Conversion Decimal a Binario (0-15)\n");
                int num;
                printf("Ingresa un numero decimal positivo:\n");
                scanf("%d", &num);

                while(num > 15 || num < 0){
                    printf("Error: Numero invalido. Ingresa de nuevo:\n");
                    scanf("%d", &num);
                }

                const char* bin = con_decabin(num);
                printf("Numero convertido a binario: %s\n", bin);

                break; 
            }
            case 2:{
                printf("Ejercicio 2: Conversion de Bitcoin, dolares, libras, yenes, o euros a pesos\n"); // Hacer este ejercicio con mas funciones despues
                double cantidad;
                int monedaorigen;

                printf("Ingresa la cantidad a convertir: ");
                scanf("%lf", &cantidad);
                
                while (cantidad < 0){
                    printf("Error: Cantidad invalida. Ingresa de nuevo: ");
                    scanf("%lf", &cantidad);
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

                double res = converapesos(cantidad, monedaorigen);
                printf("Conversion: %.2lf\n", res);

                break;
            }
            case 3:{
                printf("Ejercicio 3: Devolver el factorial de un numero\n");
                int N;
                printf("Ingresa un numero positivo: ");
                scanf("%d", &N);

                while(N <= 0){
                    printf("Error: Numero invalido. Ingresa de nuevo: ");
                    scanf("%d", &N);
                }

                factorial(N);

                break;
            }
            case 4:{
                printf("Ejercicio 4: Calcular el resultado de restar el doble de un numero a su cuadrado\n");
                int num;
                printf("Ingresa un numero: ");
                scanf("%d", &num);

                int res = restaracuadrado(num);
                printf("Resultado: %d\n", res);

                break;
            }
            case 5:{
                printf("Ejercicio 5: Aplicar descuentos dependiendo las unidades\n");
                int cantidad;
                float precio, total;
                printf("Ingresa la cantidad de productos a comprar: ");
                scanf("%d", &cantidad);
                printf("Ingresa el precio unitario del producto: ");
                scanf("%f", &precio);

                total = descuento(cantidad, precio);
                printf("Total: %.2f\n", total);

                break;
            }
            case 6:
                printf("Saliendo del programa...\n");
                break;
            
            default:
                printf("Opcion no valida. Intente de nuevo.\n");
                break;
        }
    } while (opc != 6);
    
    return 0;
}