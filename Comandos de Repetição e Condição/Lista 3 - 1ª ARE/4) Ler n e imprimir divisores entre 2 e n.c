/* 4) Faça um programa que lê um número n e imprima os valores entre 2 e n, que são
divisores de n. */

#include<stdio.h>

main()
{
	int n, i;
	
	printf("Digite um numero: ");
	scanf("%d", &n);
		
	if (n>2)
	{
		i = n - 1;
		while (i > 2)
		{
			if (n % i == 0)
			{
				printf("%d \n", i);
			}
			i = i - 1;
		}
	}
	else
	{
		i = n + 1;
		while (i < 0)
		{
			if (n % i == 0)
			{
				printf("%d \n", i);
			}
			i = i + 1;
		}
	printf("1\n");
	}
	system("pause");
}
