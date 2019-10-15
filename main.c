#include<stdio.h>
#include<stdlib.h>
#include "aba.h"

int main(){
	Aba * aba=aba_criar();
	Aba * dois=aba_criar();
	char aux[40],aux2[512];
	scanf("%s %s",aux,aux2);
	aba_set(aba,aux,aux2);
	aba_imprimir(aba);
	printf("%s",aba_get_titulo(aba));
	aba_atribuir(dois,aba);
	aba_imprimir(dois);
	printf("%s",aba_get_titulo(dois));
	aba_apagar(&dois);
	aba_apagar(&aba);

	return 0;
}
