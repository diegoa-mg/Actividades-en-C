#include <stdio.h>
#include <string.h>

int esnumero(char x){
    if(x >= '0' && x <= '9'){
        return 1;
    }else{
        return 0;
    }
}

int esletradelalfabeto(char x){
    if(x >= 'A' && x <= 'Z' || x >= 'a' && x <= 'z'){
        return 1;
    }else{
        return 0;
    }
}

void convertirARomano(int num){
    // Centenas
    while(num >= 900){
        printf("CM");
        num -= 900;
    }
    while(num >= 500){
        printf("D");
        num -= 500;
    }
    while(num >= 400){
        printf("CD");
        num -= 400;
    }
    while(num >= 100){
        printf("C");
        num -= 100;
    }
    
    // Decenas
    while (num >= 90){
        printf("XC");
        num -= 90;
    }
    while (num >= 50){
        printf("L");
        num -= 50;
    }
    while (num >= 40){
        printf("XL");
        num -= 40;
    }
    while (num >= 10){
        printf("X");
        num -= 10;
    }

    // Unidades
    while(num >= 9){
        printf("IX");
        num -= 9;
    }
    while (num >= 5){
        printf("V");
        num -= 5;
    }
    while(num >= 4){
        printf("IV");
        num -= 4;
    }
    while(num >= 1){
        printf("I");
        num -= 1;
    }
}

void encriptar(char *mensaje) {
    
    int longitud = strlen(mensaje);
    
    for (int i = 0; i < longitud; i++) {
        // Modifica el carácter original
        mensaje[i] = mensaje[i] + 2;
    }
    
    printf("Mensaje encriptado: %s\n", mensaje);
}

void desencriptar(char *mensaje) {
    
    int longitud = strlen(mensaje);
    
    for (int i = 0; i < longitud; i++) {
        // Modifica el carácter original para revertirlo
        mensaje[i] = mensaje[i] - 2;
    }
    
    printf("Mensaje desencriptado: %s\n", mensaje);
}

float area(float radio){
    return 3.1416 * (radio * radio);
}

int detercifras(int num) {
    int contador = 0;

    // Mientras al número le queden dígitos (sea > 0)...
    while (num > 0) {
        
        // 1. "Borra" el último dígito
        //    Ej: 253 se vuelve 25
        //    Ej: 25 se vuelve 2
        //    Ej: 2 se vuelve 0
        num = num / 10;
        
        // 2. Incrementa el contador por cada dígito "borrado"
        contador++;
    }
    
    // Devuelve el total de dígitos contados
    return contador;
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
                printf("Ejercicio 1: Es numero o letra\n");
                char x;
                printf("Ingresa un caracter: ");
                scanf(" %c", &x);

                int res1 = esnumero(x);
                int res2 = esletradelalfabeto(x);

                if(res1 == 1){
                    printf("El caracter %c es un NUMERO.\n", x);
                }
                else if(res2 ==  1){
                    printf("El caracter %c es una LETRA.\n", x);
                }
                else{
                    printf("El caracter %c es otro simbolo.\n", x);
                }

                break;
            }
            case 2: {
                printf("Ejercicio 2: Convertir a Romano (0-999)\n");
                int num;
                printf("Ingresa un numero entre 0 y 999: ");
                scanf("%d", &num);
                
                while(num < 0 || num > 999){
                    printf("Error: Numero invalido. Ingresa de nuevo (0-999): ");
                    scanf("%d", &num);
                }
                
                printf("El numero %d en romano es: ", num);
                convertirARomano(num);
                printf("\n");

                break;
            }
            case 3:{
                printf("Ejercicio 23: Encriptar/Desencriptar Mensaje\n");
                char mensaje[200]; // Un buffer para el mensaje

                printf("Ingresa un mensaje para encriptar: ");
                    
                // 1. Consumir el '\n' que sobró del scanf del menú
                getchar(); 
                    
                // 2. Leer la línea completa de forma segura
                fgets(mensaje, 200, stdin);
                    
                // 3. Limpiar el '\n' que fgets guarda al final
                mensaje[strcspn(mensaje, "\n")] = 0;

                // 4. Llamar al trabajador para encriptar
                encriptar(mensaje);
                    
                // 5. Llamar al trabajador para desencriptar
                desencriptar(mensaje);
                    
                break;
            }
            case 4:{
                printf("Ejercicio 4: Calcular area de un circulo\n");
                float radio;
                printf("Ingresa el radio de un circulo:\n");
                scanf("%f", &radio);

                float res = area(radio);
                printf("El area del circulo es: %.2f", res);
                break;
            }
            case 5:{
                printf("Ejercicio 5: Determinar numero de cifras de un numero\n");
                int num;
                printf("Ingresa un numero positivo:\n");
                scanf("%d", &num);

                while(num <= 0){
                    printf("Error: Numero invalido. Ingrese de nuevo:\n");
                    scanf("%d", &num);
                }

                int cifras = detercifras(num);
                printf("Cifras: %d\n", cifras);

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