#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

// Estrutura do Nodo
typedef struct Nodo {
    int valor;
    struct Nodo *esq;
    struct Nodo *dir;
} Nodo;

// 3) Função para imprimir um nodo
void imprimir(Nodo *n) {
    if (n != NULL) {
        printf("Valor do nodo: %d\n", n->valor);
    }
}

// MAIN
int main() {
	setlocale(LC_ALL, "Portuguese");

    // Criando nodos
    Nodo *nodo5 = (Nodo*) malloc(sizeof(Nodo));
    Nodo *nodo2 = (Nodo*) malloc(sizeof(Nodo));
    Nodo *nodo8 = (Nodo*) malloc(sizeof(Nodo));
    Nodo *nodo4 = (Nodo*) malloc(sizeof(Nodo));

    // Atribuindo valores
    nodo5->valor = 5;
    nodo2->valor = 2;
    nodo8->valor = 8;
    nodo4->valor = 4;

    // Inicializando ponteiros
    nodo5->esq = nodo2;
    nodo5->dir = nodo8;

    nodo2->esq = NULL;
    nodo2->dir = nodo4;

    nodo8->esq = NULL;
    nodo8->dir = NULL;

    nodo4->esq = NULL;
    nodo4->dir = NULL;

    // 1) Adicionar nodo 10 à direita do nodo 8
    Nodo *nodo10 = (Nodo*) malloc(sizeof(Nodo));
    nodo10->valor = 10;
    nodo10->esq = NULL;
    nodo10->dir = NULL;

    nodo8->dir = nodo10;

    // 2) Acessar nodo 4 a partir do nodo 
    printf("Valor do nodo 4: %d\n", nodo5->esq->dir->valor);

    // 3) Usando função imprimir
    imprimir(nodo5);

    // 4) Verificar filho à esquerda do nodo 8
    if (nodo8->esq == NULL) {
        printf("Vazio\n");
	}

    return 0;
}
