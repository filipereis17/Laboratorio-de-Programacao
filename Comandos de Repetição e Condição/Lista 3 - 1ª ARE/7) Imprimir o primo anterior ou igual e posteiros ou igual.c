/* 7) Escreva um programa que lê um número n, e então imprime o menor número,
primo que é maior ou igual a n, e imprime o maior primo que é menor ou igual 
a n. */

#include<stdio.h>

main()
{
	int n, i = 1, m, aux, x, cont = 3;
	printf("Digite um numero inteiro maior que 1: ");
	scanf("%d", &n);
	
	while (n < 2)
	{
		printf("Invalido. Digite um numero inteiro maior que 1: ");
		scanf("%d", &n);
	}
	aux = n;
	while (cont >= 3)
	{
		cont = 0;
		i = n;
		while (i>0)
		{
			if (n % i == 0)
			{
				cont = cont + 1;
			}
		i = i - 1;	
		}
		m = n;
		n = n + 1;
	}
	printf("O proximo/igual primo eh %d", m);
	
	cont = 3;
	
	while (cont >= 3)
	{
		cont = 0;
		i = aux;
		while (i>0)
		{
			if (aux % i == 0)
			{
				cont = cont + 1;
			}
		i = i - 1;	
		}
		x = aux;
		aux = aux - 1;
	}
	printf(" e o anterior/igual primo eh %d\n", x);
	system("pause");
}
