// 8) Escreva um algoritmo que calcule e imprima o fatorial de um número.

#include<stdio.h>

main()
{
      int x, n;
      
      printf("Digite um numero inteiro: ");
      scanf("%d", &x);
      n = x - 1;
            
      while (n > 0)
      {
            x = x * n;
            n = n - 1;
      }
      printf("O fatorial eh %d.\n", x);
      system("pause");
}
