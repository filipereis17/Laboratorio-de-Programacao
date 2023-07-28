/* 18) Criar um algoritmo em C que leia o n�mero correspondente ao m�s atual e os
d�gitos (somente os quatro n�meros) de uma placa de ve�culo, e atrav�s do n�mero
finalizador da placa (algarismo da casa das unidades) determine se o IPVA do ve�culo
vence no m�s corrente.
Final 1 � m�s (1) - Janeiro            Final 6 � M�s (6) - Junho
Final 2 � M�s (2) - Fevereiro          Final 7 � M�s (7) - Julho
Final 3 � M�s (3) - mar�o              Final 8 � M�s (8) - Agosto
Final 4 � M�s (4) - Abril              Final 9 � M�s (9) - Setembro
Final 5 � M�s (5) - Maio               Final 10 � M�s (10) - Outubro */

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
