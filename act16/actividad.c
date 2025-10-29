#include <stdio.h>
#include <string.h>

int tablademultiplicar(int inicio, int fin, int multiplicador) {
    int suma = 0;

    for(int i = inicio; i <= fin; i++){
        printf("%d x %d = %d\n", multiplicador, i, multiplicador * i);
        suma += multiplicador * i;
    }

    return suma;
}

void centrar_texto(char texto[100]){
    int longitud = strlen(texto);
    //int espacios = 40 - (longitud / 2);
    int espacios = (80 - longitud) / 2;

    for(int i = 0; i < espacios; i++){
        printf(" ");
    }
    printf("%s\n", texto);
}

int xalcubo(int numero){
    int cubo = numero * numero * numero;
    return cubo;
}

int piramide(int altura){
    if(altura <= 0){
        return 1;
    }

    for(int i = altura; i >= 1; i--){ // Filas
        for(int j = 0; j < altura - i; j++){ // Espacios: Ejemplo, altura 5, fila 1 -> 0 espacios
            printf(" ");
        }
        for(int k = 0; k < (2 * i - 1); k++){ // Asteriscos
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

void menu(){
        printf("\nMenu de operaciones\n");
        printf("1. Sumar\n");
        printf("2. Restar\n");
        printf("3. Multiplicar\n");
        printf("4. Dividir\n");
        printf("5. Salir\n");
        printf("Seleccione una opcion: ");
}

float sumar(float num1, float num2){
    return num1 + num2;
}

float restar(float num1, float num2){
    return num1 - num2;
}

float multiplicar(float num1, float num2){
    return num1 * num2;
}

float dividir(float num1, float num2){
    if(num2 != 0){
        return num1 / num2;
    }else{
        printf("Error: Division entre cero no es permitida.\n");
        return 0;
    }
}

int main() {
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
                printf("Ejercicio 1: Tabla de Multiplicar\n");
                int inicio, fin, multiplicador, suma = 0;

                printf("Ingresa un numero para ver su tabla de multiplicar: ");
                scanf("%d", &multiplicador);
                printf("Ingresa el rango inicial de la tabla: ");
                scanf("%d", &inicio);
                printf("Ingresa el rango final de la tabla: ");
                scanf("%d", &fin);

                suma = tablademultiplicar(inicio, fin, multiplicador);
                printf("La suma de los resultados es: %d\n",suma);
                break;
            }
            case 2:{
                printf("Ejercicio 2: Recibir y centrar un texto");
                char texto[100];

                printf("\nIngresa un texto: ");
                // BUG: Esta línea consume el '\n' que sobró del scanf del menú.
                getchar();
                // Lee la línea completa (stdin = standard input = teclado)
                fgets(texto, sizeof(texto), stdin);
                // 3. ¡LA TRAMPA! Limpiamos el '\n' que fgets guarda
                // Esta línea busca el '\n' y lo reemplaza con un '\0' (fin de string)
                texto[strcspn(texto, "\n")] = 0;

                centrar_texto(texto);

                break; 
            }
            case 3:{
                printf("Ejercicio 3: Calcular el Cubo de un Numero\n");
                int numero;
                printf("Ingresa un numero para calcular su cubo: ");
                scanf("%d", &numero);
                int cubo = xalcubo(numero);
                printf("El cubo de %d es %d\n", numero, cubo);
                break;
            }
            case 4:{
                printf("Ejercicio 4: Dibujar piramide invertida ccon asteristicos\n");
                int altura;

                printf("Ingresa la altura de la piramide: ");
                scanf("%d", &altura);

                int reporte = piramide(altura);

                if(reporte == 1) {
                    printf("Valores de entrada invalidos\n");
                } else {
                    printf("Exito\n");
                }
                
                break; 
            }
            case 5:{
                printf("Ejercicio 5: Menu de Operaciones\n");
                int opc_oper;

                do           
                {
                    menu();
                    scanf("%d", &opc_oper);
                    printf("\n");

                    switch(opc_oper){
                        case 1:{
                            float num1, num2;
                            printf("Ingrese el primer numero: ");
                            scanf("%f", &num1);
                            printf("Ingrese el segundo numero: ");
                            scanf("%f", &num2);
                            float resultado = sumar(num1, num2);
                            printf("El resultado de la suma es: %.2f\n", resultado);
                            break;
                        }
                        case 2:{
                            float num1, num2;
                            printf("Ingrese el primer numero: ");
                            scanf("%f", &num1);
                            printf("Ingrese el segundo numero: ");
                            scanf("%f", &num2);
                            float resultado = restar(num1, num2);
                            printf("El resultado de la resta es: %.2f\n", resultado);
                            break;
                        }
                        case 3:{
                            float num1, num2;
                            printf("Ingrese el primer numero: ");
                            scanf("%f", &num1);
                            printf("Ingrese el segundo numero: ");
                            scanf("%f", &num2);
                            float resultado = multiplicar(num1, num2);
                            printf("El resultado de la multiplicacion es: %.2f\n", resultado);
                            break;
                        }
                        case 4:{
                            float num1, num2;
                            printf("Ingrese el primer numero: ");
                            scanf("%f", &num1);
                            printf("Ingrese el segundo numero: ");
                            scanf("%f", &num2);
                            float resultado = dividir(num1, num2);
                            printf("El resultado de la division es: %.2f\n", resultado);
                            break;
                        }
                        case 5:
                            printf("Regresando al menu principal...\n");
                            break;
                        
                        default:
                            printf("Opcion no valida. Intente de nuevo.\n");
                            break;
                    }
                }while (opc_oper != 5);
                break;
            }
            case 6:
                printf("Saliendo del programa...\n");
                break;

            default:
                break;
        }
    } while (opc != 6);
    
    return 0;
}