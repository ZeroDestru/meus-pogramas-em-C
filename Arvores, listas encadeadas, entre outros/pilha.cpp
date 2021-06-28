#include <stdio.h>
#include <string.h>


#define PILHA_MAX_TAM        (10)

#define SUCESSO              (0)
#define ERRO_PILHA_CHEIA     (-1)
#define ERRO_PILHA_VAZIA     (-2)


typedef struct pilha_s pilha_t;

struct pilha_s{
    int item[ PILHA_MAX_TAM ];
    int qtd;
};


void pilha_inicializar( pilha_t * p ){
    memset(p, 0, sizeof(pilha_t));
}


int coloc_item(pilha_t * p, int n){
    if( p->qtd == PILHA_MAX_TAM )
        return ERRO_PILHA_CHEIA;

    p->item[ p->qtd++ ] = n;

    return SUCESSO;
}


int pilha_pop_item(pilha_t * p){
    if( p->qtd == 0 )
        return ERRO_PILHA_VAZIA;

    return p->item[ --p->qtd ];
}


void imprime_itens(pilha_t * p){
    int i = 0;

    if(!p->qtd)
    {
        printf("Pilha Vazia!\n");
        return;
    }

    printf("Pilha:\n");

    for( i = p->qtd - 1; i >= 0; i-- )
        printf("   Posicao %d / Valor: %d\n", i, p->item[i]);
}


void ordenar_itens(pilha_t * p){
    int i = 0;
    int j = 0;

    for(i = 0; i < p->qtd; i++)
    {
        for(j = i + 1; j < p->qtd; j++)
        {
            if(p->item[i] > p->item[j])
            {
                int aux = p->item[i];
                p->item[i] = p->item[j];
                p->item[j] = aux;
            }
        }
    }
}


int main( int argc, char * argv[] ){
    pilha_t pa;
	int n, a;
	
    pilha_inicializar( &pa );
   	
   	printf("quantos elementos quer na lista ? ");
   	scanf("%d", &n);
	
	for(int i = 0; i < n; i++){
    	
    	printf("\nqual o valor desejado ? ");
    	scanf("%d", &a);
    	printf("\n");
		coloc_item(&pa,a);
    	ordenar_itens(&pa);
    	imprime_itens(&pa);
	}	


    return 0;
}

/* fim-de-arquivo */
