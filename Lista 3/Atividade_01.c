#include <stdio.h>

int main(){
//Declarando variáveis
float numero;

//Imprimindo as informações
printf("Digite um numero: ");
//Recebendo a informação
scanf("%f", &numero);

//Comparando as condições
if (numero > 0)
{
    printf("O numero digitado e positivo.\n");
}
else
{
    if (numero == 0)
    { 
    printf("O numero digitado e nulo.\n");
    }
    else
    {
        printf("O numero digitado e negativo");
    }
}
    return 0;
}