/*19) Escreva um algoritmo que imprima os 10 primeiros termos da s�rie de RICCI. A
s�rie de RICCI difere da s�rie de FIBONACCI porque os dois primeiros termos da s�rie s�o
fornecidos pelo usu�rio.*/

#include<stdio.h>

main()
{
	int n, m, i;
	printf("Digite um numero: ");
	scanf("%d", &n);
	m = n - 1;
	
	while (m<n)
	{
		printf("Digite um numero maior ou igual que o primeiro: ");
		scanf("%d", &m);
	}
	printf("A sequencia eh:\n%d\n%d\n", n, m);
	for (i = 0; i < 8; i ++)
	{
		if (i % 2 == 0)
		{
			n = n + m;
			printf("%d\n", n);
		}
		else
		{
			m = m + n;
			printf("%d\n", m);
		}
	}
	system("pause");
}
