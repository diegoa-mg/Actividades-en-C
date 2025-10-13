#include <stdio.h>

int main(){

    int ingreso;
    float tasa, sueldo_neto;

    ingreso = 6000;

    if(ingreso >= 9800){
        tasa = .25;
        sueldo_neto = ingreso - (ingreso * tasa);
        printf("Sueldo neto: %.2f", sueldo_neto);
    } else{
        tasa = .20;
        sueldo_neto = ingreso - (ingreso * tasa);
        printf("Sueldo neto: %.2f", sueldo_neto);
    }

    return 0;
}