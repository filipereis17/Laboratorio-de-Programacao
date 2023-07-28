/*Suponhe que você atrasou uma conta e a cada mês você deixa de pagar, será
cobrado 1% de juros no valor inicial, ou seja, se você atrasar um mês irá pagar
1%. Se atrasar 3 meses irá pagar 3% e etc.
Vamos sipor que você pode atrasar no máximo 5 meses.

Faça um programa que receba como entrada:
 - o valor de sua dívida inicial
 - um número de 0 a 5 que são os meses em atraso da sua  conta
 
Ao final, o programa deve imprimir qual é seu saldo devedor. Use o switch e o
case para isso. */

#include<stdio.h>

main()
{
      int juros;
      float div_inicial, sal_devedor;
      
      printf("Qual o valor da sua divida inicial?\n");
      scanf("%f", &div_inicial);
      printf("Quantos meses de atraso?\n");
      scanf("%d", &juros);
      
      switch (juros)
      {
             case 1:
                  sal_devedor = div_inicial * 1.01;
             break;
             
             case 2:
                  sal_devedor = div_inicial * 1.02;
             break;
             
             case 3:
                  sal_devedor = div_inicial * 1.03;
             break;
             
             case 4:
                  sal_devedor = div_inicial * 1.04;
             break;
             
             default:
                     sal_devedor = div_inicial * 1.05;
      }
      
      printf("Seu saldo devedor eh R$%f\n", sal_devedor);
      system("pause");
}
