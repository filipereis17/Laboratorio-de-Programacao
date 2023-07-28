/* 5) Faça um algoritmo que imprima os 20 primeiros termos da série de fibonnacci:
A série é: 1,1,2,3,5,8,13... */

#include<stdio.h>

main()
{
	int n = 1, m = 1, i;
	printf("%d\n%d\n", n, m);

	for (i = 0; i < 18; i ++)
	{
		if (i % 2 == 0)
		{
			n = n + m;
			printf("%d\n", n);
		}
		else
		{
			m = m + n;
			printf("%d\n", m);
		}
	}
	system("pause");
}
