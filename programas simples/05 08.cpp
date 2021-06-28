#include <stdio.h>
//para variavel (tipo nome)
/*int, float, char (caractere)*/ 
/*quando vai printar não esquecer %(tipo, int = d/ f = float/ c = char), nome da variavel*/


main() {

	int cont=0;
	float taxa=1.2, taxa_anual = 1.4;
	char opcao='A';

	printf("\n Valor de cont=%d", cont);
	printf("\n Valor de taxa=%f", taxa);
	printf("\n Valor de taxa_anual=%f", taxa_anual);
	printf("\n Valor de opcao=%c \n\n", opcao);
	
	scanf("%d", &cont);
	opcao++;
	
	printf("\n valor da cont=%d %c", opcao, opcao);
	
	return 0;
}
