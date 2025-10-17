#include <stdio.h>

int main(){
	float impuesto, venta, ventaimp;

	printf("Ingresa el total de ventas:\n");
	scanf("%f", &venta);

	if(venta <= 9500){
		impuesto = .031;
		ventaimp = venta * impuesto;
		printf("Impuestos: %.2f", ventaimp);
	}
	else if(venta > 9500 || venta < 15000){
		impuesto = .045;
		ventaimp = venta * impuesto;
		printf("Impuestos: %.2f", ventaimp);
	}
	else{
		impuesto = .5;	
		ventaimp = venta * impuesto;
		printf("Impuestos: %.2f", ventaimp);
	}

	return 0;
}
