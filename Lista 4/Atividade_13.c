#include <stdio.h>

int main()
{
//Declarando as variáveis
int numero, n_fatorial;

//Explicando o funcionamento do programa
printf("Este programa calcula fatorial de um numero!\n");

//Recebendo o numero
printf("Digite o numero: ");

//Condição
while(scanf("%d", &numero) == 1)
{
    if(numero > 0)
    {
        for(n_fatorial = 1; numero > 1; numero = numero - 1)
        {
            n_fatorial = n_fatorial * numero;
        }
        //Imprimindo o resultado
            printf("O fatorial deste numero e: %d\n", n_fatorial);
            printf("Digite o numero: ");
    }
    else
        printf("Programa finalizado.");
}
    return 0;
}