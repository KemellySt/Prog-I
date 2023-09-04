#include <stdio.h>
int main()
{
    printf("\n --------------------------------------------ESTE PROGRAMA ORDENA NUMEROS EM ORDEM CRESCENTE---------------------------------\n");
    // Declarando as variáveis
    int vetor[10], auxiliar;
    // Pedindo os valores
    for(int aux = 0; aux <= 9; aux = aux + 1)
    {
        printf("Digite o valor do elemento %d: ", (aux+1));
        scanf("%d", &vetor[aux]);
    }
    // Ordenação por Buble Sort
    for(int aux = 0; aux <= 9; aux = aux + 1)
    {
        for(int aux1 = 1; aux1 <= 9; aux1 = aux1 + 1)
        {
            if(vetor[aux] < vetor[aux1])
            auxiliar = vetor[aux];
            vetor[aux] = vetor[aux1];
            vetor[aux1] = auxiliar;
        }
    }
    // Imprimindo o resultado
    for(int aux = 0; aux <= 9; aux = aux + 1)
    {
        printf("%d ", vetor[aux]);
    }
    
    return 0;
}