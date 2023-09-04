#include <stdio.h>
int main()
{
//Declarando as variáveis
int valorD;

//Imprimindo as informações
printf("Digite o valor inteiro: ");
scanf("%d", &valorD);

//Comparando condições
if(valorD >= 1 && valorD <= 12)
{
    if(valorD == 1)
    {
        printf("January");
    }
    if(valorD == 2)
    {
        printf("February");
    }
    if(valorD == 3)
    {
        printf("March");
    }
    if(valorD == 4)
    {
        printf("April");
    }
    if(valorD == 5)
    {
        printf("May");
    }
    if(valorD == 6)
    {
        printf("June");
    }
    if(valorD == 7)
    { 
        printf("July");
    }
    if(valorD == 8)
    {
        printf("August");
    }
    if(valorD == 9)
    {
        printf("September");
    }
    if(valorD == 10)
    {
        printf("October");
    }
    if(valorD == 11)
    {
        printf("November");
    }
    if(valorD == 12)
    {
        printf("December");
    }
}
else
{
    printf("Nao existe um mes correspondente ao valor digitado!");
}
    return 0;
}