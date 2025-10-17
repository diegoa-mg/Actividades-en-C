#include <stdio.h>

int main(){
	float monto, comision, tasa;

	printf("Ingresa el monto de las ventas:\n");
	scanf("%f", &monto);

	if(monto >= 1540){
		tasa = .035;
		comision = monto * tasa;
		printf("Comision: %.2f\n", comision);
	}
	else{
		tasa = .028;
		comision = monto * tasa;
		printf("Comision: %.2f\n", comision);
	}

	return 0;
}

