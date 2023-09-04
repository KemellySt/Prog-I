#include <stdio.h>
void leinf(float PLitro_Alcool, float PLitro_Gasolina);
float Vantagem(float PLitro_Alcool, float PLitro_Gasolina);

int main()
{
    // Declarando as variáveis
    float PLitro_Alcool, PLitro_Gasolina, VantagemPreco;
    // Coletando resultados
    printf("============================================= Preencha os dados abaixo ===================================================\n");
    leinf(PLitro_Alcool, PLitro_Gasolina);
    // Imprimindo os resultados
    printf("==================================================== RESULTADOS ==========================================================\n");
    // Analisando as condições
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
void leinf(float PLitro_Alcool, float PLitro_Gasolina)
{
    // Coletando as informações: Alcool
    printf("Digite o valor do alcool por litro: ");
    scanf("%f", &PLitro_Alcool);

    // Imprimindo e coletando as informações: Gasolina
    printf("Digite o valor da gasolina por litro: ");
    scanf("%f", &PLitro_Gasolina);
}
float Vantagem(float PLitro_Alcool, float PLitro_Gasolina)
{
    float VantagemPreco;
    VantagemPreco = PLitro_Alcool / PLitro_Gasolina;
    return VantagemPreco;
}