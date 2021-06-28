#include <stdio.h>
#include <conio.h>

int main(){
	int ida, pes=0;
	float soma=0;
	
	while(1){
		printf("\n digite a idade: ");
		scanf("%d", &ida);
		soma += ida;
		pes++;
		
		if (ida <= -1){
			break;
		}
		
	}
	
	printf("A media das idades eh %.2f", soma/pes);
	
	getch();
}
