#ifndef LISTA_H
#define LRISTA_H
#define TRUE 1
#define FALSE 0
typedef int boolean;
typedef struct lista_ Lista;
Lista * lista_criar();

void lista_apagar(Lista ** lista);

boolean lista_vazia(Lista * lista);

boolean lista_inserir(Lista * lista, void * i);

void lista_imprimir(Lista * lista);

#endif
