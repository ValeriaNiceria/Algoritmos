/*Triângulo*/
/*
Leia 3 valores reais (A, B e C) e verifique se eles formam ou não um triângulo. Em caso positivo, calcule o perímetro do triângulo e apresente a mensagem:


Perimetro = XX.X


Em caso negativo, calcule a área do trapézio que tem A e B como base e C como altura, mostrando a mensagem

Area = XX.X

Entrada:
A entrada contém três valores reais.

Saída:
O resultado deve ser apresentado com uma casa decimal.
*/


#include <stdio.h>

void main()
{
	double A, B, C;

	scanf("%lf %lf %lf", &A, &B, &C);

	if (A < (B + C) && B < (A + C) && C < (A + B))
	{
		printf("Perimetro = %.1lf\n", A + B + C);
	} else
	{
		printf("Area = %.1lf\n", C * (A + B) / 2);
	}
}