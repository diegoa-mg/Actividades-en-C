#include <stdio.h>

int main(){
    int opc;

    do{
        printf("\nMenu de ejercicios\n");
        printf("1. Ejercicio 1\n");
        printf("2. Ejercicio 2\n");
        printf("3. Ejercicio 3\n");
        printf("4. Ejercicio 4\n");
        printf("5. Ejercicio 5\n");
        printf("6. Ejercicio 6\n");
        printf("7. Ejercicio 7\n");
        printf("8. Ejercicio 8\n");    
        printf("9. Ejercicio 9\n");
        printf("10. Ejercicio 10\n");
        printf("11. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opc);

        switch(opc){
            case 1:{
                printf("\nEjercicio 1: Numeros primos del 1 al 500\n");
                int num, ultimoprimo = 0;

                for(num = 2; num <= 500; num++){
                    int esPrimo = 1; // Suponemos que el numero es primo

                    // num = 2. Al comenzar el bucle, en mi condicion como 2 no es <= a 1, se salta el bucle y pasa los if
                    for(int i = 2; i <= num / 2; i++){ // El divisor mas grande que puede tener un numero es su mitad (ademas de si mismo)
                        if(num % i == 0){
                            esPrimo = 0; // No es primo
                            break;
                        }
                    }

                    if(esPrimo){ // esPrimo == 1. DATO: esPrimo == 0 equivale a !esPrimo
                        if(ultimoprimo != 0){
                            printf("%d, ", ultimoprimo);
                        }
                        ultimoprimo = num;
                    }        
                }
                printf("%d\n", ultimoprimo);
                // Se usa una tecnica del buffer para no imprimir la coma despues del ultimo numero
                // Se guarda el ultimo numero primo y se imprime despues del bucle
                // Dentro del bucle, se imprime el numero primo anterior antes de actualizarlo
                break;
            }

            case 2:{
                printf("\nEjercicio 2: Obtener perimetros de triangulos\n");
                int lado, perimetro;
                do
                {
                    perimetro = 0;
                    for(int i = 1; i <= 3; i++){
                        printf("\nIngrese el lado %d del triangulo (0 para salir): ", i);
                        scanf("%d", &lado);
                        if(lado == 0){
                            break;
                        }
                        else{
                            perimetro = perimetro + lado;
                        }
                    }    
                    printf("El perimetro del triangulo es: %d\n", perimetro);
                } while(lado != 0);
                
                break;
            }
            case 3:{
                printf("\nEjercicio 3: Obtener perimetros de triangulos\n");
                int lado, perimetro;
                char elegir;

                do
                {
                    perimetro = 0;
                    for(int i = 1; i <= 3; i++){
                        printf("\nIngrese el lado %d del triangulo: ", i);
                        scanf("%d", &lado);
                        perimetro = perimetro + lado;
                    }    
                    printf("\nEl perimetro del triangulo es: %d\n", perimetro);
                    printf("Desea calcular otro perimetro? (s/n): ");
                    scanf(" %c", &elegir);
                } while(elegir == 's' || elegir == 'S');
                
                break;
            }
            case 4:{
                printf("\nEjercicio 4: Calcular combinacion de productos\n");
                int total = 87, prod1 = 5, prod2 = 7, prod3 = 19;
                int x, y, z;

                x = total / prod1; // Maximo de prod1
                y = total / prod2; // Maximo de prod2
                z = total / prod3; // Maximo de prod3

                for(int i = 0; i <= x; i++){
                    for(int j = 0; j <= y; j++){
                        for(int k = 0; k <= z; k++){
                            if((i * prod1) + (j * prod2) + (k * prod3) == total){
                                printf("Combinacion encontrada: %d productos de $5, %d productos de $7, %d productos de $19\n", i, j, k);
                            }
                        }
                    }
                }

                break;
            }
            case 5:
                printf("\nEjercicio 5: Detectar todos los divisores de un numero\n");
                int num, ultimonumero = 0;

                printf("Ingrese un numero entero positivo: ");
                scanf("%d", &num);

                for(int i = 1; i <= num; i++){
                    if(num % i == 0){
                        if(ultimonumero != 0){
                            printf("%d, ", ultimonumero);
                        }
                        ultimonumero = i;
                    }
                }
                printf("%d\n", ultimonumero);
                break;

            case 6: {
                printf("\nEjercicio 6: Simplificar fracciones\n");
                int num1, num2, sim1, sim2, MCD = 1, menor;

                printf("Ingresa una fraccion (Ej: 15/18):\n");
                scanf("%d/%d", &num1, &num2);
                // num1 = numerador, num2 = denominador

                // Validar que el denominador no sea cero
                while(num2 == 0){
                    printf("El denominador no puede ser cero. Ingresa una fraccion valida:\n");
                    scanf("%d/%d", &num1, &num2);
                }
                // Convertir a positivos para calcular el MCD
                if(num1 < 0 && num2 < 0){
                    num1 = num1 * -1;
                    num2 = num2 * -1;
                }
                // Pasar a negativo solo el numerador
                else if(num2 < 0){
                    num1 = num1 * -1;
                    num2 = num2 * -1;
                }
                
                // Obtener el menor de los dos numeros
                if(num1 < 0){
                    menor = num1 * -1;
                    if(menor > num2){
                        menor = num2;
                    }
                }
                else{
                    if(num1 < num2){
                        menor = num1;
                    } else {
                        menor = num2;
                    }
                }
    
                // Calcular el MCD
                for (int i = 1; i <= menor; i++){
                    if(num1 % i == 0 && num2 % i == 0){
                        MCD = i;
                    } 
                }
                
                sim1 = num1 / MCD;
                sim2 = num2 / MCD;

                printf("Fraccion simplificada: %d/%d\n", sim1, sim2);
                break;
            }

            case 7: {
                printf("\nEjercicio 7: Calcular distancia recorrida\n");
                float distancia, velocidad, tiempo;
                char elegir;

                do{
                    printf("Ingrese la velocidad en km/h: ");
                    scanf("%f", &velocidad);
                    printf("Ingrese el tiempo en horas: ");
                    scanf("%f", &tiempo);

                    distancia = velocidad * tiempo;
                    printf("La distancia recorrida es: %.2f km\n", distancia);

                    printf("Quiere continuar calculando la distancia? (s/n): ");
                    scanf(" %c", &elegir); // espacio antes de %c para capturar el salto de linea del anterior scanf

                }while(elegir == 's' || elegir == 'S');

                break;
            }

            case 8: {
                printf("\nEjercicio 8: Convertir de pulgadas a centimetros\n");
                float cm, inches;

                printf("Ingrese la medida en pulgadas: ");
                scanf("%f", &inches);

                while(inches != 0){
                    cm = inches * 2.54;

                    printf("%.2f pulgadas son %.2f centimetros\n", inches, cm);

                    printf("Ingresa otra medida en pulgadas (0 para salir): ");
                    scanf("%f", &inches);
                }

                    break;
            }
            case 9: {
                printf("\nEjercicio 9: Mostrar nombre y salario de 120 empleados\n");
                char nombre[50];
                float salario;

                for(int i = 0; i <= 120; i++){
                    printf("Ingrese el nombre del empleado %d: ", i+1);
                    scanf("  %[^\n]", nombre); // scanset para leer string con espacios
                    //  Significa que lea cualquier caracter que no sea un salto de linea
                    // El espacio antes del % es para consumir cualquier caracter de espacio en blanco previo
                    // % leer algo
                    // [] conjunto de caracteres a leer
                    // ^ negacion del conjunto
                    // \n es salto de linea, en esto caso nuestro conjunto
                    printf("Ingrese el salario de %s: ", nombre);
                    scanf("%f", &salario);

                    printf("Empleado: %s, Salario: %.2f\n", nombre, salario);
                }
                break;
            }

            case 10: {
                printf("\nEjercicio 10: Mostrar nombre y promedio de 3 examenes, de 25 alumnos\n");
                float calif, promedio;
                char nombre[50];

                for(int i = 1; i <= 25; i++){
                    float suma = 0;
                    printf("Ingrese el nombre del estudiante %d: ", i);
                    scanf("  %[^\n]", nombre);

                    for(int j = 1; j <= 3; j++){
                        printf("Ingrese la calificacion %d: ", j);
                        scanf("%f", &calif);
                        suma = suma + calif;
                    }

                    promedio = suma / 3;

                    printf("Estudiante: %s, Promedio: %.2f\n", nombre, promedio);
                }

                break;
            }
            case 11:
                printf("\nSaliendo del programa...\n");
                break;

            default:
                printf("\nOpcion no valida. Por favor, intente de nuevo.\n");
                break;
        }
    }while(opc != 11);
    
    return 0;
}