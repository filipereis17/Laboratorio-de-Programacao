/*15) O departamento que controla o �ndice de polui��o do meio ambiente mant�m 3
grupos de ind�strias que s�o altamente poluentes do meio ambiente. O �ndice de
polui��o aceit�vel varia de 0,05 at� 0,25. Se o �ndice sobe para 0,3 as ind�strias do
1o grupo s�o intimadas a suspenderem suas atividades, se o �ndice cresce para 0,4
as do 1o e 2o grupo s�o intimadas a suspenderem suas atividades e se o �ndice
atingir 0,5 todos os 3 grupos devem ser notificados a paralisarem suas atividades.
Escrever um algoritmo que l� o �ndice de polui��o medido e emite a notifica��o
adequada aos diferentes grupos de empresas. */

#include <stdio.h>

float ip;     //�ndice de Polui��o

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
