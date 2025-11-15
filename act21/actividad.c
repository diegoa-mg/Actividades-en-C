#include <stdio.h>

void imprimir(int impares[]){
    printf("Mostrando los numeros impares entre 1 y 90\n");
    // Mostrar los numeros del array
    for(int i = 0; i < 45; i++){
        printf("%d ", impares[i]);
    }
    printf("\n");
}

// Ambito de variable (Scope)
// La funcion no sabe que mi array originalmente se llama p
// p es el argumento y A es el parametro
// Esto funciona para ponerle apodos a los arrays y poder usar la funcion para varios arrays
int sumar(int tam, int A[]){
    int suma = 0;
    
    // Sacar el total de la suma de todos los numeros del array
    for(int i = 0; i < tam; i++){
        suma += A[i];
    }

    return suma;
}

long long int producto(int N, int impares[]){
    long long int res = 1;

    // Sacar el total del producto de todos los numeros del array
    for(int i = 0; i < N; i++){
        res = res * impares[i];
    }

    // Mostrar el producto junto con todos los numeros
    for(int i = 0; i < N; i++){
        if(impares[i] == impares[N - 1]){
            printf("%d ", impares[i]);
        }else{
            printf("%d x ", impares[i]);
        }
    }
    printf("= %lld\n", res);
    
    return res;
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
                printf("Ejercicio 1: Asignar manualmente numeros a un array\n");
                int numeros[7];
                numeros[0] = 4;
                numeros[1] = 2;
                numeros[2] = 7;
                numeros[3] = 10;
                numeros[4] = 9;
                numeros[5] = 2;
                numeros[6] = 1;

                for(int i = 0; i <= 6; i++){
                    printf("%d ", numeros[i]);
                }   
                printf("\n");

                break;
            }
            case 2: {
                printf("Ejercicio 2: Rellenar un array con numeros impares entre 1 y 90\n");
                int impares[45];
                int contador = 0;

                // Llenar el array
                for(int i = 1; i <= 90; i += 2){
                    impares[contador] = i;

                    contador++;
                }

                imprimir(impares);

                break;
            }
            case 3:{
                printf("Ejercicio 3: Leer 7 numeros en un array A, copiarlos a un array B multiplicados por 2.75\n");
                float a[7], b[7];
                
                // Llenar el array A
                printf("Array A\n");
                for(int i = 0; i <= 6; i++){
                    printf("Ingresa el numero %d: ", i + 1);
                    scanf("%f", &a[i]);
                }
                printf("\n");

                // Copiar los numeros al otro array multiplicados por 2.75
                for(int i = 0; i <= 6; i++){
                    b[i] = a[i] * 2.75;
                }

                // Mostrar el array B
                printf("Array B\n");
                for(int i = 6; i >= 0; i--){
                    printf("%.2f ", b[i]);
                }
                printf("\n");
                
                break;
            }
            case 4:{
                printf("Ejercicio 4: Mostrar la suma de un array con los primeros 100 numeros pares\n");
                int p[100], contador = 0, tam;

                // Llenar el array
                for(int i = 2; contador < 100; i += 2){
                    p[contador] = i;
                    contador++;
                }

                // Sacar la longitud de mi array
                // sizeof(p) obtiene el tamaño total del array en bytes
                // sizeof(p[0]) obtiene el tamaño en bytes de un solo elemento
                tam = sizeof(p) / sizeof(p[0]);

                int res = sumar(tam, p);
                printf("Resultado de la suma de los elementos del array: %d\n", res);

                break;
            }
            case 5:{
                printf("Ejercicio 5: Mostrar el producto de los valores ingresados en el array\n");
                int N, x = 0;

                printf("Ingrese el tamano del array (2-20):\n");
                scanf("%d", &N);

                while (N < 2 || N > 20){
                    printf("Error: tamano invalido. Ingrese de nuevo:\n");
                    scanf("%d", &N);
                }

                int array[N];

                // Llenar el array
                for(int i = 1; x < N; i += 2){
                    array[x] = i;
                    x++;
                }

                long long int resultado = producto(N, array);

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