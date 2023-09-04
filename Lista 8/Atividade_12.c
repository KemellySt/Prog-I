#include <stdio.h>
#include <stdlib.h>
int Anos(int Pais_A, int Pais_B);
void Imprimir(int Pais_A, int Pais_B);
int PaisA(int Pais_A, int Pais_B);
int PaisB(int Pais_A, int Pais_B);

int main()
{
    int Pais_A = 5000000;
    int Pais_B = 7000000;
    // Calculando
    Anos(Pais_A, Pais_B);
    // Imprimindo
    Imprimir(Pais_A, Pais_B);

    return 0;
}
int Anos(int Pais_A, int Pais_B)
{
    //Calculando a quantidade de pessoas por ano
    int Quant_Anos = 0, Populacao_A = 0, Populacao_B = 0;
    while(Pais_A < Pais_B)
    {
    Populacao_A = Pais_A * 0.03;
    Populacao_B = Pais_B * 0.02;
    Pais_A = Pais_A + Populacao_A;
    Pais_B = Pais_B + Populacao_B;
    Quant_Anos = Quant_Anos + 1; 
    }
    return Quant_Anos;
}
int PaisA(int Pais_A, int Pais_B)
{
    int Populacao_A = 0, Populacao_B = 0;
    while(Pais_A < Pais_B)
    {
    Populacao_A = Pais_A * 0.03;
    Populacao_B = Pais_B * 0.02;
    Pais_A = Pais_A + Populacao_A;
    Pais_B = Pais_B + Populacao_B; 
    }
    return Pais_A;
}
int PaisB(int Pais_A, int Pais_B)
{
    int Populacao_A = 0, Populacao_B = 0;
    while(Pais_A < Pais_B)
    {
    Populacao_A = Pais_A * 0.03;
    Populacao_B = Pais_B * 0.02;
    Pais_A = Pais_A + Populacao_A;
    Pais_B = Pais_B + Populacao_B;
    }
    return Pais_B;
}
void Imprimir(int Pais_A, int Pais_B)
{
    printf("A populacao do pais A ficara maior no ano: %d\n", Anos(Pais_A, Pais_B));
    printf("A quantidade de habitantes do Pais A sera: %d, no ano %d\n", PaisA(Pais_A, Pais_B), Anos(Pais_A, Pais_B));
    printf("A quantidade de habitantes do Pais B sera: %d, no ano %d", PaisB(Pais_A, Pais_B), Anos(Pais_A, Pais_B));
}