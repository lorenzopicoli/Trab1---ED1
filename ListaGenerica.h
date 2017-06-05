#ifndef TRAB1_LISTA_GENERICA_H
#define TRAB1_LISTA_GENERICA_H


typedef struct lista_gen ListaGenerica;


/*Cria uma lista generica que pode manipular qualquer tipo
*inputs: Nenhum
*outputs: Lista criada e vazia
*pré-condição: Nenhuma
*pós-condiçao: Lista criada e vazia
*/
ListaGenerica* cria_lista_generica();

/*Verifica se uma lista esta vazia
*inputs: lista a ser verificada
*outputs: int true or false
*pré-condição: Lista existente
*pós-condiçao: nenhuma
*/
int vazio_lista_generica(ListaGenerica* lista);

/*Insere um elemento de tipo generico na lista
*inputs:    -lista generica
            -dados(de qualquer tipo) a serem inseridos
*outputs: nenhum
*pré-condição: parametros da funcao existentes
*pós-condiçao: elemento inserido na lista
*/
void insere_lista_generica(ListaGenerica* lista, void* dados);


/*percorre a lista e executa o que "funcao" determinar
*inputs:    -lista
            -funcao(ex: imprime ou libera)
*outputs: nenhum
*pré-condição: parametros da funcao existentes
*pós-condiçao: "funcao" executada em todos os elementos da lista
*/
void percorre_lista_generica(ListaGenerica* lista, void (*funcao)(void*));


/*Percorre a lista e retorna elemento procurado
*inputs:    -lista
            -elemento a ser procurado
            -funcao que compara o elemento procurado com o atual na lista
*outputs: elemento procuro se existir
*pré-condição: parametros da funcao existentes
*pós-condiçao: lista está sem o elemento procurado
*/
void* retorna_lista_generica(ListaGenerica* lista, void* elemento, int(*funcao)(void*, void*));


/*funcao "compara" compara elemento com cada elemento da lista, remove da lista se forem iguais e libera celula
*inputs:    -lista
            -elemento a ser procurado
            -funcao que compara elementos
*outputs: nenhum
*pré-condição: parametros da funcao existentes
*pós-condiçao: elemento removido da lista e celula liberada
*/
void* remove_lista_generica(ListaGenerica* lista, void* elemento, int (*compara)(void*, void*));


/*Libera a lista generica
*inputs:    -Lista a ser liberada
            -Funcao que libera os dados especificos
*outputs: nenhum
*pré-condição: parametros existentes
*pós-condiçao: lista liberada
*/
void libera_lista_generica(ListaGenerica* lista, void (*libera)(void*));

#endif //TRAB1_LISTA_GENERICA_H
