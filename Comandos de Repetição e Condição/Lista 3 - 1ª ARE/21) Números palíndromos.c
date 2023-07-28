/* 21) Números palíndromos são aqueles que tem o mesmo valor, se lidos da esquerda para
a direita ou da direita para a esquerda. Ex: 44, 232, 76167, etc. Faça um algoritmo para
determinar e escrever todos os números inteiros menores que 10.000 que são quadrados
perfeitos e palíndromos ao mesmo tempo. */

#include <stdio.h>
  
main()
{
 int i, j, num, invertido, digito;

 for (i=10; i<10001; i++)
 {
 	 num = i;
	 invertido = 0;
 	while(num != 0)
	{
    	digito = num % 10;
    	invertido = (invertido * 10) + digito;
    	num = num / 10;
 	}
 	if(i == invertido )
 	{
 		for(j=4; j<101; j++)
 		{
 			if (j*j == i)
    			printf("%d * %d = %d\n", j, j, i);
		}
	}
}
system ("pause");    
}
