/*Conversão de Tempo*/
/*
Leia um valor inteiro, que é o tempo de duração em segundos de um determinado evento em uma fábrica, e informe-o expresso no formato horas:minutos:segundos.

Entrada:
O arquivo de entrada contém um valor inteiro N.

Saída:
Imprima o tempo lido no arquivo de entrada (segundos), convertido para horas:minutos:segundos, conforme exemplo fornecido.
*/


#include <stdio.h>

void main()
{
	int segundos;

	scanf("%d", &segundos);

	printf("%d:", segundos / 3600);

	segundos %= 3600;

	printf("%d:", segundos / 60);

	segundos %= 60;

	printf("%d\n", segundos);
}