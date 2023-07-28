/*19) Escreva um algoritmo em C que leia um peso na Terra e o número de um planeta
e imprima o valor do seu peso neste planeta. A relação de planetas é dada a seguir
juntamente com o valor das gravidades relativas á Terra:
# Gravidade Relativa Planeta
1        0.37       Mercurio
2        0.88         Venus
3        0.38         Marte
4        2.64       Jupiter
5        1.15       Saturno
6        1.17        Urano        */


#include <stdio.h>

int opcao = 0;
float p_terra;

main(){
	printf("Informe o peso: ");
	scanf("%f", &p_terra);
	printf("\n\n");
	
	while(opcao != 7){
		printf("\n\nPeso informado: %.2f\n", p_terra);
		printf("\n\t\tEscolha um dos numeros referentes ao planeta");
		printf("\n(1) Mercurio");
		printf("\n(2) Venus");
		printf("\n(3) Marte");
		printf("\n(4) Jupiter");
		printf("\n(5) Saturno");
		printf("\n(6) Urano");
		printf("\n(7) Sair\n\n");
		scanf("%d", &opcao);
		
		if(opcao != 7){
			switch(opcao){
				case 1: printf("\n\nO peso no planeta Mercurio equivale a %.2f\n", (p_terra/10)*0.37);
				  system("pause");
				  break;
				  
				  
				case 2: printf("\n\nO peso no planeta Venus equivale a %.2f\n", (p_terra/10)*0.88);
				  system("pause");
				  break;
				  
				case 3: printf("\n\nO peso no planeta Marte equivale a %.2f\n", (p_terra/10)*0.38);
				  system("pause");
				  break;
				  
				case 4: printf("\n\nO peso no planeta Jupiter equivale a %.2f\n", (p_terra/10)*2.64);
				  system("pause");
				  break;
				  
				case 5: printf("\n\nO peso no planeta Saturno equivale a %.2f\n", (p_terra/10)*1.15);
				  system("pause");
				  break;
				  
				case 6: printf("\n\nO peso no planeta Urano equivale a %.2f\n", (p_terra/10)*1.17);
				  system("pause");
				  break;
				  
				default: printf("\n\nOpcao invalida! Tente outra vez.\n\n");
				  system("pause");
				  system("cls");
			}
		}
	}
}
