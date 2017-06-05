#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ListaHet.h"
#include "Vizinho.h"

typedef struct celula_het CelulaHet;

struct celula_het
{
    void* item; //pode ser uma casa ou mosquito
    void* prox;
    int ID_item;
};


struct lista_het
{
    CelulaHet* primeiro;
    CelulaHet* ultimo;
};



ListaHet* cria_lista_het()
{
    ListaHet* nova_lista = (ListaHet*)malloc(sizeof(ListaHet));

    nova_lista->primeiro = NULL;
    nova_lista->ultimo = NULL;

    return nova_lista;
}

/*void insere_vizinho_lista_het(ListaHet* lista, char* nome)
{
    CelulaHet* nova_celula = (CelulaHet*)malloc(sizeof(CelulaHet));

    nova_celula->item = cria_vizinho(nome);
}
*/
