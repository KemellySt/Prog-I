#include <stdio.h>
int main()
{
//Introduzindo o programa
printf("\n---------------------------Este programa encontra o elemento em uma sequencia-------------------------------\n");
//Declarando variáveis
char texto[50], chave;
int achou = 0;
//Imprimindo as pergunta
printf("Digite o texto: ");
scanf("%[^\n]s", texto);
printf("Digite a chave  a ser procurada: \n");
scanf(" %c", &chave);
//Comparando
for(int aux = 0; aux <= 49; aux = aux + 1)
{
    if(texto[aux] == chave)
    {
        achou = 1;
        break;
    }
}
//Resultado
printf("------------------------------------------------RESULTADO------------------------------------------------\n");
if(achou == 1)
{
    printf("O elemento foi encontrado!");
}
else
    printf("Elemento nao foi encontrado!");

    return 0;
}