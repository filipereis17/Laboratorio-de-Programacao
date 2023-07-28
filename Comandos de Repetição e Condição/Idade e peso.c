#include<stdio.h> //biblioteca

main()
{
      int idade; //variável do tipo inteiro
      float peso,altura,imc; //variável do tipo real
      printf("Digite a sua idade.\n"); //Pede do usuário um valor
      scanf("%d", &idade); //solicita que o usuário digite um valor
      printf("Digite seu peso.\n");
      scanf("%f", &peso);
      printf("Qual a sua altura?");
      scanf("%f", &altura);
      imc = peso/(altura*altura);
      printf("Seu IMC eh %f e sua idade eh %d\n", imc, idade); //imprime os valores solicitados
      
      system("pause");
}
      
