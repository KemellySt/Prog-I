#include <stdio.h>
int somatorio(int vetor[], int tam)
{
    int som;
    if(tam == 0)
    {
        return vetor[0];
    }
    else
    som = vetor[tam-1] + somatorio(vetor, tam-1);
    return printf("%d", som);
}
int main()
{
    int vetor[4], tam = 4;
    for(int aux = 0; aux < 4; aux++)
    {
        printf("Digite: ");
        scanf("%d", &vetor[aux]);
    }
    somatorio(vetor, tam);
    return 0;
}