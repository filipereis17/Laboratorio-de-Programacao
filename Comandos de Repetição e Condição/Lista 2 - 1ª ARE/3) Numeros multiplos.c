/* 3) Elaborar um algoritmo que l� 2 valores a e b e os escreve com a mensagem: "S�o
m�ltiplos" ou "N�o s�o m�ltiplos". */

#include<stdio.h>

main()
{
	int A, B;
	printf("Digite um numero.\n");
	scanf("%d", &A);
	printf("\nDigite outro numero.\n");
	scanf("%d", &B);
	
	if (A % B == 0)
	{
		printf("\nNumeros sao multiplos.\n");
	}
	else
	{
		if (B % A == 0)
		{
			printf("\nSao multiplos.\n");
		}
		else
		{
			printf("\nNao sao multiplos.\n");
		}
	}	
	system("pause");
}
