#include<stdio.h>
#include<stdlib.h>
#include "aba.h"
#include "lista.h"
int main(void){
	Aba * aux=aba_criar();
	char titulo[40],url[512];
	Lista * lista = lista_criar();
	int op;
	scanf("%d",&op);
	while(op!=4){
		switch(op){
			case 1:
				scanf(" %[^\r\n]",titulo);
				scanf(" %[^\r\n]",url);
				aba_set(aux,titulo,url);
				lista_inserir(lista,aux);
				break;
			case 3:
				lista_imprimir(lista);
				break;
		}

		scanf("%d",&op);
	}
	aba_apagar(&aux);
	lista_apagar(&lista);
	return 0;
}
