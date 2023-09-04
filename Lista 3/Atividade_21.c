#include <stdio.h>
int main()
{
//Declarando variáveis
float acrescimo, valor_mercadoria, valor_mnovo;

//Pedindo ao cliente
printf("Digite o valor da mercadoria: ");
scanf("%f", &valor_mercadoria);

//Calculando o acréscimo
if(valor_mercadoria < 2)
{
    acrescimo = 0.15;
    valor_mnovo = valor_mercadoria + acrescimo;
}
else
{
    if(valor_mercadoria >= 2 && valor_mercadoria <=5)
    {
        acrescimo = 0.02;
        valor_mnovo = valor_mercadoria + (acrescimo * valor_mercadoria);
    }

    if(valor_mercadoria >= 5 && valor_mercadoria <= 20)
    {
        acrescimo = 0.1;
        valor_mnovo = valor_mercadoria + (acrescimo * valor_mercadoria);
    }

    if(valor_mercadoria > 20)
    {
        acrescimo = 0.08;
        valor_mnovo = valor_mercadoria + (acrescimo * valor_mercadoria);
    }
}
printf("O novo valor e: %.3f", valor_mnovo);

    return 0;
}