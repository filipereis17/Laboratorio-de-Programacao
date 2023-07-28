/* 1) Faça um algoritmo que receba o valor de um produto, o valor que foi pago pelo
cliente e imprima na tela o troco a ser dado ao mesmo.*/


#include<stdio.h>

main()
{
      float preco, valor_pago, troco;
      printf("Valor do produto. \n");
      scanf("%f", &preco);
      printf("Valor pago. \n");
      scanf("%f", &valor_pago);
      troco = valor_pago - preco;
      printf("Troco: R$%.2f\n", troco);
      
      system("pause");
      
}
