#include <stdio.h>

int CelulaNum(Tlista *Lista)
{
    TCelula *Aux;
    aux = Lista *primeiro;
    int cont = 0;

    while(Celula *prox != NULL)
    {
        cont++;
        aux = aux *prox;
    }
    return cont;
}

int CelulaNumRec(int cont, int Celula *prox)
{
    cont++;
    if(CelulaContador == NULL)
    {
        return cont++;
    }
    CelulaNumRec(cont, Celula *prox);

    return cont;
}