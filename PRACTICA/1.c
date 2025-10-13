/* Contador de positivos y negativos (while)
Permite ingresar números hasta que el usuario teclee 0.
Cuenta cuántos fueron positivos y cuántos negativos.
*/

#include <stdio.h>

int main(){
    int nega = 0, posi = 0, num;

    do{
        printf("Ingresa un numero entero: ");
        scanf("%d", &num);
        if(num > 0){
            posi++;
        }
        else if(num < 0){
            nega++;
        }
    }
    while(num != 0);

    printf("Cantidad de num negativos: %d\n", nega);
    printf("Cantidad de num positivos: %d\n", posi);

    return 0;
}