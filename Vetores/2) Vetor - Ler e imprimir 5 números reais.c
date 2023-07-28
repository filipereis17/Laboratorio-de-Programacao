// 2) Faça um programa para ler um vetor de 5 números reais e imprima-o na tela.

main()
{
      float vetor[5];
      int i;
      
      for (i=0; i<5; i++)
      {
          printf("Digite o %do numero real: ", i+1);
          scanf("%f", &vetor[i]);
      }
      for (i=0; i<5; i++)
      {
          printf("\nO %do numero do vetor eh %f\n", i+1, vetor[i]);
      }
      system("pause");
}
