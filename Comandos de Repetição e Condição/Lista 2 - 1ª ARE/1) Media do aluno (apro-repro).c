/* 1) Fa�a um programa que calcule a m�dia aritm�tica das 3 notas de um aluno e
mostre, al�m do valor da m�dia, uma mensagem de "Aprovado", caso a m�dia seja
igual ou superior a 6, ou a mensagem "reprovado", caso contr�rio.*/

#include<stdio.h>

main()
{
	float nota, media = 0;
	int i;
	
	for (i = 1; i < 4; i++) {
		printf("Informe a nota %d. \n", i);
		scanf("%f", &nota);
		media = media + nota;
	}
	media = media / 3;
	if (media >= 6)
	{
		printf("Sua media eh %.2f. Aluno aprovado.\n", media);
	}
	else
	{
		printf("Sua media eh %.2f. Aluno reprovado.\n", media);
	}
	system("pause");
}
