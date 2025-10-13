#include <stdio.h>
#include <string.h>

int main (){
    char nombre[50];
    int horas, tarifa, salario;

    printf("Ingresa tu nombre: ");
    fgets(nombre, sizeof(nombre), stdin);

    // Eliminar salto de linea
    nombre[strcspn(nombre, "\n")] = '\0';

    printf("¿Cuantas horas trabajaste esta semana? ");
    scanf("%d", &horas);
    printf("¿Cuanto te pagan por hora? ");
    scanf("%d", &tarifa);

    salario = horas * tarifa;

    printf("Trabajador: %s\n", nombre);
    printf("Salario semanal: %d", salario);

    return 0;
}