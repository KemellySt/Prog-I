#include <stdio.h>
int main()
{
//Declarando as variáveis
int Ano;

//Imprimindo as informações
printf("Digite o ano: ");
scanf("%d", &Ano);

//Condições para ser bissexto ou não
if(Ano % 4 == 0 || Ano % 400 == 0)
{
    printf("Esse ano e bissexto.");
}
else
    printf("Esse ano nao e bissexto.");

    return 0;
}