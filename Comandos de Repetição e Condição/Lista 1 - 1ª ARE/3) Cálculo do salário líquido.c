/* 3) Fa�a um algoritmo que calcule o sal�rio l�quido de um trabalhador. O sal�rio
l�quido recebe dois descontos:
a) desconto de 10% no valor do sal�rio bruto
b) desconto de 5% em cima do restante do sal�rio bruto.

O sal�rio l�quido deve ser impresso ao final.*/

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
