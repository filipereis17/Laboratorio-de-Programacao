/* 2) Faça um algoritmo que leia três valores inteiros do teclado e imprima o menor e o
maior entre os três.*/

#include<stdio.h>

main()
{
	int x, y, z, maior, menor;
	printf("Informe o primeiro numero.\n");
	scanf("%d", &x);
	printf("Informe o segundo numero.\n");
	scanf("%d", &y);
	printf("Informe o terceiro numero.\n");
	scanf("%d", &z);
	if (x > y)
	{
		maior = x;
		menor = y;
	}
	else
	{
		maior = y;
		menor = x;
	}
	
	if (maior < z)
	{
		maior = z;
	}
	
	if (menor > z)
		menor = z;
	if (maior == menor)				//Verifica se os numeros x, y e z são iguais.
	{
		printf("Numeros iguais\n");	}
	else							//Se forem diferentes são imprimidos o maior e o menor número.
	{
		printf("O maior numero eh %d e o menor eh %d.\n", maior, menor);
	}
	system("pause");
}
