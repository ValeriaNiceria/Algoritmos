/*Notas e Moedas*/
/*
Leia um valor de ponto flutuante com duas casas decimais. Este valor representa um valor monetário. A seguir, calcule o menor número de notas e moedas possíveis no qual o valor pode ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2. As moedas possíveis são de 1, 0.50, 0.25, 0.10, 0.05 e 0.01. A seguir mostre a relação de notas necessárias.

Entrada:
O arquivo de entrada contém um valor de ponto flutuante N (0 ≤ N ≤ 1000000.00).

Saída:
Imprima a quantidade mínima de notas e moedas necessárias para trocar o valor inicial, conforme exemplo fornecido.
*/



#include <stdio.h>

void main()
{
	double n, resto;

	int valor;

	scanf("%lf", &n);

	printf("NOTAS:\n");

	valor = n;

	resto = n - valor;

	printf("%d nota(s) de R$ 100.00\n", valor / 100);
	valor %= 100;

	printf("%d nota(s) de R$ 50.00\n", valor / 50);
	valor %= 50;

	printf("%d nota(s) de R$ 20.00\n", valor / 20);
	valor %= 20;

	printf("%d nota(s) de R$ 10.00\n", valor / 10);
	valor %= 10;

	printf("%d nota(s) de R$ 5.00\n", valor / 5);
	valor %= 5;

	printf("%d nota(s) de R$ 2.00\n", valor / 2);
	valor %= 2;

	printf("MOEDAS:\n");

	printf("%d moeda(s) de R$ 1.00\n", valor / 1);

	valor = resto * 100;

	printf("%d moeda(s) de R$ 0.50\n", valor / 50);
	valor %= 50;

	printf("%d moeda(s) de R$ 0.25\n", valor / 25);
	valor %= 25;

	printf("%d moeda(s) de R$ 0.10\n", valor / 10);
	valor %= 10;

	printf("%d moeda(s) de R$ 0.05\n", valor / 5);
	valor %= 5;

	printf("%d moeda(s) de R$ 0.01\n", valor);
}