/* 3) Faça um algoritmo que calcule o salário líquido de um trabalhador. O salário
líquido recebe dois descontos:
a) desconto de 10% no valor do salário bruto
b) desconto de 5% em cima do restante do salário bruto.

O salário líquido deve ser impresso ao final.*/

#include<stdio.h>

main()
{
	float salario_bruto, salario_liquido;
	
	printf("Qual eh o salario bruto?\n");
	scanf("%f", &salario_bruto);
	
	salario_liquido = salario_bruto * 0.9;
	salario_liquido = salario_liquido * 0.95;
	
	printf("O salario liquido eh %2.f\n", salario_liquido);
	
	system("pause");
}
