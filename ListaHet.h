#ifndef TRAB1_LISTA_HET_H
#define TRAB1_LISTA_HET_H


/*Define uma struct sentinela para a lista de celulas generica
    -ponteiro pra primeira celula
    -ponteiro pra ultima celula
*/
typedef struct lista_het ListaHet;

/*Inicializa a sentinela da lista generica
*inputs: nenhum
*outputs: sentinela inicializado
*pré-condição: nenhuma
*pós-condiçao: sentinela existe e ponteiros primeiro e ultimo apontam pra NULL
*/
ListaHet* cria_lista_het();

void insere_vizinho_lista_het(ListaHet* lista, char* nome);


#endif //TRAB1_LISTA_HET_H
