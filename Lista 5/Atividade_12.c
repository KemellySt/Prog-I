#include <stdio.h>
#include <string.h>
int main()
{
    //Introduzindo o programa
    printf("\n------------------------Este programa transforma letras minusculas em maiusculas-----------------------------\n");
    //Declarando variáveis
    char texto[50];
    //Imprimindo a pergunta
    printf("Digite o texto: ");
    scanf(" %[^\n]s", texto);
    //Condição
    for(int aux = 0; texto[aux] != '\0'; aux++)
    {
        if(texto[aux] == texto[0])
        {
            texto[aux] = texto[aux]- 'a' + 'A';
        }
        if(texto[aux-1] == ' ')
        {
            texto[aux] = texto[aux]- 'a' + 'A';
        }
    }
    //Resultado
    printf("%s", texto);

    return 0;
}