#include "aba.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct aba_{
	char titulo[40];
	char url[512];
};

Aba * aba_criar(){
	Aba * new = (Aba *)malloc(sizeof(Aba));
	if(new!=NULL){
		strcpy(new->titulo,"");
		strcpy(new->url,"");
	}
	return new;
}

void aba_apagar(Aba ** aba){
	free(*aba);
	aba=NULL;
}

void aba_imprimir(Aba * aba){
	if(aba!=NULL)
		printf("%s %s\n",aba->titulo,aba->url);
}

void aba_set(Aba * aba, char * titulo,char * url){
	if(aba!=NULL){
		strcpy(aba->titulo,titulo);
		strcpy(aba->url,url);
		return;
	}
	printf("Aba não inicializada");
}

char * aba_get_titulo(Aba * aba){
	if(aba!=NULL)
		return aba->titulo;
	return NULL;
}

void aba_atribuir(Aba * target,Aba * origin){
	if(target!=NULL&&origin!=NULL){
		strcpy(target->titulo,origin->titulo);
		strcpy(target->url,origin->url);
	}
}
