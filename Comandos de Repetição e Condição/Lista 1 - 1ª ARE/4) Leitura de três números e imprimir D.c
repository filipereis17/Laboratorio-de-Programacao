/*4) Faça um algoritmo que leia três números A, B e C e calcule e imprima a seguinte
expressão:
D = (R + S)/2
onde
R = (A + B)²
S = (B + C)³  */

#include<stdio.h>

main()
{
	int A, B, C, R, S, D;
	
	printf("Digite os valores A, B e C.\n");
	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &C);
	
	R = (A + B) * (A + B);
	S = (B + C) * (B + C) * (B + C);
	D = (R + S) / 2;
	
	printf("O resultado de D = (R + S)/2 eh igual a %d.\n", D);
	
	system("pause");
}
