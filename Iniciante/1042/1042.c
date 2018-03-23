/*Sort Simples*/
/*
Leia 3 valores inteiros e ordene-os em ordem crescente. No final, mostre os valores em ordem crescente, uma linha em branco e em seguida, os valores na sequência como foram lidos.

Entrada:
A entrada contem três números inteiros.

Saída:
Imprima a saída conforme foi especificado.
*/


#include <stdio.h>

void main()
{
	int a, b, c, controle, p, s, t;

	scanf("%d %d %d", &a, &b, &c);

	p = a;
	s = b;
	t = c;

	if (p > s)
	{
		controle = p;
		p = s;
		s = controle;
	}
	if (s > t)
	{
		controle = s;
		s = t;
		t = controle;
	}
	if (p > s)
	{
		controle = s;
		s = p;
		p = controle;
	} 

	printf ("%d\n%d\n%d\n\n%d\n%d\n%d\n", p, s, t, a, b, c);
}