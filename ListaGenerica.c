#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ListaGenerica.h"

typedef struct celula_gen
{
    void* dados;
    struct celula_gen* prox;
}CelulaGenerica;


struct lista_gen
{
    CelulaGenerica* primeiro;
    CelulaGenerica* ultimo;
};


ListaGenerica* cria_lista_generica()
{
    ListaGenerica* novo = (ListaGenerica*)malloc(sizeof(ListaGenerica));

    novo->primeiro = NULL;
    novo->ultimo = NULL;

    return novo;
}

int vazio_lista_generica(ListaGenerica* lista)
{
    return (lista->primeiro == NULL);
}

void insere_lista_generica(ListaGenerica* lista, void* dados)
{
    CelulaGenerica* nova_celula = (CelulaGenerica*)malloc(sizeof(CelulaGenerica));
    nova_celula->prox = NULL;
    nova_celula->dados = dados;

    if(!lista->primeiro)
    {
        lista->primeiro = nova_celula;
        lista->ultimo = nova_celula;
        return;
    }

    lista->ultimo->prox = nova_celula;
    lista->ultimo = nova_celula;
}

//percorre todos os elemntos da listas e executa o que "funcao" determinar
//pode ser usada para imprimir, liberar entre outras coisas
void percorre_lista_generica(ListaGenerica* lista, void (*funcao)(void*))
{
    CelulaGenerica* aux = lista->primeiro;

    while(aux)
    {
        funcao(aux->dados);
        aux = aux->prox;
    }
}

//retornar elem e nao excluir cel
//se eu quiser retornar os dados ao inves da celula eh so mudar a funcao pra void* e retornar aux->dados
void* retorna_lista_generica(ListaGenerica* lista, void* elemento, int(*funcao)(void*, void*))
{
    CelulaGenerica* aux = lista->primeiro;

    while (aux)
    {
        if (funcao(elemento, aux->dados))
        {
            return aux->dados;
        }
        aux = aux->prox;
    }
    return NULL;
}


//eclui celula e retorna o elemento
void* remove_lista_generica(ListaGenerica* lista, void* elemento, int (*compara)(void*, void*))
{

    CelulaGenerica* aux = lista->primeiro;
    CelulaGenerica* ant = NULL;

    while(aux && !compara(elemento, aux->dados))
    {
        ant = aux;
        aux = aux->prox;
    }
    if(aux == lista->primeiro && aux == lista->ultimo)
    {
        lista->primeiro = NULL;
        lista->ultimo = NULL;
        void* info = aux->dados;
        free(aux);
        return info;
    }
    if(aux == lista->primeiro)
    {
        lista->primeiro = lista->primeiro->prox;
        void* info = aux->dados;
        free(aux);
        return info;
    }
    if(aux == lista->ultimo)
    {
        lista->ultimo = ant;
        ant->prox = NULL;
        void* info = aux->dados;
        free(aux);
        return info;
    }

    ant->prox = aux->prox;
    void* info = aux->dados;
    free(aux);
    return info;
}

//perguntar ninguem depois
void libera_lista_generica(ListaGenerica* lista, void (*libera)(void*))
{
    CelulaGenerica* aux = lista->primeiro;

    while(aux)
    {
        CelulaGenerica* prox = aux->prox;
        libera(aux->dados);
        free(aux);
        aux = prox;
    }
    free(lista);
}
