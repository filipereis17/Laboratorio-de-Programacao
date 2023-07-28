/* 11) Faça um algoritmo que leia um valor inteiro n, calcule e imprima 
a seguinte soma: S = 1 + 1/2 + 1/3 + 1/4 + … + 1/n */

#include<stdio.h>

main()
{
      float n, S=0;
      
      printf("Digite um numero inteiro: ");
      scanf("%f", &n);
      
      while (n>0)
      {
            S = S + (1/n);
            n = n - 1;
      }
      printf("A soma eh %f.\n", S);
      system("pause");
}
