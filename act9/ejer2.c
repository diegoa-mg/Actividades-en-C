#include <stdio.h>

int main(){
    float venta, tasa, impuesto, total, multa, imptotal;

    printf("Ingresa la venta total:\n");
    scanf("%f", &venta);

    if(venta <= 544){
        tasa = .08;
        impuesto = venta * tasa;
        total = venta + impuesto;
        printf("Venta: %.2f\n", venta);
        printf("Impuesto: %.2f\n", impuesto);
        printf("Total: %.2f\n", total);
    }
    else{
        tasa = .047;
        impuesto = venta * tasa;
        total = venta + impuesto;
        
        if(impuesto > 329){
            multa = impuesto * .06;
            imptotal = impuesto + multa;
            total = venta + imptotal;
            printf("Venta: %.2f\n", venta);
            printf("Impuesto: %.2f\n", imptotal);
            printf("Total: %.2f\n", total);
        }
        else{
            printf("Venta: %.2f\n", venta);
            printf("Impuesto: %.2f\n", impuesto);
            printf("Total: %.2f\n", total);
        }
    }

    return 0;
}