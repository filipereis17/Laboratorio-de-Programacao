/*4) Fa�a um algoritmo que leia tr�s n�meros A, B e C e calcule e imprima a seguinte
express�o:
D = (R + S)/2
onde
R = (A + B)�
S = (B + C)�  */

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
