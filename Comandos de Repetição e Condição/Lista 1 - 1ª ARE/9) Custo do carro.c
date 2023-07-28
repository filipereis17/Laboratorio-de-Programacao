/* 9) O custo ao consumidor de um carro novo é a soma do custo de fábrica com a
percentagem do distribuidor e dos impostos (aplicados ao custo de fábrica). Supondo
que a percentagem do distribuidor seja de 28% e os impostos de 45%, escrever um
algoritmo que leia o custo de fábrica de um carro e escreva o custo ao consumidor. */

#include<stdio.h>

main()
{
	float valor_carro, impostos, por_distribuidor, preco_fabrica;
	
	printf("Qual eh o preco de fabrica do carro?\n");
	scanf("%f", &preco_fabrica);
	
	impostos = preco_fabrica * 0.28;
	por_distribuidor = preco_fabrica * 0.45;
	valor_carro = preco_fabrica + impostos + por_distribuidor;
	
	printf("O custo total de um carro novo ao consumidor eh R$ %.2f.\n", valor_carro);
	system("pause");
}
