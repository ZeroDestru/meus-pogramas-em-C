#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#include <iostream>

struct dados{
	struct dados *esq;
	int info;
	struct dados *dir;
};

typedef struct dados NO;

void cria_LSE(NO ** Inicio, NO **Fim){
	*Inicio=NULL;
	*Fim=NULL;
}

void Ins_Inicio(NO **Inicio, NO **Fim, int v){
	NO *p = (NO *)calloc(1, sizeof(NO));
	
	p->info = v;
	p->esq = NULL;
	p->dir = *Inicio;
	
	if (*Inicio==NULL)  // Se lista vazia
	    *Fim = p;
	else
	    (*Inicio)->esq = p;
	    
	
	*Inicio = p;
}

void Imprime(NO *Inicio){
	NO *p = Inicio;
	
	printf("\nNULL");
	
	while (p!=NULL)
	{
		printf("<--%d-->", p->info);
		p = p->dir;
	}
	printf("NULL\n\n");
}

void Remove(NO *Inicio, int r, NO *c ){
	
	NO *q = c->dir;
	NO *p = c->esq;
	
	p->dir = q;
	q->esq = p;	
		
	free(c);
}


main(){
	
	printf("Resta UM\n");
	int b, n;
	NO *Inicio, *Fim, *r;
	int op, val, ele;
	time_t t;
	srand((unsigned) time(&t));
	
	printf("digite qual a quantidade de elementos vai ter: ");
	scanf("%d", &ele);
	
	
	cria_LSE(&Inicio, &Fim);
	
	for(int i=0; i < ele; i++){
		
		b = (rand() % 20);
		Ins_Inicio(&Inicio, &Fim, b);
	}
		
	printf("digite qual o intervalo para remocao: ");
		scanf("%d", &n);
	
	Imprime(Inicio);
	ele--;
	r = Inicio;
	
	if(n > 1){
		n--;
	}
	
	while(1){
		
		for(int j=0; j<n; j++){
		
			if(r != Fim){
				r = r->dir;
			}else{
				r = Inicio;
			}
		}
		Remove(Inicio, n, r);
		
		Imprime(Inicio);
	}
	
}
