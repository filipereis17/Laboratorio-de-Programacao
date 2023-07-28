/* 9) Escreva um algoritmo que calcule e imprima a soma dos 100 primeiros 
números naturais. */

#include<stdio.h>

main()
{
      int x=0, n, qtde=100;
      n = 1;
      while (qtde>0)
      {
            x = x + n;
            n = n + 1;
            qtde = qtde - 1;
      }   
      printf("A soma eh %d.\n", x);
      system("pause");
}       
      
      
