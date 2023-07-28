/* 16) Crie um programa que receba um inteiro, de 1 até 12, representando os meses do
ano e retorne o número de dias do mês. Use switch e não use break. Acumule os
case. */

#include<stdio.h>

main()
{
	int n_mes;
	
	printf("Digite o numero do mes. Ex: Para janeiro digite 1.\n");
	scanf("%d", &n_mes);
	printf("\n");
	
	while (n_mes < 1 || n_mes > 12)
	{
		printf("Invalido. Digite novamente.\n");
		system("pause");
		system("cls");
		printf("\nDigite o numero do mes. Ex: Para janeiro digite 1.\n");
		scanf("%d", &n_mes);
		printf("\n");
	}
	
	switch (n_mes)
	{
		case 1:
			printf("\nO mes 1 possui 31 dias.\n");
		case 2:
			printf("O mes 2 possui 28 ou 29 dias.\n");
		case 3:
			printf("O mes 3 possui 31 dias.\n");
		case 4:
			printf("O mes 4 possui 30 dias.\n");
		case 5:
			printf("O mes 5 possui 31 dias.\n");
		case 6:
			printf("O mes 6 possui 30 dias.\n");
		case 7:
			printf("O mes 7 possui 31 dias.\n");
		case 8:
			printf("O mes 8 possui 31 dias.\n");
		case 9:
			printf("O mes 9 possui 30 dias.\n");
		case 10:
			printf("O mes 10 possui 31 dias.\n");
		case 11:
			printf("O mes 11 possui 30 dias.\n");
		case 12:
			printf("O mes 12 possui 31 dias.\n");
		}
	system("pause");
}
