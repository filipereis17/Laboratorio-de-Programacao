// 1) Fa�a um algoritmo que imprima todos os n�meros de 100 a 1 (decrescente).

#include<stdio.h>

main()
{
	int n = 100;
	
	while (n>0)
	{
		printf("%d\n", n);
		n = n - 1;	
	}
	system("pause");
}
