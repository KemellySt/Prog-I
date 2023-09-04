#include <stdio.h>
int Inversao(int vetor[], int tam);

int main()
{
    int tam = 4;
    int vetor[tam];
    for(int aux = 0; aux < tam; aux++)
    {
        printf("Digite o valor %d", aux+1);
        scanf("%d", vetor[aux]);
    }
    printf("%d", Inversao(vetor, tam));
}


int Inversao(int vetor[], int tam)
{
    int vetorI[tam];
    if(tam == 0)
    {
        return vetor[0];
    }
    else
    vetorI[tam-1] = Inversao(vetor, tam);
    return vetorI[tam];
}