#include <stdio.h>

float Pesquisa(float num, float vetor[], int tam)
{
    int quantidade = 0;
    for(int aux = 0; aux < tam; aux++)
    {
        if(num == vetor[aux])
        {
            quantidade = quantidade + 1;
        }
    }
    return quantidade;
}

int main()
{
    float num, tam = 5;
    float vetor[5];
    printf("Qual numero sera pesquisado? \n");
    scanf("%f", &num);
    for(int aux = 0; aux < tam; aux++)
    {
        printf("Digite os valores: ");
        scanf("%f", &vetor[aux]);
    }

    printf("%f", Pesquisa(num, vetor, tam));
}
