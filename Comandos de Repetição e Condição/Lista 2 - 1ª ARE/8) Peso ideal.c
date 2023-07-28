/* 8) Tendo como dados de entrada a altura e o sexo de uma pessoa (?M? masculino
e ?F? feminino), construa um algoritmo que calcule seu peso ideal, utilizando as
seguintesfórmulas:
- para homens: (72.7*h)-58
- para mulheres: (62.1*h)-44.7 */

#include<stdio.h>

main()
{
	float altura, peso_ideal;
	int sexo;
	
	printf("Qual a sua altura em metros.\n");
	scanf("%f", &altura);
	printf("Qual eh o seu sexo? (1) para masculino e (2) para feminino.\n");
	scanf("%d", &sexo);
	
	if (sexo < 1 || sexo > 2)
	{
		printf("Opcao invalida.\n");
	}
	else
	{
		if (sexo == 1)
		{
			peso_ideal = (72.7 * altura) - 58;
			printf("Seu peso ideal eh %f Kg.\n", peso_ideal);
		}
		else
		
		{
			peso_ideal = (62.1 * altura) - 44.7;
	 		printf("Seu peso ideal eh %f Kg.\n", peso_ideal);
		}
	}
	
		
	system("pause");
}

