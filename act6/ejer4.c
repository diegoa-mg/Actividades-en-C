#include <stdio.h>

int main(){
	int mintotal, mes, semana, dia, hora, minuto;

	printf("Ingresa los minutos totales que has recorrido en una pista:\n");
	scanf("%d", &mintotal);

	mes = mintotal / 43200;
	semana = (mintotal - (mes * 43200)) / 10080;
	dia = (mintotal - (mes * 43200 + semana * 10080)) / 1440;
	hora = (mintotal - (mes * 43200 + semana * 10080 + dia * 1440)) / 60;
	minuto = (mintotal - (mes * 43200 + semana * 10080 + dia * 1440 + hora * 60)) / 1;

	printf("Conversion: %d meses, %d semanas, %d dias, %d horas y %d minutos", mes, semana, dia, hora, minuto);

	return 0;
}
