#include<stdio.h>
#include<stdlib.h>
#include "lista.h"
#include "aba.h"

typedef struct node_{
	struct node_ * next;
	struct node_ * prev;
	Aba  * content;	
}Node;

struct lista_{
	Node * begin;
	Node * end;
	int size;
};

Lista * lista_criar(){
	Lista * lista = (Lista *)malloc(sizeof(Lista));
	if(lista!=NULL){
		lista->begin=NULL;
		lista->end=NULL;
		lista->size=0;
	}
	return lista;
}

boolean lista_vazia(Lista * lista){
	return lista!=NULL?lista->size==0:TRUE;
}

boolean lista_inserir(Lista * lista, void * i){
	if(lista!=NULL && i!=NULL){
		Node * new= (Node*)malloc(sizeof(Node));
		if(new!=NULL){
			new->content=aba_criar();
			aba_atribuir(new->content,i);
			//aba_imprimir(new->content);
			if(lista_vazia(lista))
				lista->begin=new;
			else
				lista->end->next=new;
			new->prev=lista->end;
			new->next=NULL;
			lista->end=new;
			lista->size++;
			return TRUE;
		}
	}
	return FALSE;
}

void lista_imprimir(Lista * lista){
	if(!lista_vazia(lista)){
		Node * aux=lista->begin;
		while(aux!=NULL){
			aba_imprimir(aux->content);
			aux=aux->next;
		}
		return;
	}
	printf("lista vazia ou nao inicializada\n");
}

void lista_apagar(Lista ** lista){
	if(!lista_vazia(*lista)){
		Node * aux = (*lista)->begin;
		Node * p =(*lista)->begin;
		while(aux!=NULL){
			p=aux->next;
			aux->next=NULL;
			aux->prev=NULL;
			aba_apagar(&(aux->content));
			free(aux);
			aux=p;
		}
	}
	free(*lista);
	lista=NULL;

}
