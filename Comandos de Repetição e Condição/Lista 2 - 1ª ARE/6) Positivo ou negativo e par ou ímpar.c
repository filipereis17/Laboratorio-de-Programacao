/* 6) Faça um algoritmo que leia um no inteiro e mostre uma mensagem indicando se
este número é par ou ímpar, e se é positivo ou negativo. */

#include<stdio.h>

main()
{
	int n = 0;	
	
	while (n == 0)
	{
		printf("Digite um numero inteiro diferente de zero.\n");
		scanf("%d", &n);
	}
	
	if (2 % n == 0)
	{
		printf("O numero eh par e ");
	}
	else
	{
		printf("O numero eh impar e ");
	}
	
	if (n > 0)
	{
		printf("positivo.\n");
	}
	else
	{
		printf("negativo.\n");
	}
	
	system("pause");
}
