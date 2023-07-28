// 1) Faça um programa para ler um vetor de 5 numeros inteiros e umprima-o na tela.

#include<stdio.h>

main()
{
      int vetor[5], i;
      
      for (i=0; i<5; i++)
      {
          printf("Digite o %do numero: ", i+1);
          scanf("%d", &vetor[i]);
      }
      for (i=0; i<5; i++)
      {
          printf("\nO %do numero do vetor eh %d\n", i+1, vetor[i]);
      }
      system("pause");
}
