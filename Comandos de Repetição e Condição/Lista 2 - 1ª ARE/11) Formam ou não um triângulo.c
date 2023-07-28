/* 11) Elaborar um algoritmo que lê 3 valores a,b,c e verifica se eles formam ou não um
triângulo. Supor que os valores lidos são inteiros e positivos. Caso os valores formem
um triângulo, calcular e escrever a área deste triângulo. Se não formam triângulo
escrever os valores lidos. ( se a > b + c não formam triângulo algum, se a é o maior). */

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
