#include<stdio.h>
#include<string.h>

typedef struct
{
	int mes_vencimento, qtde_estoque;
	char nome [50];
	float preco;
}Produto;
main()
{
	FILE *arq;
	
	Produto produto[10];
	int i, x, num, aux, qtde, k;
	char nome_produto[50];
	char frase[100];
	int j=0;
	float total_pagar,valor_recebido,troco, qtde2;
	int p;
	
	arq = fopen("Produtos.txt", "a");
	if(arq == NULL)
	{
		printf("O arquivo nao foi aberto\n");
		getchar();
		return 0;
	}
	else
		printf("O arquivo foi aberto\n");

		
	fscanf(arq, "%d", i);
	
	for(i=0; i<4; i++) //Numero de produtos a cadastrar. Exemplo cadastrar dois produtos
	{
		printf("Escolha uma opcao:\n(1) Cadastrar produto\n(2)Consultar Dados do Produto\n(3)Consultar produtos existentes no estoque\n");
		printf("(4)Consultar quantidade\n(5)Venda de produto\n(6)Sair\n");
		scanf("%d", &x);
		switch (x)
		{
			case 1:
			{
			
				printf("\n\nInforme o nome do produto: ");
				scanf("%s", &produto[i].nome);
				fprintf(arq, "%s\n", produto[i].nome);
				
				printf("\nInforme o mes de vencimento: ");
				scanf("%i", &produto[i].mes_vencimento);
				fprintf(arq, "%i\n", produto[i].mes_vencimento);

				printf("\nInforme a quantidade em estoque: ");
				scanf("%i", &produto[i].qtde_estoque);
				fprintf(arq, "%i\n", produto[i].qtde_estoque);

				printf("\nInforme o preco do produto: ");
				scanf("%f", &produto[i].preco);
				fprintf(arq, "%.2f\n", produto[i].preco);
				
				system("cls");
				fclose(arq);
				break;
			}
			case 2:
			{
				fclose(arq);
				arq = fopen("Produtos.txt", "r");
				j=0;
				
				while(fgets(frase, 100, arq) != NULL )
				{
					if (j % 4 == 0)	
					{
						printf("%i: %s", j/4, frase);
					}
					j++;
				}
				fclose(arq);
				fopen("Produtos.txt", "r");
				printf("\nDigite o numero do produto: ");
				scanf("%i", &num);
				system("cls");
				num=num*4;
				j=0;
				while(fgets(frase, 100, arq) != NULL )
				{
						if (j == num)
						{
							printf("\nProduto: ");
							printf("%s", frase);
						}
						else
						{
							if (j == num+1)
							{
								printf("Mes de vencimento: ");
								printf("%s", frase);
							}
							else
							{
								if ( j == num+2)
								{
									printf("Quantidade em estoque: ");
									printf("%s", frase);
								}							
								else
								{
									if(j == num+3)
									{
										printf("Preco: ");	
										printf("%s", frase);
									}
								}
							}
						}
					j++;			
				}		
				system("pause");
				system("cls");
				i--;
				fclose(arq);
				break;
			}	
			case 3:
			{
				fclose(arq);
				fopen("Produtos.txt", "r");
				j=0;
				system("cls");
				printf("Produtos dispoíveis no estoque\n");
				while(fgets(frase, 100, arq) != NULL )
				{
					if (j % 4 == 0)	
					{
						printf("%i: %s", j/4, frase);
					}
					j++;
				}
				fclose(arq);
				i--;
				system("pause");
				system("cls");
				break;
			}	
			case 4:
			{
				fclose(arq);
				fopen("Produtos.txt", "r");
				
				
				while(fgets(frase, 100, arq) != NULL )
				{
					if (j % 4 == 0)	
					{
						printf("%i: %s", j/4, frase);
					}
					j++;
				}
				fclose(arq);
				fopen("Produtos.txt", "r");
				printf("\nDigite o numero do produto: ");
				scanf("%i", &num);
				num=num*4;
				j=0;
				while(fgets(frase, 100, arq) != NULL )
				{
						if (j == num)
						{
							printf("\nProduto: ");
							printf("%s", frase);
						}
						else
						{							
							if ( j == num+2)
							{
								printf("Quantidade em estoque: ");
								printf("%s", frase);
							}												
						}
					j++;			
				}		
				system("pause");
				system("cls");
				i--;
				fclose(arq);
				break;
			}	
			case 5:
			{
				system("cls");
				fclose(arq);
				fopen("Produtos.txt","r");
				
				
				for(j=0; j<4; j++) //Armazena todas as informações de todos os produtos
				{
					k=0;
					while(k<4)
					{
						if(k%4==0)
						{
							fscanf(arq,"%s",&produto[j].nome);
							printf("(%i): %s\n", j, produto[j].nome);
							
						}
						else
						{
							if(k%4==1)
							{
								fscanf(arq,"%i", &produto[j].mes_vencimento);
							}
							else
							{
								if(k%4==2)
								{
									fscanf(arq,"%i",&produto[j].qtde_estoque);
								}
								else
								{
									if(k%4==3)
									{
										fscanf(arq,"%f",&produto[j].preco);
									}
									
								}
							}
						}
						k++;
					}
				
				}

				printf("\nDigite o numero do produto: ");
				scanf("%i",&p);
				
				printf("\nDigite a quantidade: ");
				scanf("%f",&qtde2);
				total_pagar = qtde2 * produto[p].preco;
				printf("\nTotal: %.2f", total_pagar);
				
				printf("\nDigite o valor recebido: ");
				scanf("%f",&valor_recebido);
				
				troco = valor_recebido - total_pagar;
				printf("\nTroco: %.2f\n\n", troco);
				produto[p].qtde_estoque = produto[p].qtde_estoque - qtde2;
				system("pause");
				system("cls");
				fclose(arq);
				arq = fopen("Produtos.txt","w");
				j=0;
				while(j < 4)
				{
					if(produto[j].qtde_estoque > 0)
					{
						fprintf(arq, "%s\n", produto[j].nome);
						fprintf(arq, "%i\n", produto[j].mes_vencimento);
						fprintf(arq, "%i\n", produto[j].qtde_estoque);
						fprintf(arq, "%2.f\n", produto[j].preco);
					}
						j++;
				}
				fclose(arq);
				i--;
				break;
			}
			
			case 6:
			{
				fclose(arq);
				getchar();
				return 0;
			}
		}
	}

	fclose(arq);
	system("pause");
}	
