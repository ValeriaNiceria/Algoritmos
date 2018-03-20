/*O Maior*/
/*
Faça um programa que leia três valores e apresente o maior dos três valores lidos seguido da mensagem “eh o maior”. Utilize a fórmula:

Entrada:
O arquivo de entrada contém três valores inteiros.

Saída:
Imprima o maior dos três valores seguido por um espaço e a mensagem "eh o maior".
*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
	int a, b, c, maior;

	scanf("%d %d %d", &a, &b, &c);

	maior = (a + b + abs(a - b)) / 2;
	maior = (maior + c + abs(maior - c)) / 2;

	printf("%d eh o maior\n", maior);
}