/* 7) Faça um algoritmo que leia as 3 notas de um aluno e calcule a média final deste
aluno. Considerar que a média é ponderada e que o peso das notas é: 2,3 e 5,
respectivamente. */

#include<stdio.h>

main()
{
	float nota1, nota2, nota3, media=0;
	
	printf("Informe a primeira nota.\n");
	scanf("%f", &nota1);
	nota1 = nota1 * 2;
	
	printf("Informe a segunda nota.\n");
	scanf("%f", &nota2);
	nota2 = nota2 * 3;
	
	printf("Informe a terceira nota.\n");
	scanf("%f", &nota3);
	nota3 = nota3 * 5;
	
	media = (nota1 + nota2 + nota3) / 10;
	
	printf("A media do aluno eh %.2f\n", media);
	
	system("pause");
}
