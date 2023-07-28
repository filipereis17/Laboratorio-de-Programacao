/* 20) O n�mero 3025 possui a seguinte caracter�stica:
3025 = (30+25)�
Fa�a um algoritmo que imprima uma mensagem dizendo se um n�mero fornecido
pelo usu�rio satisfaz esta caracter�stica. */

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
		printf("\n(%d + %d)^2 = %d * %d = %d.\nPortanto, possui a caracter�stica: 3025 = (30+25)^2\n",AB, CD, soma, soma, num);
	else
		printf("\nO numero nao possui a caracter�stica: 3025 = (30+25)^2\n");
}
