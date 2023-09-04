#include <stdio.h>
int main()
{
//Declarando as variáveis
float PLitro_Alcool, PLitro_Gasolina, VantagemPreco;

//Imprimindo e coletando as informações: Alcool
printf("Digite o valor do alcool por litro: ");
scanf("%f", &PLitro_Alcool);
//Imprimindo e coletando as informações: Gasolina
printf("Digite o valor da gasolina por litro: ");
scanf("%f", &PLitro_Gasolina);

//Calculando a vantagem
VantagemPreco = PLitro_Alcool / PLitro_Gasolina;

//Analisando as condições
if(VantagemPreco < 0.7)
{
    printf("O etanol e mais vantajoso para este motorista!");
}
else
{
    printf("A gasolina e mais vantajosa para este motorista!");
}
    return 0;
}