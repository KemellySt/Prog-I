#include <stdio.h>

int main()
{
//Declarando as variáveis
int Pais_A = 5000000, Populacao_A;
int Pais_B = 7000000, Populacao_B;
int Quant_Anos = 0;

//Calculando a quantidade de pessoas por ano
while(Pais_A < Pais_B)
{
    Populacao_A = Pais_A * 0.03;
    Populacao_B = Pais_B * 0.02;
    Pais_A = Pais_A + Populacao_A;
    Pais_B = Pais_B + Populacao_B;
    Quant_Anos = Quant_Anos + 1; 
}

printf("A populacao do pais A ficara maior no ano: %d\n", Quant_Anos);
printf("A quantidade de habitantes do Pais A sera: %d, no ano %d\n", Pais_A, Quant_Anos);
printf("A quantidade de habitantes do Pais B sera: %d, no ano %d", Pais_B, Quant_Anos);

    return 0;
}