/* 14) Faça um algoritmo que receba a idade e o sexo de 7 pessoas e que calcule e imprima:
a. a idade média do grupo
b. a idade média das mulheres
c. a idade média dos homens */

#include<stdio.h>

#include<stdio.h>

main()
{
	float idade, m_grupo=0, m_mul=0, m_hom=0, q_mul, q_hom;
	int pessoas=1, sexo;
	while (pessoas < 8)
	{
		while (sexo < 1 || sexo > 2)
		{
			printf("Digite o sexo da %da pessoa: (1) Masculino (2) Feminino: ", pessoas);
			scanf("%d", &sexo);
		}
		printf("Digite a idade da %da pessoa: ", pessoas);
		scanf("%f", &idade);
		if (sexo == 1)
		{
			m_hom = m_hom + idade;
			q_hom = q_hom + 1;
		}
		else
		{
			m_mul = m_mul + idade;
			q_mul = q_mul + 1;
		}
		m_grupo = m_grupo + idade;
		pessoas = pessoas + 1;
		sexo = 0;
	}
	m_grupo = m_grupo/7;
	m_mul = m_mul / q_mul;
	m_hom = m_hom / q_hom;
	
	printf("\nMedia da idade do grupo: %.2f\n", m_grupo);
	printf("Media da idade das mulheres: %.2f\n", m_mul);
	printf("Media da idade dos homens: %.2f\n", m_hom);
	
	system("pause");
}
