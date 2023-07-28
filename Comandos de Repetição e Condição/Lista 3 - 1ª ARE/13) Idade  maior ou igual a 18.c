/* 13) Faça um programa que receba a idade de dez pessoas e que calcule e imprima a
quantidade de pessoas com idade maior ou igual a 18 anos. */

#include<stdio.h>

main()
{
	int idade, m_ou_18 = 0, pessoas=1;
	
	while (pessoas < 11)
	{
		printf("Digite a %da idade: ", pessoas);
		scanf("%d", &idade);
		if (idade >= 18)
		m_ou_18 = m_ou_18 + 1;
		pessoas = pessoas + 1;
	}
	printf("\n%d pessoa(s) possui(em) idade maior ou igual a 18 anos.\n", m_ou_18);
	system("pause");
}
