/* 17) Escreva um algoritmo que receba 10 n�meros do usu�rio e imprima o cubo de cada
n�mero. */

#include<stdio.h>

main()
{
	int i, n;
	
	for (i=1; i<11; i++)
	{
		printf("Digite o %do numero: ", i);
		scanf("%d", &n);
		printf("O cubo eh %d\n.", n*n*n);
	}
	system("pause");
}
