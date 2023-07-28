// 3) Faça um programa para ler um vetor de 10 caracteres e imprima um caractere por linha
#include <stdio.h>
main()
{
      char vetor[10];
      int i;
      
      for (i=0; i<10; i++)
      {
          printf("Digite o %do caractere: ", i+1);
          scanf("%c", &vetor[i]);
          fflush(stdin);
      }
      for (i=0; i<10; i++)
      {
          printf("\n%c", vetor[i]);
      }
      system("pause");
}
