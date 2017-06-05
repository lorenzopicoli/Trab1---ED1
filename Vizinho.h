#ifndef TRAB1_VIZINHO_H
#define TRAB1_VIZINHO_H


/*Define o tipo Vizinho com o campo:
    -nome do vizinho
    -id do vizinho
*/
typedef struct vizinho Vizinho;


/*Inicializa uma stuct vizinho com o nome do vizinho
*inputs: nome do vizinho
*outputs: struct vizinho inicializada com nome
*pré-condição: nome existente
*pós-condiçao: struct criada com espaco dinamicamente alocado pra nome
*/
Vizinho* cria_vizinho(char* nome);



/*Compara dois vizinhos
*inputs: vizinhos a e b
*outputs: int true or false
*pré-condição: a e b são do tipo vizinhos e existem
*pós-condiçao: Nenhuma
*/
int compara_vizinho(void* a, void* b);


/*Imprime os dados do vizinho
*inputs: vizinho a ser impresso
*outputs: nenhum
*pré-condição: vizinho existe
*pós-condiçao: dados impressos
*/
void imprime_vizinho(void* v);


/*Libera dos dados do Vizinho
*inputs: vizinho
*outputs: nenhum
*pré-condição: vizinho existe
*pós-condiçao: dados do vizinho liberados
*/
void libera_vizinho(void* v);


#endif //TRAB1_VIZINHO_H
