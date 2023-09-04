#include <stdio.h>
#include <string.h>

int main()
{
    // Introduzindo o programa
    printf("\n------------------------Este programa contabiliza vogais, cosoantes e espacos-----------------------------\n");
    // Declarando variáveis
    char texto[30];
    int contE = 0, contV = 0, contC = 0;
    // Imprimindo a pergunta
    printf("Digite o texto: ");
    scanf("%[^\n]s",texto);
    // Contando
    for (int aux = 0; texto[aux] != '\0'; aux = aux + 1)
    {
        if (texto[aux] == ' ' || texto[aux] == 'a' || texto[aux] == 'A' || texto[aux] == 'e' || texto[aux] == 'E' || texto[aux] == 'i' || texto[aux] == 'I' || texto[aux] == 'o' || texto[aux] == 'O' || texto[aux] == 'U' || texto[aux] == 'u')
        {
            if (texto[aux] == ' ')
            {
                contE = contE + 1;
            }
            else
            {
                contV = contV + 1;
            }
        }
        else{
            contC = contC + 1;
        }
    }

    // Imprimindo os resultados
    printf("------------------------------------------------------RESULTADOS-------------------------------------------------------------------\n");
    printf("A quantidade de espacos em brancos: %d\n", contE);
    printf("A quantidade de vogais: %d\n", contV);
    printf("A quantidade de consoantes: %d", contC);

    return 0;
}