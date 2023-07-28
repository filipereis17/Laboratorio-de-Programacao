/* 17) Criar um programa em C que leia o um número inteiro entre 1 e 7 e escreva o dia
da semana correspondente. Caso o usuário digite um número fora desse intervalo,
deverá aparecer uma mensagem informando que não existe dia da semana com esse
número. Usar switch e case. */


#include <stdio.h>

int dia;

int main(){
	printf("Digite um numero inteiro de 1 a 7: ");
	scanf("%d", &dia);
	while(dia < 1 || dia > 7){
		printf("\n\nNao existe dia da semana com esse numero.");
		printf("\n\nDigite novamente: ");
		scanf("%d", &dia);
		system("cls");
	}
	
	switch(dia){
		case 1: printf("\nDomingo");
		  break;
		case 2: printf("\nSegunda-feira");
		  break;
		case 3: printf("\nTerca-feira");
		  break;
		case 4: printf("\nQuarta-feira");
		  break;
		case 5: printf("\nQuinta-feira");
		  break;
		case 6: printf("\nSexta-feira");
		  break;
		default: printf("\nSabado");
	}
	getch();
	return 0;
}
