#include <stdio.h>

void pares(int numeros[], int tam){
    printf("Numeros pares: ");
    for(int i = 0; i < tam; i++){
        // Evaluar si es par
        if(numeros[i] % 2 == 0){
            printf("%d ", numeros[i]);
        }
    }
    printf("\n");
}

void impares(int numeros[], int tam){
    printf("Numeros impares: ");
    for(int i = 0; i < tam; i++){
        // Evaluar si es impar
        if(numeros[i] % 2 != 0){
            printf("%d ", numeros[i]);
        }
    }
    printf("\n");
}

int sumarpositivos(int numeros[3][3]){
    int suma = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(numeros[i][j] > 0 ){
                suma += numeros[i][j];
            }
        }
    }

    return suma;
}

int sumarnegativos(int numeros[3][3]){
    int suma = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(numeros[i][j] < 0 ){
                suma += numeros[i][j];
            }
        }
    }

    return suma;
}

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
                printf("Ejercicio 1: Leer 5 numeros y almacenarlos en un array para mostrar la media\n");
                float numeros[5], promedio, suma = 0.0;

                // Ingresar datos al array
                printf("Ingresa 5 numeros.\n");
                for(int i = 0; i < 5; i++){
                    printf("Ingresa el numero %d: ", i + 1);
                    scanf("%f", &numeros[i]);
                }

                // Calcular promedio
                for(int i = 0; i < 5; i++){
                    suma += numeros[i];
                }
                promedio = suma / 5;

                printf("Promedio de los numeros: %.2f\n", promedio);
                
                break;
            }
            case 2: {
                printf("Ejercicio 2: Almacenar numeros e imprimir los pares e impares\n");
                int numeros[20], i, tam;

                // Ingresar datos al array hasta 20 o hasta que ingrese 0
                printf("Ingresa maximo 20 numeros.\n");
                
                for(i = 0; i < 20; i++){
                    printf("Ingresa el numero %d: ", i + 1);
                    scanf("%d", &numeros[i]);

                    if(numeros[i] == 0){
                        break;
                    }
                }
                printf("\n");
                
                // Saber cuantos elementos tiene mi array sin agregar el 0
                tam = i;

                pares(numeros, tam);
                impares(numeros, tam);

                break;
            }
            case 3:{
                printf("Ejercicio 3: Mostrar multiplos de un numero pedido y la cantidad pedida\n");
                int array[20], numero_pedido, N;

                printf("Ingresa la cantidad de elementos que quieres: ");
                scanf("%d", &N);
                printf("Ingresa un numero: ");
                scanf("%d", &numero_pedido);

                // Ingresar los multiplos
                array[0] = numero_pedido;
                for(int i = 1; i < N; i++){
                    array[i] = array[i - 1] + numero_pedido;
                }
                
                // Mostrar los numeros
                for(int i = 0; i < N; i++){
                    printf("%d ", array[i]);
                }
                printf("\n");
                
                break;
            }
            case 4:{
                printf("Ejercicio 4: Determinar la posicion del maximo y minimo valor\n");
                int matriz[3][3] = { {21, 43, 64}, {35, 76, 13}, {27, 97, 88} };
                int valor_max = matriz[0][0], valor_min = matriz[0][0];
                int i_max = 0, i_min = 0, j_max = 0, j_min = 0;

                // Determinar el valor maximo y minimo
                for(int i = 0; i < 3; i++){
                    for(int j = 0; j < 3; j++){
                        if(matriz[i][j] > valor_max){
                            valor_max = matriz[i][j];
                            i_max = i;
                            j_max = j;
                        }
                        else if(matriz[i][j] < valor_min){
                            valor_min = matriz[i][j];
                            i_min = i;
                            j_min = j;
                        }
                    }
                }
                printf("El valor maximo es: %d. Posicion: %d %d\n", valor_max, i_max, j_max);
                printf("El valor minimo es: %d. Posicion: %d %d\n", valor_min, i_min, j_min);

                break;
            }
            case 5:{
                printf("Ejercicio 5: Sumar positivos y negativos\n");
                int matriz[3][3] = { {-22, 23, 32}, {45, 56, -13}, {-25, 78, 89} };

                int positivos = sumarpositivos(matriz);
                int negativos = sumarnegativos(matriz);

                printf("Total de los numeros positivos: %d\n", positivos);
                printf("Total de los numeros negativos: %d\n", negativos);

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