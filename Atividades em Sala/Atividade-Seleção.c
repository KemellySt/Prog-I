#include <stdio.h>
int main()
{
    printf("\n --------------------------------------------ESTE PROGRAMA ORDENA NUMEROS EM ORDEM CRESCENTE---------------------------------\n");
    // Declarando as variáveis
    int vetor[10], recebedor, indice = 0;
    //  Pedindo os valores
    
    for(int aux = 0; aux <= 9; aux = aux + 1)
    {
        printf("Digite o valor do elemento %d: ", (aux+1));
        scanf("%d", &vetor[aux]);
    }
    // Ordenação por Seleção
    for(int aux1 = 0; aux1 < 9; aux1 = aux1 + 1)
    {
        indice = aux1;
        //printf("valor inicial: %d\n", indice);
        for(int aux = aux1 + 1; aux < 10; aux = aux + 1)
        {
            if(vetor[aux] < vetor[indice])
            {
                indice = aux;
            }
        }
        //printf("menor indice: %d\n\n", indice);
        // Troca
        if(aux1 != indice)
        {
            recebedor = vetor[aux1];
            vetor[aux1] = vetor[indice];
            vetor[indice] = recebedor;
        }
    }

    // Imprimindo os resultados
    for(int aux = 0; aux <= 9; aux = aux + 1)
    {
        printf("%d ", vetor[aux]);
    }

    return 0;
}