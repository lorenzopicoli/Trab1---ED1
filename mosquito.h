#ifndef TRAB1_MOSQUITO_H
#define  TRAB1_MOSQUITO_H

/*
Inputs: Nenhum.
Outputs: Elemento do tipo Mosquito.
Pre-condições: Nenhuma;
Pós-condições: Mosquito criado.
*/
Mosquito* mosquito_bota();

/*
Inputs: Um mosquito.
Outputs: Nenhum.
Pre-condições: Mosquito criado.
Pós-condições: Elemento destruído.
*/
void mosquito_morre(Mosquito* mosquito);

/*
Inputs: lista de casas e mosquito
Outputs: Nenhum.
Pre-condições: mosquito criado e casas válidas.
Pós-condições: Mosquito movido.
*/
void mosquito_move(Casa* casa, Mosquito* mosquito);

/*
Inputs: Nome da casa na qual o mosquito sera inserido
Outputs: Nenhum.
Pre-condições: Casa criada.
Pós-condições: Mosquito inserido na casa passada.
*/
void inseremosquito (char* nome_casa); //Talvez tenha que ser feita em outro tad.

/*
Inputs:
Outputs:
Pre-condições:
Pós-condições:
*/


#endif //TRAB1_MOSQUITO_H
