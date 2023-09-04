#include <stdio.h>
int main()
{
    // Declarando as variáveis
    char vetor[20], chave;
    // Pedindo os valores
    for(int aux = 0; aux < 20; aux = aux + 1)
    {
        printf("Digite o valor %d: ", (aux+1));
        scanf(" %[^\n]s", vetor[aux]);
    }
    // Pedindo a chave
    printf("Digite a chave a ser pesquisada: ");
    scanf(" %c", &chave);
    for(int aux = 0; aux < 20; aux = aux + 1)
    {
        if(vetor[aux] == chave)
        {
            vetor[aux] = '@';
        }
    }
    //Imprimindo os resultados
    for(int aux = 0; aux < 20; aux = aux + 1)
    {
        printf("%s", vetor[aux]);
    }



    return 0;
}