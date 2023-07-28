/* 18) Criar um algoritmo em C que leia o número correspondente ao mês atual e os
dígitos (somente os quatro números) de uma placa de veículo, e através do número
finalizador da placa (algarismo da casa das unidades) determine se o IPVA do veículo
vence no mês corrente.
Final 1 – mês (1) - Janeiro            Final 6 – Mês (6) - Junho
Final 2 – Mês (2) - Fevereiro          Final 7 – Mês (7) - Julho
Final 3 – Mês (3) - março              Final 8 – Mês (8) - Agosto
Final 4 – Mês (4) - Abril              Final 9 – Mês (9) - Setembro
Final 5 – Mês (5) - Maio               Final 10 – Mês (10) - Outubro */

#include <stdio.h>

main(void) 
{
	int placa = 0, mes, digito_unidade;
        
 	while (placa < 1 || placa >9999)
 	{
		printf("Digite o numero finalizador da placa: ");
      	scanf("%d", &placa);
    }
 
    while (mes < 0 || mes > 10) 
	{
    	printf("\nDigite o mes atual: ");
        scanf("%d", &mes);
	}

	digito_unidade = placa%10;
	    
	if (digito_unidade == mes%10)
	{
    	printf("\nO IPVA do veiculo vence nesse mes.\n");
    }
	else
	{
    	printf("\nO IPVA do veiculo nao vence nesse mes.\n");
    }
}
