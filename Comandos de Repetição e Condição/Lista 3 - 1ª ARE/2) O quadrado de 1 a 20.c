// 2) Faça um algoritmo que imprima o quadrado de cada número de 1 a 20.

#include<stdio.h>

main()
{
	int n = 1;
	
	while (n<21)
	{
		printf("O quadrado de %d eh: %d\n", n, (n*n));
		n = n + 1;
	}
	system("pause");
}
