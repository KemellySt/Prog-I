#include <stdio.h>
#include <string.h>
int main()
{
    // Introduzindo o programa
    printf("\n------------------------Este programa verifica se uma palavra e um palindromo-----------------------------\n");
    // Declarando variáveis
    char texto[100];
    int tam = 0, palindromo = 0;
    // Recebendo a string
    printf("Digite o texto a ser verificado: ");
    scanf(" %[^\n]s", texto);
    //Deescobrindo o tamanho
    while(texto[tam] != '\0')
    {
        tam = tam + 1;
    }
    // Corrigindo a posição do vetor
    tam = tam - 1;
    // Condição
    for(int aux = 0; aux <= tam; aux = aux + 1)
    {
            if(texto[aux] == texto[tam])
            {
                palindromo = 1;
            }
            tam = tam - 1;
    }
    // Imprimindo os resultados
    if(palindromo == 1)
    {
        printf("Esta palavras e um palindromo!");
    }
    else
    {
        printf("Esta palavra nao e um palindromo!");
    }
    return 0;
}