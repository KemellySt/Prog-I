#include <stdio.h>
#include <string.h>
int main()
{
    // Introdução
        printf("\n---------------------------Este programa inverte vetores-------------------------------\n");
    // Declarando as variáveis
    int tam = 7, tam1 = 7;
    int vetor[tam], vetorInvertido[tam];
    // Pedindo ao usuário
    for(int aux = 0; aux < tam; aux = aux + 1)
    {
        printf("Digite o valor do elemento %d: ", (aux+1));
        scanf("%d", &vetor[aux]);
    }
        // Imprimindo os valores
    printf("\nVETOR ORIGINAL\n");
    for(int aux = 0; aux < tam; aux = aux + 1)
    {
        printf("%d ", vetor[aux]);
    }
    // Trocando as posições
    tam1 = tam1 - 1; 
    for(int aux = 0; aux < tam; aux = aux + 1)
    {
        vetorInvertido[aux] = vetor[tam1];
        tam1 = tam1 - 1;
    }
    // Imprimindo os valores
    printf("\nVETOR INVERTIDO\n");
    for(int aux = 0; aux < 7; aux = aux + 1)
    {
        printf("%d ", vetorInvertido[aux]);
    }

    return 0;
}