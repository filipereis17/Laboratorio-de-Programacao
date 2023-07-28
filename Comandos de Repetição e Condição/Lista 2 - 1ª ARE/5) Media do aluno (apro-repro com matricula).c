/* 5) Escreva um algoritmo que leia o código de um aluno e suas três notas. Calcule a
média ponderada do aluno, considerando que o peso para a maior nota seja 4 e para
as duas restantes, 3. Mostre o código do aluno, suas três notas, a média calculada e
uma mensagem "APROVADO" se a média for maior ou igual a 5 e "REPROVADO" se
a média for menor que 5. */

#include<stdio.h>

main()
{
	float nota1, nota2, nota3, aux_maior, aux_menor, media = 0;
	char codigo [15];
	
	printf("Insira o codigo do aluno.\n");
	scanf("%s", &codigo);
		
	printf("Informe a primeira nota.\n");
	scanf("%f", &nota1);
	printf("Informe a segunda nota.\n");
	scanf("%f", &nota2);
	printf("Informe a terceira nota.\n");
	scanf("%f", &nota3);
		
	if (nota1 > nota2)
	{
		aux_maior = nota1;
		aux_menor = nota2 * 3; 
	}
	else
	{
		aux_maior = nota2;
		aux_menor = nota1 * 3;
	}
	
	if (aux_maior > nota3)
	{
		nota3 =  nota3 * 3;
		aux_maior = aux_maior * 4;
	}
	else
	{
		nota3 = nota3 * 4;
		aux_maior = aux_maior * 3;
	}

	media = (aux_maior + aux_menor + nota3) / 10;
	
	if (media >= 5)
	{
		printf("O aluno do codigo %s tem media de %.2f. Aluno aprovado.\n", codigo, media);
	}
	else
	{
		printf("O aluno do codigo %s tem media de %.2f. Aluno reprovado.\n", codigo, media);
	}
	system("pause");
}
