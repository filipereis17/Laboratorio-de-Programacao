/* 12) Escrever um algoritmo que lê a hora de início de um jogo e a hora do final do jogo
(considerando apenas horas inteiras) e calcula a duração do jogo em horas, sabendo
se que o tempo máximo de duração do jogo é de 24 horas e que o jogo pode iniciar
em um dia e terminar no dia seguinte. */

#include<stdio.h>

main()
{
	int h_inicio, h_final, duracao;
	
	printf("Qual o horario de inicio do jogo?\n");
	scanf("%d", &h_inicio);
	printf("Qual o horario do fim do jogo?\n");
	scanf("%d", &h_final);
	
	duracao = h_final - h_inicio;
	if (duracao < 0)
	duracao = 24 + duracao;
	else
	{
		if(duracao == 0)
		{
			duracao = 24;
		}		
	}
	printf("A duracao do jogo foi de %d hora(s).\n", duracao);	
	system("pause");
}
