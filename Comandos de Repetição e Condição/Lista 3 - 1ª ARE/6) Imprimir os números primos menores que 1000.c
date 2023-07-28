// 6) Faça um algoritmo que imprima os números primos menores que 1000.

#include<stdio.h>

main()
{
	int n, i, cont = 0;
	
	for(i = 1; i < 1000; i++)
	{
		n = i;
		while (n>0)
		{
			if (i % n == 0)
			{
				cont = cont + 1;
			}
		n = n - 1;	
		}
		if (cont == 2)
		{
			printf("%d\n", i);
		}
		cont = 0;
	}
		printf("\n");
	system("pause");
}
