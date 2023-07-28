/* 4) Elabore um algoritmo que dada a idade de um nadador classifica-o em uma das
seguintes categorias:
infantil A = 5 - 7 anos
infantil B = 8-10 anos
juvenil A = 11-13 anos
juvenil B = 14-17 anos
adulto = maiores de 18 anos */

#include<stdio.h>

main()
{
	int idade;
	printf("Digite a sua idade.\n");
	scanf("%d", &idade);
		
	if (idade >= 5 && idade <= 7)
	{
		printf("\nVoce eh um nadador(a) da categoria infantil A.\n");
	}
	else
	{
		if (idade <= 10)
		{
			printf("\nVoce eh um nadador(a) da categoria infantil B.\n");
		}
		else
		{
			if (idade <= 13)
			{
				printf("\nVoce eh um nadador(a) da categoria juvenil A.\n");
			}
			else
			{	if (idade <= 17)
				{
					printf("\nVoce eh um nadador(a) da categoria juvenil B.\n");
				}
				else
				{
					printf("\nVoce eh um nadador(a) da categoria adulto.\n");
				}
			}
		}
		
	}	
	system("pause");
}
