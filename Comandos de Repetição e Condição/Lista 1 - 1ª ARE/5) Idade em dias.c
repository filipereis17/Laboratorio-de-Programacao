/* 5) Faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses e
dias e mostre-a expressa apenas em dias. */

#include<stdio.h>

main()
{
	int anos, meses, dias, idade_dias;
	
	printf("Informe a sua idade em anos, meses e dias. \n");
	scanf("%d", &anos);
	scanf("%d", &meses);
	scanf("%d", &dias);
	
	idade_dias = (anos * 365) + (meses * 30) + dias;
	
	printf("A sua idade em dias eh %d.\n", idade_dias);
	
	system("pause");
}
