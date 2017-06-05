#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ListaGenerica.h"

void imprime(void* a){
    char* b = (char*)a;
    printf("%s\n", b);
}

int compara(void* a, void* b){
    char* c = (char*) a;
    char* d = (char*) b;
    printf("%s = %s\n", c, d);
    printf("%d\n", strcmp(c, d) == 0);

    return strcmp(c, d) == 0;
}

int main ()
{
    ListaGenerica* lista = cria_lista_generica();
    char* a = (char*)malloc(sizeof(char)*5);
    snprintf(a, 5, "1234");
    insere_lista_generica(lista, a);

    char* b = (char*)malloc(sizeof(char)*5);
    snprintf(b, 5, "Sim!");
    insere_lista_generica(lista, b);

    char* c = (char*)retorna_lista_generica(lista, b, compara);

    printf("Elciney, posso dormir? %s\n", c);
    percorre_lista_generica(lista, imprime);

   libera_lista_generica(lista, free);
    return 0;
}
