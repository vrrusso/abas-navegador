#ifndef ABA_H
#define ABA_H
typedef struct aba_ Aba;

Aba * aba_criar();
void aba_apagar(Aba ** aba);
void aba_imprimir(Aba * aba);
void aba_set(Aba * aba, char * titulo,char * url);
char * aba_get_titulo(Aba * aba);
void aba_atribuir(Aba * target,Aba * origin);

#endif
