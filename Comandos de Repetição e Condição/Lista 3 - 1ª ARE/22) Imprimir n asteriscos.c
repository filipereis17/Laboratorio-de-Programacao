/* 22) Fa�a um programa que pega um n�mero do teclado e imprime na tela esse n�mero de
aster�sticos. Ex: o usu�rio digita 7 e o programa imprime *******. */

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
