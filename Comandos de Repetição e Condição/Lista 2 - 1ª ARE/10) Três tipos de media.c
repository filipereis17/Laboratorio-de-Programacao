/* 10) Um usu�rio deseja um algoritmo onde possa escolher que tipo de m�dia deseja
calcular a partir de 3 notas. Fa�a um algoritmo que leia as notas, a op��o escolhida
pelo usu�rio e calcule a m�dia.
1 -aritm�tica
2 -ponderada (3,3,4)
3 -harm�nica */

#include<stdio.h>

main()
{
	float nota1, nota2, nota3, m_arit, m_pond, m_harm;
	
	printf("Informe a primeira nota.\n");
	scanf("%f", &nota1);
	printf("Informe a segunda nota.\n");
	scanf("%f", &nota2);
	printf("Informe a terceira nota.\n");
	scanf("%f", &nota3);
	
	m_arit = (nota1 + nota2 + nota3) / 3;
	m_pond = (nota1 * 3 + nota2 * 3 + nota3 * 4) / 10;
	m_harm = 3/(1/nota1 + 1/nota2 + 1/nota3);
	
	printf("\nMedia Aritmetica = %.2f\nMedia Ponderada = %.2f\nMedia Harmonica = %.2f\n", m_arit, m_pond, m_harm);
	system("pause");
}
