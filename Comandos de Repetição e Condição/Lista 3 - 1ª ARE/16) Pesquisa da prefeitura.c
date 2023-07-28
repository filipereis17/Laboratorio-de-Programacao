/* 16) A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando
dados sobre o salário e o número de filhos. A prefeitura deseja saber:
- a média do salário da população
- a média do número de filhos
- o maior salário
- a porcentagem de pessoas com salários até R$ 150.
O final da leitura de dados deve ser feita quando um salário negativo for digitado. */

#include<stdio.h>

main()
{
	float n_filhos, m_sal_pop=0, m_filhos=0, maior_sal=0, porc, salario, tot_pessoas = 0;
	
	printf("Qual o seu salario? ");
	scanf("%f", &salario);
	while(salario > 0)
	{
		
		printf("Quantos filhos vc possui? ");
		scanf("%f", &n_filhos);
		
		m_sal_pop = m_sal_pop + salario;
		m_filhos = m_filhos + n_filhos;
		tot_pessoas = tot_pessoas + 1;
		if(salario <= 150)
		{
			porc = porc + 1;
		}
		if(salario > maior_sal)
		{
			maior_sal = salario;
		}
		printf("Qual o seu salario? ");
		scanf("%f", &salario);
	}
	printf("O resultado da pesquisa foi: ");
	printf("\nMedia do salario da populacao: %.2f", m_sal_pop/tot_pessoas);
	printf("\nMedia do numero de filhos: %.2f", m_filhos/tot_pessoas);
	printf("\nMaior salario: %.2f", maior_sal);
	printf("\nPorcentagem de pessoas com salario ate 150: %.2f %\n", porc*100/tot_pessoas);
	
	system("pause");
}
