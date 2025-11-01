#include <stdio.h>

// PROTOTIPOS DE FUNCIONES

void numeros_letra(int numero);
float promedio3(float num1, float num2, float num3);
void leer3valores(float *num1, float *num2, float *num3);
void imprimir_primos(int N);
int potencia(int x, int y);

int main(){
    int opc;
    do{
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
                printf("Ejercicio 1: Numeros escritos a letras\n");
                int numero;
                printf("Ingresa un numero del 1 al 10: ");
                scanf("%d", &numero);

                numeros_letra(numero);

                break;
            }
            case 2:{
                printf("Ejercicio 2: Sacar promedio de tres numeros\n");
                float num1, num2, num3, resultado;
                leer3valores(&num1, &num2, &num3);
                resultado = promedio3(num1, num2, num3);
                printf("El promedio de los tres numeros es: %.2f\n", resultado);
                break;
            }
            case 3:{
                printf("Ejercicio 3: Imprimir los primeros N numeros primos\n");
                int N;
                printf("Ingrese la cantidad de numeros primos a imprimir: ");
                scanf("%d", &N);
                imprimir_primos(N);
                break;
            }
            case 4:{
                printf("Ejercicio 4: \n");
                // Codigo del ejercicio 4
                break;
            }
            case 5:{
                printf("Ejercicio 5: Calcular potencia\n");
                int x, y, res;
                printf("Ingresa un numero positivo: ");
                scanf("%d", &x);
                printf("Ingresa la potencia de ese numero:");
                scanf("%d", &y);

                res = potencia(x, y);
                printf("%d a la %d es %d\n", x, y, res);
                break;
            }
            case 6:
                printf("Saliendo del programa...\n");
                break;

            default:
                printf("Opcion no valida. Intente de nuevo.\n");
                break;
        }
    }while(opc != 6);
    return 0;
}

// === DEFINICION DE FUNCIONES ===

void numeros_letra(int numero){
    switch (numero){
    case 1:
        printf("Uno.\n");
        break;
    
    case 2:
        printf("Dos.\n");
        break;

    case 3:
        printf("Tres.\n");
        break;

    case 4:
        printf("Cuatro.\n");
        break;

    case 5:
        printf("Cinco.\n");
        break;

    case 6:
        printf("Seis.\n");
        break;

    case 7:
        printf("Siete.\n");
        break;

    case 8:
        printf("Ocho.\n");
        break;

    case 9:
        printf("Nueve.\n");
        break;

    case 10:
        printf("Diez.\n");
        break;
    
    default:
        printf("Numero fuera de rango.\n");
        break;
    }
    
}

float promedio3(float num1, float num2, float num3){
    return  (num1 + num2 + num3) / 3.0; // 3.0 para forzar division en float
}

// float *num1 = puntero a num1
// float num1 = valor de num1

void leer3valores(float *num1, float *num2, float *num3){
    printf("Ingrese el primer numero: ");
    scanf("%f", num1);
    printf("Ingrese el segundo numero: ");
    scanf("%f", num2);
    printf("Ingrese el tercer numero: ");
    scanf("%f", num3);
    // No se pone & porque ya son punteros    
}

void imprimir_primos(int N){
    int ult_primo = 0;

    for(int i = 2; i <= N; i++){
        int es_primo = 1; // Suponemos que es primo

        for(int j = 2; j <= i / 2; j++){
            if(i % j == 0){
                es_primo = 0;
                break;
            }
        }

        if(es_primo){
            if(ult_primo != 0){
                printf("%d, ", ult_primo);
            }
            ult_primo = i;
        }
    }
    printf("%d\n", ult_primo);
}

int potencia(int x, int y){
    int res = 1;
    for(int i = 1; i <= y; i++){
        res = res * x;
    }
    return res;
}