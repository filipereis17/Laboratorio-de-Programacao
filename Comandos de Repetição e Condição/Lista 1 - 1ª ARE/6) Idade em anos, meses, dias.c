/* 6) Faça um algoritmo que leia a idade de uma pessoa expressa em dias e mostre-a
expressa em anos, meses e dias. */

#include<stdio.h>
#include<stdlib.h>

main()
{
	int anos = 0, meses = 0, idade_dias;
	
	printf("Informe a sua idade em dias. \n");
	scanf("%d", &idade_dias);
	
	while (idade_dias >= 365)
	{
		idade_dias = idade_dias - 365;
		anos = anos + 1;
	}
	
	printf("Voce tem %d anos, ", anos);
	
	while (idade_dias >= 30)
	{
		idade_dias = idade_dias - 30;
		meses = meses + 1;
	}
	printf("%d meses e %d dias de idade.\n", meses, idade_dias);
	
	system("pause");
}
