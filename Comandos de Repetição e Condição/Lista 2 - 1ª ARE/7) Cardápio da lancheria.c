/* 7) O card�pio de uma lancheria � o seguinte:
Especifica��o   C�digo  Pre�o
Cachorro quente  100    1,20
Bauru simples    101    1,30
Bauru com ovo    102    1,30
Hamburger        103    1.20
Cheeseburger     104    1,30
Refrigerante     105    1,00
Escrever um algoritmo que leia o c�digo do item pedido, a quantidade e calcule o
valor a ser pago por aquele lanche. Considere que a cada execu��o somente ser�
calculado um item. */

#include<stdio.h>

main()
{
	int codigo, quant;
	float preco, total;
	
	printf("Digite o codigo do lanche desejado.\nCachorro quente  100    1,20\nBauru simples    101    1,30\nBauru com ovo    102    1,30\n");
	printf("Hamburger        103    1.20\nCheeseburger     104    1,30\nRefrigerante     105    1,00\n\n");
	scanf("%d", &codigo);
	
	if (codigo > 99 && codigo < 106)
	{
		switch(codigo)
		{
			case 100:
				preco = 1.2;
			break;
			case 101:
				preco = 1.3;
			break;
			case 102:
				preco = 1.3;
			break;
			case 103:
				preco = 1.2;
			break;
			case 104:
				preco = 1.3;
			break;
			default:
				preco = 1;
		}
		
	printf("Informe a quantidade.\n");
	scanf("%d", &quant);
	total = preco * quant;
	
	printf("O total a ser pago eh R$%2.f \n", total);
	}
	else
	{
		printf("\nCodigo nao encontrado.\n");
	}
	system("pause");
}
