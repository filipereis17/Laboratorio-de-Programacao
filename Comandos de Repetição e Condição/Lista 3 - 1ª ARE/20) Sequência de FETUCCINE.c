/* 20) Escreva um algoritmo que imprima a s�rie de FETUCCINE. Essa s�rie � constru�da
da seguinte forma:
Se o termo � par, ent�o termo = termo * 2.
Se o termo � �mpar, ent�o termo = termo/2. */

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
	printf("A sequencia eh:\n");
	
	if (n % 2 == 0)
	{
		printf("%d\n", n*2);
	}
	else
	{
		printf("%d\n", n/2);
	}
	if(m % 2 == 0)
	{
		printf("%d\n", m*2);
	}
	else
	{
		printf("%d\n", m/2);
	}
	
	for (i = 0; i < 8; i ++)
	{
		if (i % 2 == 0)
		{
			n = n + m;
			if(n % 2 == 0)
				printf("%d\n", n*2);
			else
				printf("%d\n", n/2);
		}
		else
		{
			m = m + n;
			if(m % 2 == 0)
				printf("%d\n", m*2);
			else
				printf("%d\n", m/2);
		}
	}
	system("pause");
}
