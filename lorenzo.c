// .h

typedef struct ListaGenerica ListaGenerica;

// .c

typedef struct celula Celula;

struct celula{
    void* dados;
    Celula* prox;
};

struct ListaGenerica {
    Celula* prim;
    Celula* ult;
};


/*
- Criar
- Adicionar elemento
- Remover elemento
- Recuperar elemento
- Percorre
- Liberar
*/

ListaGenerica* cria_lista()
{
    ListaGenerica* novo = (ListaGenerica*)malloc(sizeof(ListaGenerica));

    novo->prim = NULL;
    novo->ult = NULL;

    return novo;
}

void adiciona_elemento(ListaGenerica* lista, void* dados)
{
    Celula* nova_celula = (Celula*)malloc(sizeof(Celula));
    nova_celula->prox = NULL;
    nova_celula->dados = dados;

    if(lista->prim == NULL)
    {
        lista->prim = nova_celula;
        lista->ult = nova_celula;
        return;
    }
    nova_celula->prox = lista->prim;
    lista->prim = nova_celula;
}
// retorno (*nome)(parametro1, parametro2)
void* percorre(ListaGenerica* lista, void (*x)(void*)) {
    Celula *cell = lista->prim;
    while (cell) {
        //if (x(cell->dados, elem)) {
         //   return cell->dados;
        //}
        x(cell->dados);
        cell = cell->prox;
    }

    return NULL;
}

void adiciona(void* a){
    int* c = (int*)a;
    *c++;
}

void imprime(void* a){
    ..
    ..
}



percorre(lista, adiciona);
percorre(lista, imprime);

// TAD Casa
int comparar_nome(void* casa1, void* casa2){
    Casa* a = (Casa*) casa1;
    Casa* b = (Casa*) casa2;

    return a->id == b->id; // Isso funciona? Acho que só funciona com strcmp, não?
}

ListaGenerica* casas;
Casa* c = recupera_dados(casas, c1, comparar_nome)



a -> b -> c
