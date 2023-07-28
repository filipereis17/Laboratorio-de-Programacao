#include<stdio.h>
#include<string.h>

int maior_publico (int publico, int j, int m_publico_camp) //Funcao para imprimir o maior publico do campeonato
{
	if (j == 3)
	{
		printf("\n\n\nO maior publico do campeonato foi %d pessoas.\n", m_publico_camp);
	}
	return publico;
}
int total_pontos1 (int placarTA, int placarTB) //Funcao para atribuicao de pontos para o time A
{
	if (placarTA > placarTB)
	{
		return 3;
	}
	else
	{
		if (placarTA == placarTB)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
}
int total_pontos2 (int placarTA, int placarTB) //Funcao para atribuicao de pontos para o time B
{
	if (placarTB > placarTA)
	{
		return 3;
	}
	else
	{
		if (placarTA == placarTB)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
}
int time_antigo (int ano, int mes, int dias, int dia) //Funcao para calcular a idade dos times
{
	ano = 2015 - ano;
	mes = 12 - mes;
	dia = 31 - dia;
	dias = ano * 365 + mes * 30 + dia; //Calcula a idade aproximada dos times
	return dias;	
}
int time_m_publico (int publico)	//Funcao para verificar o time que mais atriu publico
{
	return publico;
}
typedef struct	//Registro do Tipo Time
{
	int codigo, pontos, total_dias, publico;
	char nome[50];
}Time;
typedef struct //Registro do  tipo Partida
{
	Time TimeA, TimeB;
	int placarTA, placarTB, publico;
}Partida;
typedef struct //Registro do Tipo Data
{
	int dia, mes, ano;
}Data;

main()
{
	int i, j, aux_1=0, aux_2=0, m_publico_camp=0, publico, pontos, placarTA, placarTB, dia, mes, ano;
	int dias, k, l, m, x, y, placarA, placarB;
	Time time[21]; 			//vetor de 20 times + 1 posicao de auxiliar
	Partida p_realizadas[4]; //Mudancas de acordo com numero de partidas
	char campeao[50], time_mais_antigo[50];
	Data data_fundacao[21]; //Tipo para aceitar apenas datas validas
	
	printf("Campeonato Brasileiro 2015\n\n");
	for (i=0; i<2; i++) 	////Mudancas de acordo com o numero de times
	{
		printf ("\nDigite o nome do %do time: ", i+1);
		gets(time[i].nome);
		data_fundacao[i].dia=data_fundacao[i].mes=data_fundacao[i].ano = 0;
		while (data_fundacao[i].dia == 0)
		{
			printf ("Digite a data de fundacao do time, separada por espacos: ");
			scanf ("%d%d%d",&data_fundacao[i].dia, &data_fundacao[i].mes, &data_fundacao[i].ano);
			if (data_fundacao[i].ano < 1799 || data_fundacao[i].ano > 2015)  //Linha 94 a Linha 163 testa data, ate que seja valida
			{
				data_fundacao[i].dia = 0;
				printf("\nInvalido\n");				
			}
			else
			{
				if (data_fundacao[i].mes < 1 || data_fundacao[i].mes > 12)
				{	data_fundacao[i].dia = 0;
					printf("Invalido\n");
				}
				else
				{
					if (data_fundacao[i].mes == 1 ||data_fundacao[i].mes == 3)
					{
						if (data_fundacao[i].dia < 1 || data_fundacao[i].dia > 31)
							data_fundacao[i].dia = 0;
					}
					else
					{
						if (data_fundacao[i].mes==5||data_fundacao[i].mes==7)
						{
							if (data_fundacao[i].dia < 1 || data_fundacao[i].dia > 31)
								data_fundacao[i].dia = 0;
						}
						else
						{
							if (data_fundacao[i].mes==8||data_fundacao[i].mes==10||data_fundacao[i].mes==12)
							{
								if (data_fundacao[i].dia < 1 || data_fundacao[i].dia > 31)
									data_fundacao[i].dia = 0;
							}
							else
							{
							if (data_fundacao[i].mes == 12)
							{
								if (data_fundacao[i].dia < 1 || data_fundacao[i].dia > 31)
									data_fundacao[i].dia = 0;	
							}
							else
							{
								if (data_fundacao[i].mes == 2)
								{
									if (data_fundacao[i].ano % 4 == 0)
									{
										if (data_fundacao[i].dia < 1 || data_fundacao[i].dia > 29)
										{
											data_fundacao[i].dia = 0;
										}
									}
									else
									{
										if (data_fundacao[i].dia < 1 || data_fundacao[i].dia > 28)
										{
											if (data_fundacao[i].dia == 29)
												printf("\nAno nao e bissexto. ");
											data_fundacao[i].dia = 0;
										}
									}
								}
								else
								{
									if (data_fundacao[i].dia < 0 || data_fundacao[i].dia > 30)
										data_fundacao[i].dia = 0;
								}
							}
						}
						printf("Invalido\n");				
					}
				}
				
			}
		}
		
	}
		time[i].codigo = i; //Cada time recebe um codigo, sendo de 0 a 19, de acordo com a qtde de times
		printf("O codigo do %s eh %d.\n\n", time[i].nome, time[i].codigo);
		
		dia = data_fundacao[i].dia;
		mes = data_fundacao[i].mes;
		ano = data_fundacao[i].ano;
		time[i].total_dias = time_antigo(ano, mes, dias, dia); //A variavel "time[i].total_dias" recebe a "idade" do time
		
		fflush(stdin);
	}
	system("pause");
	system("cls");
	 
	for (i=-1; i<20; i++)	//Atribuir valor 0, para a comparacao a seguir. A posicao -1 servira para que a pos 0 entre no laco
	{
		time[i].pontos = 0;
		time[i].publico = 0;
	}
	for (j=1; j<3; j++)    //Mudancas de acordo com numero de partidas. Se qtde = 5, j=6
	{	
		printf("Digite o codigo dos times da %da partida.\n", j);
		while (aux_1 == aux_2)
		{
			printf("\n");
			for(i=0; i<2; i++)  //Mudancas de acordo com numero de times
				printf("%d = %s\n", time[i].codigo, time[i].nome);
			
			printf("Digite o codigo time A: ");
			scanf("%d", &i);
			p_realizadas[j].TimeA = time[i];
			aux_1 = i;
			
			printf("Digite o codigo time B: ");
			scanf("%d", &i);	
			p_realizadas[j].TimeB = time[i];
			aux_2 = i;
			
			if (aux_1<0 || aux_1>1)  //Mudancas de acordo com numero de times
			  	aux_1 = aux_2;
			if (aux_2<0 || aux_2>1)  //Mudancas de acordo com numero de times
			    aux_1 = aux_2;
			    
			system("cls");
		}
		printf("Digite o placar da partida entre %s e %s, separado por espaço\n",p_realizadas[j].TimeA.nome,p_realizadas[j].TimeB.nome);
		scanf("%d%d", &placarTA, &placarTB);
		time[aux_1].pontos += total_pontos1(placarTA, placarTB);
		time[aux_2].pontos += total_pontos2(placarTA, placarTB);
		
		printf("Digite o publico da partida entre %s e %s: ", p_realizadas[j].TimeA.nome, p_realizadas[j].TimeB.nome);
		scanf("%d", &publico);
		time[aux_1].publico += time_m_publico (publico);
		if (publico > m_publico_camp)
		{
			m_publico_camp =  maior_publico (publico, j, m_publico_camp);
			x = aux_1;
			y = aux_2;
			placarA = placarTA;
			placarB = placarTB;
		}
		
		aux_2 = aux_1; //No proximo loop, entrara novamente no while da linha 185
		system("cls");
	}
	fflush(stdin);
	l = -1;
	k = -1;
	m = -1;
	time[k].total_dias = 0;
	time[m].publico = 0;
	
	printf("A pontuacao dos times do campeonato ficou assim:\n");
	for (i=0; i<2; i++)  //Mudancas de acordo com o numero de times
	{
		if (time[i].pontos > time[l].pontos)
		{
			l=i;
		}
		if (time[i].total_dias > time[k].total_dias)
		{
			k=i;
		}
		if(time[i].publico > time[m].publico)
			m = i; 
		printf("\n%s: %d ponto(s)", time[i].nome, time[i].pontos);
	}

	m_publico_camp =  maior_publico (publico, j, m_publico_camp);
	printf("Na partida %s %dx%d %s.",time[x].nome, placarA, placarB, time[y].nome);
	printf("\n\nO time mais antigo eh %s.\n", time[k].nome);
	printf("\nO time mais atraiu publico foi %s.\n", time[m].nome);
	printf("\nO campeao brasileiro 2015 eh o %s.\n", time[l].nome);	
}
