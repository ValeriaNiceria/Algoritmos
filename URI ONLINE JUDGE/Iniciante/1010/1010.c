/*Cálculo Simples*/
/*
Neste problema, deve-se ler o código de uma peça 1, o número de peças 1, o valor unitário de cada peça 1, o código de uma peça 2, o número de peças 2 e o valor unitário de cada peça 2. Após, calcule e mostre o valor a ser pago.

Entrada:
O arquivo de entrada contém duas linhas de dados. Em cada linha haverá 3 valores, respectivamente dois inteiros e um valor com 2 casas decimais.

Saída:
A saída deverá ser uma mensagem conforme o exemplo fornecido abaixo, lembrando de deixar um espaço após os dois pontos e um espaço após o "R$". O valor deverá ser apresentado com 2 casas após o ponto.
*/


#include <stdio.h>
void main()
{
	int id1, id2, qtd1, qtd2;
	double val1, val2, valTot;

	scanf("%d %d %lf", &id1, &qtd1, &val1);
	scanf("%d %d %lf", &id2, &qtd2, &val2);

	valTot = (val1 * qtd1) + (val2 * qtd2);

	printf("VALOR A PAGAR: R$ %.2lf\n", valTot);
}