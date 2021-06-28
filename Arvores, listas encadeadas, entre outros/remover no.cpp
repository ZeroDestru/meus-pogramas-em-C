#include <stdio.h>
#include <stdlib.h>

struct no
{
	struct no *esq;
	int info;
	struct no *dir;
};

typedef struct no ARVORE;


void Insere(ARVORE **R, int n)
{
	if (*R==NULL)
	{
  		(*R)=(ARVORE *) calloc(1,sizeof(ARVORE));
  		(*R)->info=n;
  		(*R)->esq=NULL;
  		(*R)->dir=NULL;
	}
	else  
		if (n<(*R)->info)
			Insere(&(*R)->esq, n);
	    else
		  	Insere(&(*R)->dir,n);
}

void Pre_Order(ARVORE *R)
{
	if (R!= NULL)
	{
		printf("%d ", R->info);
		Pre_Order(R->esq);
		Pre_Order(R->dir);
	}
}
		
void In_Order(ARVORE *R)
{
	if (R!= NULL)
	{
		In_Order(R->esq);
		printf("%d ", R->info);
		In_Order(R->dir);
	}
}

void Pos_Order(ARVORE *R)
{
	if (R!= NULL)
	{
		Pos_Order(R->esq);
		Pos_Order(R->dir);
		printf("%d ", R->info);
	}
}


ARVORE *Busca (ARVORE *R, int v)
{
	if (R==NULL)
	   return NULL;
	else
	   	if (R->info==v)
	      return R;
	   	else
	    	if (R->info > v)
		 		return Busca (R->esq,v);
	      	else
		 		return Busca (R->dir,v);
}


ARVORE *Busca_Pai(ARVORE *R, ARVORE *ret)
{
	if (R->esq == ret || R->dir== ret)
		return R;
	else
		if (R->info > ret->info)
			return Busca_Pai(R->esq, ret);
		else
			return Busca_Pai(R->dir, ret);
	
}
remraiz(ARVORE *r) {  
    no *p, *q;
    if (r->esq == NULL) {
       q = r->dir;
       free (r);
       return 1;
    }
    p = r; q = r->esq;
    while (q->dir != NULL) {
       p = q; q = q->dir;
    }
    if (p != r) {
       p->dir = q->esq;
       q->esq = r->esq;
    }
    q->dir = r->dir;
    free (r);
    return 1;
}

main()
{
	ARVORE *Raiz, *ret, *pai;
	int op, val;
	
	Raiz = NULL;   
	
	do {
		system("cls");
		puts("1 - Inserir na Arvore");
		puts("2 - Percursos");
		puts("3 - Buscar um No");
		puts("4 - Buscar Pai de um No");
		puts("5 - Remover No");
		
		puts("0 - Sair do programa");
		
		printf("\nDigite a opcao:");
		scanf("%d", &op);
		
		switch(op)
		{
			case 1: printf("\nDigite o valor a inserir: ");
			        scanf("%d", &val);
			        Insere(&Raiz, val);
			        break;
			        
			case 2: printf("\nPre_Order:\n");
			        Pre_Order(Raiz);
			        printf("\nIn_Order:\n");
			        In_Order(Raiz);
			        printf("\nPos_Order:\n");
			        Pos_Order(Raiz);
			        printf("\n");
			        system("pause");
			        break;
			        
			case 3: printf("\nDigite o valor a  procurar: ");
			        scanf("%d", &val);
			        
			        ret = Busca(Raiz,val);
			        
			        if (ret==NULL)
			         	printf("\nValor nao existe na Arvore!\n");
			        else
			        	printf("\nValor existe na arvore: %d\n", ret->info);
			        	
			        system("pause");
			        break;
			        
			case 4: printf("\nDigite o valor a  procurar: ");
			        scanf("%d", &val);
			        
			        ret = Busca(Raiz,val);
			        
			        if (ret==NULL)
			         	printf("\nValor nao existe na Arvore! Logo, nao tem Pai!\n");
			        else
		        
			        	if (ret != Raiz)
			        	{
						
			        	    pai = Busca_Pai(Raiz, ret);
			        	    printf("\nO pai do %d = %d \n", ret->info, pai->info );
			            }
			            else
			            	printf("\nA Raiz nao possui Pai!\n");
			            
			        system("pause");
			        break;
			        	
					
			case 5: printf("\nDigite o valor a  ser removido: ");
			        scanf("%d", &val);
			        ret = Busca(Raiz,val);
			        
			        if (ret==NULL)
			         	printf("\nValor nao existe na Arvore!\n");
			        else
			        	remraiz(ret);
			        	
			        system("pause");
			        break;
			        
			
			        
			
		} 
		
	} while (op!=0);
}


