#include <stdio.h>
int somatorio(int vetor[], int tam)
{
    if(tam == 0)
    {
        return vetor[0];
    }
    else
    somatorio = vetor[tam-1] + somatorio(vetor, tam);
    return somatorio;
}
int main()
{
    int vetor[1, 2, 4, 2], tam = 4;
    printf("%d", somatorio(vetor, tam));
    return 0;
}
