/*19) Escreva um algoritmo que imprima os 10 primeiros termos da série de RICCI. A
série de RICCI difere da série de FIBONACCI porque os dois primeiros termos da série são
fornecidos pelo usuário.*/

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
