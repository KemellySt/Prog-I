#include <stdio.h>

int main()
{
//Declarando as variáveis
int numero, limite_superior, limite_inferior, aux;

//Recebendo as informações
printf("Digite o numero: ");
scanf("%d", &numero);
printf("Digite o limite superior: ");
scanf("%d", &limite_superior);
printf("Digite o limite inferior: ");
scanf("%d", &limite_inferior);

//Criando um auxiliar
aux = numero;

//Condição
for(numero; numero >= limite_inferior && numero < limite_superior; numero = numero + 1)
{
    if(numero % aux == 0)
    {
        if(numero != aux)
        printf("%d\n", numero);
    }
}
    printf("Limite inferior: %d\n", limite_inferior);
    printf("Limite superior: %d", limite_superior);

    return 0;
}