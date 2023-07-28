/* 13) Escrever um algoritmo que lê um conjunto de 4 valores i, a, b, c, onde i é um valor
inteiro e positivo e a, b, c, são quaisquer valores reais e os escreva. A seguir:
a) Se i=1 escrever os três valores a, b, c em ordem crescente.
b) Se i=2 escrever os três valores a, b, c em ordem decrescente.
c) Se i=3 escrever os três valores a, b, c de forma que o maior entre a, b, c fique
dentre os dois. */

#include<stdio.h>

main()
{
	int a, b, c, i, aux_maior, aux_menor, aux_medio, aux;
	
	printf("Digite o valor a.\n");
	scanf("%d", &a);
	printf("Digite o valor b.\n");
	scanf("%d", &b);
	printf("Digite o valor c.\n");
	scanf("%d", &c);
	printf("Digite o valor de i de 1 a 3.\n");
	scanf("%d", &i);

	if (a > b)
	{
		aux_maior = a;
		aux_menor = b; 
	}
	else
	{
		aux_maior = b;
		aux_menor = a;
	}
	
	if (aux_maior < c)
	{
		aux = aux_maior;
		aux_maior = c;
		aux_medio =  aux;
	}
	else
	{
		if (aux_menor > c)
		{
			aux_medio = aux_menor;
			aux_menor = c;
		}
		else
		{
			aux_medio = c;
		}
	}
	
	switch(i)
	{
		case 1:
			printf("\n%d, %d, %d\n", aux_menor, aux_medio, aux_maior);
		break;
		case 2:
			printf("\n%d, %d, %d\n", aux_maior, aux_medio, aux_menor);
		break;
		default:
			printf("%d, %d, %d\n", aux_medio, aux_maior, aux_menor);
	}
	system("pause");
}
