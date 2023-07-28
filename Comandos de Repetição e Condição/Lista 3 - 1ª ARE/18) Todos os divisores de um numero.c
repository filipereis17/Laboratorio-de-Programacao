// 18) Escreva um algoritmo que determine todos os divisores de um número.

#include<stdio.h>

main()
{
	int n, c;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &n);
	
	printf("Os divisores sao: ");
	
	for (c=1; c<n+1; c++)
	{
		if (n % c == 0)
			printf("\n%d", c);
	}
	printf("\n");
	system("pause");
}
