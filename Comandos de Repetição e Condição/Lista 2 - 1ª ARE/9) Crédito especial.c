/* 9) Um banco conceder� um cr�dito especial aos seus clientes, vari�vel com o saldo
m�dio no �ltimo ano. Fa�a um algoritmo que leia o saldo m�dio de um cliente e
calcule o valor do cr�dito de acordo com a tabela abaixo. Mostre uma mensagem
informando o saldo m�dio e o valor do cr�dito. (use o comando caso-de e n�o fa�a
repeti��es)

Saldo m�dio              Percentual
De 0 a 200             Nenhum cr�dito
De 201 a 400     20% do valor do saldo m�dio
De 401 a 600     30% do valor do saldo m�dio
Acima de 601     40% do valor do saldo m�dio */

#include<stdio.h>

main()
{
	float val_credito, saldo_medio;
	int aux;
	
	printf("Qual o foi o saldo medio do cliente.\n");
	scanf("%f", &saldo_medio);
	
	if (saldo_medio <= 200)
	{
		aux = 1;
	}
	else
	{
		if (saldo_medio <= 400)
		{
			aux = 2;
		}
		else
		{
			if(saldo_medio <= 600)
			{
				aux = 3;
			}
			else
			{
				aux = 4;
			}
		}
		
	}
	
	switch (aux)
	{
		case 1:
			val_credito = 0;
		break;
		case 2:
			val_credito = saldo_medio * 0.2;
		break;
		case 3:
			val_credito = saldo_medio * 0.3;
		break;
		default:
		val_credito = saldo_medio * 0.4;
	}
	
	printf("Seu saldo medio eh %.2f e o valor de credito eh %.2f \n", saldo_medio, val_credito);
	system("pause");
}
