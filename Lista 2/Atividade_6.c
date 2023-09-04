#include <stdio.h>
int main(){
//Declarando as variáveis
float consumo, valorE, tarifa;
tarifa = 0.065; //R$ 6,50 para cada 100kW

//  Imprimindo as informações
printf("Digite o seu consumo em KW/h: ");

//Lendo as informações
scanf("%f", &consumo);

//Calculando o valor da conta de energia
valorE = tarifa * consumo;

//Imprimindo o resultado
printf("O valor da sua conta e: R$%.2f\n ", valorE);

return 0;
}