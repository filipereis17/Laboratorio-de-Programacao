/* 20) O número 3025 possui a seguinte característica:
3025 = (30+25)²
Faça um algoritmo que imprima uma mensagem dizendo se um número fornecido
pelo usuário satisfaz esta característica. */

#include <stdio.h>

main()
{
	int num, AB, CD, soma, quadrado;
	printf("Digite um numero de quatro algarismos: ");
	scanf("%d", &num);

	while (num < 1000 || num > 9999)
	{
		printf("Digite um numero de quatro algarismos: ");
		scanf("%d", &num);
	}	  
		  
	AB = num / 100; // Levando o numero 3025 como exemplo, fosse ABCD, aqui seria 30.
	CD = num % 100; // e aqui, 25.
	soma = AB + CD; // 30 + 25.
	quadrado = soma * soma; // 55 * 55.
		  
	if (quadrado == num) // Caso o numero apressente esse caracteristica, sera testado e impresso aqui.
		printf("\n(%d + %d)^2 = %d * %d = %d.\nPortanto, possui a característica: 3025 = (30+25)^2\n",AB, CD, soma, soma, num);
	else
		printf("\nO numero nao possui a característica: 3025 = (30+25)^2\n");
}
