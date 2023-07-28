// 12) Faça um algoritmo que mostre as tabuadas dos números de 1 a 10.

#include<stdio.h>

main()
{
	int n=0, sub, div, x=1;
	
	while (n > 10 || n < 1)
	{
		printf("Escolha um numero de 1 a 10: ");
		scanf("%d", &n);
	}
	
	printf("\n\t\t\tTabuada do %d\n\n", n);
	sub = n;
	div = n;

	while (x<11)
	{
		printf("%d x %d = %d\t", n, x, x*n);
		printf("%d + %d = %d\t", n, x, x+n);
		printf("%d - %d = %d\t", sub, n, sub-n);
		sub=sub+1;
		printf("%d / %d = %d\n", div, n, div/n);
		div = div + n;
		x = x + 1;
		
	}
	system("pause");
}

