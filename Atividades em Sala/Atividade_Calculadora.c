#include <stdio.h>
int main()
{
//Declarando as variáveis
float numero1, numero2, resultado;
char escolha;

//Imprimindo a escolha
printf("Qual operacao deve ser efetuada? ");
scanf("%c", &escolha);

//Imprimindo o primeiro número
printf("Digite o primeiro numero: ");
scanf("%f", &numero1);
//Imprimindo o segundo número
printf("Digite o segundo numero: ");
scanf("%f", &numero2);

//Condições
if(escolha == '+')
{
    resultado = numero1 + numero2;
}
else
{
    resultado = numero1 - numero2;
}
else if(escolha == '*')
{
    resultado = numero1 * numero2;
}
if(escolha == '/')
{
    if(numero2 != 0)
    {
    resultado = numero1 / numero2;
    }
    else
    {
        printf("Divisao por zero!");
    }
}
else
{
    printf("Operacao Invalida!");
}

    return 0;
}