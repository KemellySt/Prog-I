#include <stdio.h>
int main()
{
//Declarando as variáveis
float velocidade_Permitida, velocidade_Capturada;

//Imprimindo a informação
printf("Digite a velocidade capturada: ");
scanf("%f", &velocidade_Capturada);
printf("Digite a velocidade permitida pela via: ");
scanf("%f", &velocidade_Permitida);

//Condições
if(velocidade_Capturada <= velocidade_Permitida + 10)
{
    printf("O valor da multa: R$ 100,00");
}
if(velocidade_Capturada > velocidade_Permitida + 10 && velocidade_Capturada <= velocidade_Permitida + 30)
{
    printf("O valor da multa: R$ 200,00");
}
if(velocidade_Capturada > velocidade_Permitida + 30)
{
    printf("O valor da multa: R$ 500,00");
}

    return 0;
}