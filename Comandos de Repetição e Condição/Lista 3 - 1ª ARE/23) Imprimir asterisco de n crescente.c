/* 23) Fa�a um programa que leia um n�mero N do teclado e imprima na tela uma figura
como no exemplo abaixo:
N = 3

Sa�da:
*
**
*** */

#include<stdio.h>

main()
{
	int n, i, aux=0;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &n);
	
	while(aux != n)
	{
		for (i = -1; i < aux; i++)
		{
			printf("*");
		}
		printf("\n");
		aux = aux + 1;
	}
	system("pause");
}

