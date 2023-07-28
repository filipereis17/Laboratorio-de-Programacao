/* Crie uma calculadora usando a instrução SWITCH.
O programa deve ler dois números e imprimir ao final o resultado da operação realizada 
1) soma
2) subtração
3) multiplicação
4) divisão */

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
