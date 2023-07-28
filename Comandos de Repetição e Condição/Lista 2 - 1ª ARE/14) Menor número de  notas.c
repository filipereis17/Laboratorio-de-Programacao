/* 14) Escrever um algoritmo que lê um valor em reais e calcula qual o menor número
possível de notas de 100, 50, 10, 5 e 1 em que o valor lido pode ser decomposto.
Escrever o valor lido e a relação de notas necessárias. */

#include<stdio.h>
#include<stdlib.h>

main()
{
	int nota100 = 0, nota50 = 0, nota10 = 0, nota5 = 0, nota_reais;
	
	printf("Informe o valor em reais. \n");
	scanf("%d", &nota_reais);
	
	while (nota_reais >= 100)
	{
		nota_reais = nota_reais - 100;
		nota100 = nota100 + 1;
	}
	
	printf("O menor possivel de notas eh:\n%d notas de 100; ", nota100);
	
	while (nota_reais >= 50)
	{
		nota_reais = nota_reais - 50;
		nota50 = nota50 + 1;
	}
	printf("\n%d notas de 50; ", nota50);
	
	while (nota_reais >= 10)
	{
		nota_reais = nota_reais - 10;
		nota10 = nota10 + 1;
	}
	printf("\n%d notas de 10; ", nota10);
	
	while (nota_reais >= 5)
	{
		nota_reais = nota_reais - 5;
		nota5 = nota5 + 1;
	}
	
	printf("\n%d notas de 5; \n%d notas de 1. \n", nota5, nota_reais);
		
	system("pause");
}
