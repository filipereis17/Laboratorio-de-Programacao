/* 2) Faça um algoritmo que leia uma temperatura em graus Celsius e converta esta
para Fahrenheit. A fórmula para a conversão é: F = (9 * C + 160)/5. As duas
temperaturas devem ser mostradas na tela.*/

#include<stdio.h>

main()
{
      float temp_c, temp_f;
      
      printf("Qual a temperatura em Celsius??\n");
      scanf("%f", &temp_c);
      
      temp_f = (9 * temp_c + 160)/5;
      
      printf("A temperatura em Fahreneit = %.2f\n\n", temp_f);
      
      system("pause");
}
