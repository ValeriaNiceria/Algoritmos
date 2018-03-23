/*Tempo de Jogo*/
/*
Leia a hora inicial e a hora final de um jogo. A seguir calcule a duração do jogo, sabendo que o mesmo pode começar em um dia e terminar em outro, tendo uma duração mínima de 1 hora e máxima de 24 horas.

Entrada:
A entrada contém dois valores inteiros representando a hora de início e a hora de fim do jogo.

Saída:
Apresente a duração do jogo conforme exemplo abaixo.
*/


#include <stdio.h>

void main()
{
	int hInicio, hFinal, duracao;

	scanf("%d %d", &hInicio, &hFinal);

	if (hInicio < hFinal)
	{
		duracao = hFinal - hInicio;  
		printf("O JOGO DUROU %d HORA(S)\n", duracao);
	} else {
		duracao = (24 - hInicio) + hFinal;
		printf("O JOGO DUROU %d HORA(S)\n", duracao);
	}
}