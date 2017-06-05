#include <stdio.h>
#include "Casa.h"
#include "ListaHet.h"

struct casa
{
    char* nome;
    ListaHet* casa_e_mosquito; //lista het que guarda os vizinhos e se tem mosquito na casa
};
