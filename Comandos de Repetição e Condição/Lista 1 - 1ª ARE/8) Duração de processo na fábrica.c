/* 8) Faça um algoritmo que leia o tempo de duração de um evento em uma fábrica
expressa em segundos e mostre-o expresso em horas, minutos e segundos. */

#include<stdio.h>
#include<stdlib.h>

main()
{
	int horas = 0, minutos = 0, segundos;
	
	printf("Informe a o tempo de duracao de um evento na fabrica em segundos. \n");
	scanf("%d", &segundos);
	
	while (segundos >= 3600)
	{
		segundos = segundos - 3600;
		horas = horas + 1;
	}
	
	printf("A duracao foi de %d horas, ", horas);
	
	while (segundos >= 60)
	{
		segundos = segundos - 60;
		minutos = minutos + 1;
	}
	printf("%d minutos e %d segundos.\n", minutos, segundos);
	
	system("pause");
}
