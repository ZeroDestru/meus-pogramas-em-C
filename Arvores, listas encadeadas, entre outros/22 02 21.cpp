#include <stdio.h>
#include <conio.h>

int main(){
	
	int p_1, p_2, p_3;
	
	printf("bem vindo a o jogo do dois ou um...");
	printf("vamos começar ?\n");
	fflush(stdin);
	getch();
	
	printf("\nplayer 1 ...");
	fflush(stdin);
	scanf("%d", &p_1);

	printf("\nplayer 2 ...");
	fflush(stdin);
	scanf("%d", &p_2);
	
	printf("\nplayer 3 ...");
	fflush(stdin);
	scanf("%d", &p_3);
	
	
	if ((p_1 == p_2) and (p_1 == p_3)){
		printf("empate");
	}	
	
	else {
	if(p_2 == p_3){
		printf(" Jogador 1 ganhou");
	} 
	
	else {
	 if (p_1 == p_3){
		printf("Jogador 2 ganhou");
	}
	
	else {
		printf("Jogador 3 ganhou");
	} } }
	
	getch();
	
	
}
