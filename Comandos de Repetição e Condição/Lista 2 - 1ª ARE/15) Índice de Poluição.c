/*15) O departamento que controla o índice de poluição do meio ambiente mantém 3
grupos de indústrias que são altamente poluentes do meio ambiente. O índice de
poluição aceitável varia de 0,05 até 0,25. Se o índice sobe para 0,3 as indústrias do
1o grupo são intimadas a suspenderem suas atividades, se o índice cresce para 0,4
as do 1o e 2o grupo são intimadas a suspenderem suas atividades e se o índice
atingir 0,5 todos os 3 grupos devem ser notificados a paralisarem suas atividades.
Escrever um algoritmo que lê o índice de poluição medido e emite a notificação
adequada aos diferentes grupos de empresas. */

#include <stdio.h>

float ip;     //Índice de Poluição

main(){
	printf("Indice de Policao: ");
	scanf("%f", &ip);
	if(ip >= 0.3 && ip < 0.4)
		printf("Suspensao de atividades do Grupo 1\n");
	else if(ip >= 0.4 && ip < 0.5)
			printf("Suspensao de atividades dos Grupos 1 e 2\n");
		 else if(ip >= 0.5)
		 	  	printf("Suspensao de atividades dos Grupos 1, 2 e 3\n");
		 	  else if(ip >= 0.05 && ip <= 0.25)
		 	       	  printf("Indice Aceitavel\n");
		 	       else if(ip > 0.25 && ip < 0.3)
		 	               printf("Indice requer atencao\n");
		 	            else
		 	               printf("Valor fora do intervalo\n");
	getch();
}
