/*Fórmula de Bhaskara*/
/*
Leia 3 valores de ponto flutuante e efetue o cálculo das raízes da equação de Bhaskara. Se não for possível calcular as raízes, mostre a mensagem correspondente “Impossivel calcular”, caso haja uma divisão por 0 ou raiz de numero negativo.

Entrada:
Leia três valores de ponto flutuante (double) A, B e C.

Saída:
Se não houver possibilidade de calcular as raízes, apresente a mensagem "Impossivel calcular". Caso contrário, imprima o resultado das raízes com 5 dígitos após o ponto, com uma mensagem correspondente conforme exemplo abaixo. Imprima sempre o final de linha após cada mensagem.
*/



#include <stdio.h>
#include <math.h>

void main()
{
	double A, B, C, DELTA, R1, R2;

	scanf("%lf %lf %lf", &A, &B, &C);

	DELTA = (B * B) - 4 * (A * C);

	if (A != 0 && DELTA > 0)
	{
		R1 = (-B + sqrt(DELTA)) / (2 * A);
		R2 = (-B - sqrt(DELTA)) / (2 *A);

		printf("R1 = %.5lf\n", R1);
		printf("R2 = %.5lf\n", R2);	
	} else
	{
		printf("Impossivel calcular\n");	
	}	
}