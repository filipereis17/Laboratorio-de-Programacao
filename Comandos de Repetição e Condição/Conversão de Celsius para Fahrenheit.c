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
