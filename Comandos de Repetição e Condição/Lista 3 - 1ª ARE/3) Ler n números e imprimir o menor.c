/* 3) Faça um algoritmo que leia um num, depois leia num números e imprime o menor
deles. */

#include<stdio.h>

main()
{
	int n, i, j = 1, menor = 1000000;
	
	printf("Quantos numeros deseja comparar?\n");
	scanf("%d", &n);
	
	
	while (n>0)
	{		
		printf("\nDigite o %do numero e tecle Enter. \n", j );
		scanf("%d", &i);
		j = j + 1;
		if (menor > i)
		{
			menor = i;
		}
		n = n - 1;
	}
	printf("\nO menor numero eh %d\n", menor);
	system("pause");
}
