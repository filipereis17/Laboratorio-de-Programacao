#include<stdio.h>

main()
{
      float preco, recebido, troco;
      printf("Valor do produto. \n");
      scanf("%f", &preco);
      printf("Valor recebido. \n");
      scanf("%f",&recebido);
      troco = recebido - preco;
      printf("Troco: R$%f\n", troco);
      
      system("pause");
}
