/* 15) Foi feita uma pesquisa de audi�ncia de canal de TV em v�rias casas de uma cidade,
em um determinado dia. Para cada casa consultada foi fornecido o n�mero do canal
(4,5,7,12) e o n�mero de pessoas que estavam assistindo �quele canal. Se a televis�o
estivesse desligada, nada era anotado, ou seja, essa casa n�o entrava na pesquisa. Fa�a
um programa que:
- Leia um n�mero indeterminado de dados (n�mero do canal e o n�mero de
pessoas que estavam assistindo)
- calcule e mostre a porcentagem de audi�ncia de cada canal 
A leitura de dados deve ser finalizada quando for digitado o canal 0. */

#include<stdio.h>

main()
{
	int pessoas, canal_n = 1, canal4 = 0, canal5 = 0, canal8 = 0, canal10 = 0, canal13 = 0, total = 0;

	while(canal_n != 0)
	{
		printf("Digite um dos canais (4, 5, 8, 10, 13): ");
		scanf("%d", &canal_n);
		
		if (canal_n != 0)
		{
			printf("Quantas pessoas estao assistindo o canal: ");
			scanf("%d", &pessoas);
			total = total + pessoas;
			if (canal_n == 4)
			{
				canal4 =  pessoas;
			}
			else 
			{
				if(canal_n == 5)
				{
					canal5 = pessoas;		
				}
				else
				{
					if(canal_n == 8)
					{
						canal8 = pessoas;
					}
					else
					{
						if(canal_n == 10)
						{
							canal10 = pessoas;
						}
						else
						{
							if(canal_n == 13)
							{
								canal13 = pessoas;
							}
							else
							{
								printf("Canal nao existe.\n");
								total = total - pessoas;
							}
						}
					}
				}
			}
		}
	}
	printf("Pocentagem de pessoas que estao assistindo os canais:\n");
	printf("Canal 4: %d\nCanal 5: %d\nCanal 8: %d\nCanal 10: %d\nCanal 13: %d\n", canal4*100/total, canal5*100/total, canal8*100/total, canal10*100/total, canal13*100/total);
	system("pause");
}
