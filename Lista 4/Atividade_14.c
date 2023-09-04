#include <stdio.h>

int main()
{
//Declarando variáveis
int numero, divisores;

//Recebendo o numero
printf("Este programa mostra todos os divisores de um numero digitado.\n");
printf("Digite o numero: ");
scanf("%d", &numero);

//Condição
for(divisores = 1; numero > 0; divisores = divisores + 1)
{
    if(numero % divisores == 0)
    {
        printf("%d\n", divisores);
    }
}

    return 0;
}