/*Faça um programa que pergunta quantas pessoas existem e cria 
um espaço para armazenar a idade de todas estas pessoas. 
Em seguida, leia a idade de todas as pessoas e mostre na ordem inversa da que foram lidas.*/

#include <stdio.h>
#include <iostream>
#include <stdlib.h>

void cria(int tama, int *list){
	
	int vet[tama];
	list[tama];
	
	for(int i=0; i < tama; i++){
		
		printf("\a digite o valor da posicao %d\t",i);
		fflush(stdin);
		scanf("%d", &vet[i]);
		printf("%d", vet[i]);
	}
	
	
	list = vet;
	printf("%d", list[0]);
	
	return;
}

void imprima(){
	
}



int main(){
	
	char res;
	int tam, vetor;
	
	do{
		
		printf("\a quantas pessoas serao registradas ? \n");
		fflush(stdin);
		scanf("%d", &tam);
		
		
		printf("%d\n", tam);
		
		cria(tam, &vetor);
		
		printf("%d",vetor);
		
		}while(res == 's' || res == 'S');
}
