#include <stdio.h>
int main(){
//Declarando variáveis
float Consumo_kW_mes, Valor_ContaSA, ValorTotal_Conta;
const float tarifa = 0.649;

//Imprimindo as informações
printf("Digite a quantidade de kW/m: ");
//Recebendo as informações
scanf("%f", &Consumo_kW_mes);

//Calculando o valor da conta sem alterações
Valor_ContaSA = tarifa * Consumo_kW_mes;

//Calculando o valor da conta
if(Consumo_kW_mes < 50)
{
    ValorTotal_Conta = Valor_ContaSA - (Valor_ContaSA * 0.3);
    printf("O valor a ser pago: R$ %.3f", ValorTotal_Conta);
}
else 
{
    if(Consumo_kW_mes > 400)
    {
        ValorTotal_Conta = Valor_ContaSA * 1.20;
        printf("O valor a ser pago: R$ %.3f", ValorTotal_Conta);
    }
    else
    {
        ValorTotal_Conta = Valor_ContaSA;
        printf("O valor a ser pago: R$ %.3f", ValorTotal_Conta);
    }
}
    return 0;
}