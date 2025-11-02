#include <stdio.h>

void mostrarodenado(int n1, int n2, int n3){
    int asc[3], desc[3];
    // Ascendente
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

    // Descendente
    desc[0] = asc[2];
    desc[1] = asc[1];
    desc[2] = asc[0];

    printf("Numeros en orden ascendente: %d, %d, %d\n", asc[0], asc[1], asc[2]);
    printf("Numeros en orden descendente: %d, %d, %d\n", desc[0], desc[1], desc[2]);

}

int main(){
    printf("Ejercicio 5: Mostrar de forma ascendente y descendente\n");
    int n1, n2, n3;
    printf("Ingresa tres numeros enteros separados por espacios: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    mostrarodenado(n1, n2, n3);
    return 0;
}