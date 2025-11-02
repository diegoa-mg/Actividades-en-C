#include <stdio.h>
#include <math.h>

float cal_dis(float x1, float y1, float x2, float y2){
    return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
}

int cal_dias(int mes){
    switch (mes){
        // Tecnica Fallthrough
        case 1: // Enero
        case 3: // Marzo
        case 5: // Mayo
        case 7: // Julio
        case 8: // Agosto
        case 10: // Octubre
        case 12: // Diciembre
            return 31;
        
        case 4: // Abril
        case 6: // Junio
        case 9: // Septiembre
        case 11: // Noviembre
            return 30;

        case 2: // Febrero
            return 28;

        default:
            printf("Mes invalido.\n");
            return 0; // Mes invalido
    }
}

void menu_conversion(){
    printf("MENU - Conversion grados\n");
    printf("1. Fahrenheit\n");
    printf("2. Kelvin\n");
    printf("Selecciona una opcion: ");
}

void calcular_conversion(float celsius, int opc_conv){
    switch (opc_conv){
        case 1:{
            float fahrenheit = (celsius * 9.0/5.0) + 32; // Forzar division en flotantes
            printf("%.2f grados Celsius son %.2f grados Fahrenheit.\n", celsius, fahrenheit);
            break;
        }
        case 2:{
            float kelvin = celsius + 273.15;
            printf("%.2f grados Celsius son %.2f Kelvin.\n", celsius, kelvin);
            break;
        }
        default:
            printf("Opcion invalida.\n");
            break;
    }
}

void esparoimpar(int numero){
    if(numero % 2 == 0){
        printf("El numero %d es par.\n", numero);
    }
    else{
        printf("El numero %d es impar.\n", numero);
    }
}

void leernum(int *n1, int *n2, int *n3){
    printf("Ingresa tres numeros enteros separados por espacios: ");
    scanf("%d %d %d", n1, n2, n3);
}

void mostrarasc(int n1, int n2, int n3){
    int asc[3];
    if(n1 <= n2 && n1 <= n3){
        asc[0] = n1;
        if(n2 <= n3){
            asc[1] = n2;
            asc[2] = n3;
        }
        else{
            asc[1] = n3;
            asc[2] = n2;
        }
    }
    else if(n2 <= n1 && n2 <= n3){
        asc[0] = n2;
        if(n1 <= n3){
            asc[1] = n1;
            asc[2] = n3;
        }
        else{
            asc[1] = n3;
            asc[2] = n1;
        }
    }
    else{
        asc[0] = n3;
        if(n1 <= n2){
            asc[1] = n1;
            asc[2] = n2;
        }
        else{
            asc[1] = n2;
            asc[2] = n1;
        }
    }

    printf("Numeros en orden ascendente: %d, %d, %d\n", asc[0], asc[1], asc[2]);

}

void mostrardsc(int n1, int n2, int n3){
    int dsc[3];
    if(n1 >= n2 && n1 >= n3){
        dsc[0] = n1;
        if(n2 >= n3){
            dsc[1] = n2;
            dsc[2] = n3;
        }
        else{
            dsc[1] = n3;
            dsc[2] = n2;
        }
    }
    else if(n2 >= n1 && n2 >= n3){
        dsc[0] = n2;
        if(n1 >= n3){
            dsc[1] = n1;
            dsc[2] = n3;
        }
        else{
            dsc[1] = n3;
            dsc[2] = n1;
        }
    }
    else{
        dsc[0] = n3;
        if(n1 >= n2){
            dsc[1] = n1;
            dsc[2] = n2;
        }
        else{
            dsc[1] = n2;
            dsc[2] = n1;
        }
    }

    printf("Numeros en orden descendente: %d, %d, %d\n", dsc[0], dsc[1], dsc[2]);
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

        switch(opc){
            case 1:{
                printf("Ejercicio 1: Obtener la distancia de dos puntos\n");
                float x1, y1, x2, y2;

                printf("Ingresa las coordenadas del primer punto (x1 y1): ");
                scanf("%f %f", &x1, &y1);
                printf("Ingresa las coordenadas del segundo punto (x2 y2): ");
                scanf("%f %f", &x2, &y2);
                float distancia = cal_dis(x1, y1, x2, y2);
                printf("La distancia entre los puntos es: %.2f\n", distancia);

                break;
            }
            case 2:{
                printf("Ejercicio 2: Mostrar el numero de dias\n");
                int mes;
                printf("Ingresa un numero de mes (1-12): ");
                scanf("%d", &mes);

                int dias = cal_dias(mes);
                printf("El mes tiene %d dias.\n", dias);
                
                break;
            }
            case 3:{
                printf("Ejercicio 3: Conversion grados celsius a fahrenheit o kelvin\n");
                float celsius;
                int opc_conv;
                printf("Ingresa la temperatura en grados Celsius: ");
                scanf("%f", &celsius);

                menu_conversion();
                scanf("%d", &opc_conv);
                calcular_conversion(celsius, opc_conv);
                break;
            }
            case 4:{
                printf("Ejercicio 4: Par o impar\n");
                int numero;
                printf("Ingresa un numero entero: ");
                scanf("%d", &numero);

                esparoimpar(numero);
                break;
            }
            case 5:{
                printf("Ejercicio 5: Mostrar de forma ascendente y descendente\n");
                int n1, n2, n3;
                leernum(&n1, &n2, &n3); // Punteros
                mostrarasc(n1, n2, n3);
                mostrardsc(n1, n2, n3);
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