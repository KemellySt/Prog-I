#include <stdio.h>
int main()
{
    printf("\n ------------------------------------------ESTE PROGRAMA ORDENA NUMEROS EM ORDEM CRESCENTE---------------------------------\n");
    // Declarando as variáveis
    int vetor[10], j, k;
    // Pedindo os valores
    for(int aux = 0; aux <= 9; aux = aux + 1)
    {
        printf("Digite o valor do elemento %d: ", (aux+1));
        scanf("%d", &vetor[aux]);
    }
    // Ordenando com o método Inserção
    for(int aux = 1; aux <= 9; aux = aux + 1)
    {
        j = vetor[aux];
        k = aux - 1;
        while(k >= 0 && vetor[k] > j)
        {
            vetor[k+1] = vetor[k];
            k = k - 1;
        }
        vetor[k+1] = j;
    }    
    // Imprimindo os resultados
    for(int aux = 0; aux <= 9; aux = aux + 1)
    {
        printf("%d ", vetor[aux]);
    }

    return 0;
}