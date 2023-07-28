/* 22) Faça um programa que pega um número do teclado e imprime na tela esse número de
asterísticos. Ex: o usuário digita 7 e o programa imprime *******. */

#include<stdio.h>

main()
{
	int n, i;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		printf("*");
	}
	printf("\n");
	system("pause");
}
