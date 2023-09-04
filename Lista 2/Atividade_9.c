#include <stdio.h>
int main(){

    //Declarando as variáveis
    float Quan_Smart, ValorAl, Fat_An, ValorAtr, ValorGM, Quan_SmartFA, Quan_SmartEst, Quan_SmartRe;
    int Quan_SmartAl;
    int Quan_SmartAtr;

    //Imprimindo: Quantidade de smartphones inicial
    printf("Quantos smartphones a locadora possui? ");
    //Lendo a informação
    scanf("%f", &Quan_Smart);
    //Imprimindo: Valor obrado pelo aluguel
    printf("Valor cobrado pelo aluguel: ");
    //Lendo a informação
    scanf("%f", &ValorAl);
    //Calculando a quantidade de Smartphones Alugados
    Quan_SmartAl = Quan_Smart / 3;
    //Calculando a quantidade de Smartphones Atrasados
    Quan_SmartAtr = Quan_SmartAl / 10;
    //Calculando o valor de faturamento anual
    Fat_An = (Quan_SmartAl * ValorAl) * 12;
    //Calculando o valor quando o cliente atrasa
    ValorAtr = (0.1 * ValorAl) + ValorAl;
    //Calculando o valor ganho por multas
    ValorGM = (Quan_SmartAtr * ValorAtr) - (ValorAl * Quan_SmartAtr);
    //Calculando a quantidade de smartphones que estragam por ano
    Quan_SmartEst = (2 * Quan_SmartAl / 100);
    //Calculando a quantidade que são repostos
    Quan_SmartRe = 0.1 * Quan_SmartEst;
    //Calculando a quantidade no final do ano
    Quan_SmartFA = (Quan_Smart - Quan_SmartAl) + ((Quan_SmartAl -  Quan_SmartEst) + Quan_SmartRe);

    //Imprimindo o resultado
    printf("O valor de faturamento anual: R$ %.2f\n", Fat_An);
    printf("O valor ganho por multas: R$ %.2f\n", ValorGM);
    printf("A quantidade de smartphones que a locadora tera no final do ano: %.0f", Quan_SmartFA);


    return 0;
}