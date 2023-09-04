#include <stdio.h>
int main(){
    //Declaração as variáveis
    float somaCF_PD_I, CustoF, PercentualD, Impostos;
    //Dando valores
    CustoF = 22600;
    PercentualD = (CustoF * 0.3);
    Impostos = (CustoF * 0.45);
    //Calculando a soma
    somaCF_PD_I = CustoF + PercentualD + Impostos;

    //Imprimindo o resultado
    printf("O custo de um carro novo: %.2f", somaCF_PD_I);

    return 0;
}