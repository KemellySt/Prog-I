#include <stdio.h>
int menor(int vetor[], int tam);

int main()
{
    // Declarando as variáveis
    int tam;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);
    int vetor[tam];
    // Pedindo os valores
    for(int aux = 0; aux < tam; aux++)
    {
        printf("Digite o valor do %d: ", aux+1);
        scanf("%d", &vetor[aux]);
    }
    // Imprimindo o vetor
    for(int aux = 0; aux < tam; aux++)
    {
        printf("%d ", vetor[aux]);
    }
    // Imprimindo o menor valor
    printf("\nO menor valor entre todos os valores do VETOR: %d", menor(vetor, tam));

    return 0;
}
int menor(int vetor[], int tam)
{
    int x;
    if(tam == 1)
    {
        return vetor[0];
    }
    else
    {
        x = menor(vetor, tam-1);
        if(x < vetor[tam-1])
            return x;
        else
        return vetor[tam-1];
    }
}