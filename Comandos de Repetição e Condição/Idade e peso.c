#include<stdio.h> //biblioteca

main()
{
      int idade; //vari�vel do tipo inteiro
      float peso,altura,imc; //vari�vel do tipo real
      printf("Digite a sua idade.\n"); //Pede do usu�rio um valor
      scanf("%d", &idade); //solicita que o usu�rio digite um valor
      printf("Digite seu peso.\n");
      scanf("%f", &peso);
      printf("Qual a sua altura?");
      scanf("%f", &altura);
      imc = peso/(altura*altura);
      printf("Seu IMC eh %f e sua idade eh %d\n", imc, idade); //imprime os valores solicitados
      
      system("pause");
}
      
