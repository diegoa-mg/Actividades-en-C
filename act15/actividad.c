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
        printf("\n");

        switch(opc){
            case 1:{
                int num;

                for(num = 1; num <= 500; num++){
                    if(num / 2 == 0){
                        if(num == 2){
                            printf("%d, ", num);
                        }
                    }
                    else{
                        printf("%d, ", num);
                    }                         
                }
        
                break;
            }

            case 2:{
                int lado, perimetro;
                do
                {
                    perimetro = 0;
                    for(int i = 1; i <= 3; i++){
                        printf("Ingrese el lado %d del triangulo (0 para salir): ", i);
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
            case 3:
                // Ejercicio 3 code here
                break;

            case 4:
                // Ejercicio 4 code here
                break;

            case 5:
                // Ejercicio 5 code here
                break;

            case 6: {
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
                printf("Saliendo del programa...\n");
                break;

            default:
                printf("Opcion no valida. Por favor, intente de nuevo.\n");
                break;
        }
    }while(opc != 11);
    
    return 0;
}