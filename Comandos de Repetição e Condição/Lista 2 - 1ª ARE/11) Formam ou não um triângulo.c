/* 11) Elaborar um algoritmo que l� 3 valores a,b,c e verifica se eles formam ou n�o um
tri�ngulo. Supor que os valores lidos s�o inteiros e positivos. Caso os valores formem
um tri�ngulo, calcular e escrever a �rea deste tri�ngulo. Se n�o formam tri�ngulo
escrever os valores lidos. ( se a > b + c n�o formam tri�ngulo algum, se a � o maior). */

#include<stdio.h>

main()
{
	int a, b, c;
	
	printf("Digite o ladoo a do triangulo.\n");
	scanf("%d", &a);
	printf("Digite o numero b a do triangulo.\n");
	scanf("%d", &b);
	printf("Digite o numero c a do triangulo.\n");
	scanf("%d", &c);
	
	if (a > b + c)
	{
		printf("\nNao formam um triangulo.\n");
	}
	else
	{
		printf("\nFormam um triangulo.\n");
	}
	system("pause");
}
