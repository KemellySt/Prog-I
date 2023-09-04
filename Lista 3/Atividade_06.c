#include <stdio.h>
int main()
{
    // Declarando as variáveis
    int numero;

    // Imprimindo a informação
    printf("Digite um numero: ");

    // Recebendo o numero
    scanf("%d", &numero);

    // Calculando a condição
    if(numero % 2 == 0 && numero % 3 == 0)
    {
        printf("O numero digitado e divisivel por 2 e 3.", numero);
    }
    else
    {
        printf("O numero digitado nao e divisivel por 2 e 3.", numero);
    }
    return 0;
}