/* Crie uma calculadora usando a instru��o SWITCH.
O programa deve ler dois n�meros e imprimir ao final o resultado da opera��o realizada 
1) soma
2) subtra��o
3) multiplica��o
4) divis�o */

#include<stdio.h>
#include<stdlib.h>

main()
{
      int A, B, operacao;
      
      printf("Escolha uma operacao:\n 1)soma\n 2)subtracao\n 3)multiplicacao\n 4)divisao\n\n");
      scanf("%d", &operacao);
      printf("\nDigite o numero A\n");
      scanf("%d", &A);
      printf("\nDigite o numero B\n");
      scanf("%d", &B);
      
      switch (operacao)
      {
             case 1:
             operacao = A + B;
             break;
             
             case 2:
             operacao = A - B;
             break;
             
             case 3:
             operacao = A * B;
             break;
             
             case 4:
             operacao = A / B;
             
      }
      printf("O resultado eh %d\n", operacao);
      
      system("pause");
}
