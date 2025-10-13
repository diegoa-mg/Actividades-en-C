// Colocar un prefijo
#include <stdio.h>
#include <string.h>

int main(){

    char nombre[150], prefijo[250] = "Alumno ";

    printf("Ingresa tu nombre: ");

    //  fgets = lee toda la linea hasta encontrar un salto de linea o  llenar el tamano maximo asignado
    //   buffer     tamano         la entrada viene del teclado
    fgets(nombre, sizeof(nombre), stdin);

    // Elimnar salto de linea
    // strcspn busca el salto de linea que deja fgets y lo reemplaza por \0
    nombre[strcspn(nombre, "\n")] = '\0'; // Se usa comilla simple

    // Ya que las comillas simples representan un solo caracter, y la comilla doble un arreglo de caracteres
    // '\0' = caracter nulo (valor 0)
    // "\0" = cadena que contiene un caracter nulo seguido de otro. array de 2 char {0, '\0'}

    // Concatenar el nombre al prefijo
    //      destino / origen (tener cuidado con que el destino tenga suficiente espacio)
    strcat(prefijo, nombre);

    strlen(nombre);
    printf("%s\n", prefijo);

    return 0;
}