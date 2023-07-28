/* 10) Faça um algoritmo que verifique e mostre os números entre 1000 e 2000 
que, quando divididos por 11, produzam o resto igual a 5. */

#include<stdio.h>

main()
{
      int i, x;
      
      for (i=1000; i<2001; i++)
      {
          x = i % 11;
          if (x == 5)
          printf("%d\n", i);
      } 
      system("pause");
}
