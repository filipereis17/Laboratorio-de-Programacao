/* 10) Um sistema de equações lineares do tipo:
ax + by = c
dx + ey = f
pode ser resolvido segundo mostrado abaixo:
x = (ce – bf) / (ae – bd) y = (af -cd) / (ae - bd)
Escreva um algoritmo que lê os coeficientes a,b,c,d,e e f e calcula e mostra os valores
de x e y. */

#include<stdio.h>
#include<stdlib.h>

main()
{
	float A, B, C, D, E, F;
	float x, y;
	
	printf("Informe os valores de A, B, C, D, E e F\n");
	scanf("%f", &A);
	scanf("%f", &B);
	scanf("%f", &C);
	scanf("%f", &D);
	scanf("%f", &E);
	scanf("%f", &F);
	
	x = ((C * E) - (B * F)) / ((A * E) - (B * D));
	y = ((A * F) - (C * D)) / ((A * E) - (B * D));
		
	printf("Os valores de x = %f e y = %f \n", x, y);
	
	system("pause");
}
