#include <stdio.h>

int main(){
    int unidades = 1;
    float costo, pu, PD0 = 0, PD1 = .05, PD2 = .10, PD3 = .18, desc, total;

    printf("Ingrese el costo por unidad:\n");
    scanf("%f", &pu);

    while(unidades <= 1000){
        if(unidades < 100){
            costo = unidades * pu;
            desc = costo * PD0;
            total = costo - desc;
            printf("\nUnidades |  PU  |  Costo  |  %%D  |  Descuento |  Total a Pagar \n");
            printf("%d       | %.2f |  %.2f   |  0%% |  %.2f      |  %.2f \n", unidades, pu, costo, desc, total);
        }
        else if(unidades <= 200){
            costo = unidades * pu;
            desc = costo * PD1;
            total = costo - desc;
            printf("\nUnidades |  PU  |  Costo  |  %%D  |  Descuento |  Total a Pagar \n");
            printf("%d       | %.2f |  %.2f   |  5%% |  %.2f      |  %.2f \n", unidades, pu, costo, desc, total);
        }
        else if(unidades <= 500){
            costo = unidades * pu;
            desc = costo * PD2;
            total = costo - desc;
            printf("\nUnidades |  PU  |  Costo  |  %%D  |  Descuento |  Total a Pagar \n");
            printf("%d       | %.2f |  %.2f   |  10%% |  %.2f      |  %.2f \n", unidades, pu, costo, desc, total);
        }
        else{
            costo = unidades * pu;
            desc = costo * PD3;
            total = costo - desc;
            printf("\nUnidades |  PU  |  Costo  |  %%D  |  Descuento |  Total a Pagar \n");
            printf("%d       | %.2f |  %.2f   |  18%% |  %.2f      |  %.2f \n", unidades, pu, costo, desc, total);
        }

        unidades++;
    }
    return 0;
}