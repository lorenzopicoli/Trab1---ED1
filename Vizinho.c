#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Vizinho.h"
#define ID_VIZINHO 2

struct vizinho
{
    char* nome;
    int id;
};


Vizinho* cria_vizinho(char* nome)
{
    Vizinho* novo_vizinho = (Vizinho*)malloc(sizeof(Vizinho));

    novo_vizinho->id = ID_VIZINHO;

    novo_vizinho->nome = (char*)malloc((strlen(nome)+1) * sizeof(char));
    strcpy(novo_vizinho->nome, nome);
    novo_vizinho->nome[(strlen(nome)+1)] = '\0';

    return novo_vizinho;
}

int compara_vizinho(void* a, void* b)
{
        Vizinho* v1 = (Vizinho*)a;
        Vizinho* v2 = (Vizinho*)b;

        return (strcmp(v1->nome, v2->nome) == 0);
}


void imprime_vizinho(void* v)
{
    Vizinho* a = (Vizinho*)v;

    printf("vizinho: %s\n", a->nome);
}


void libera_vizinho(void* v)
{
    Vizinho* a = (Vizinho*)v;

    free(a->nome);
    free(a);
}
