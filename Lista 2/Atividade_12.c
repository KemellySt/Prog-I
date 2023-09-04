#include <stdio.h>
int main(){
    //Declarando as variáveis
    float TCelsius, TFahrenheit;

    //Imprimindo as informações
    printf("Digite a temperatura em Fahrenheit: ");
    //Lendo a informação
    scanf("%f", &TFahrenheit);

    //Calculando a conversão
    TCelsius = (TFahrenheit -32) * 5 / 9;
    //Imprimindo o resultado
    printf("Na escala em Celsius e: %.1f", TCelsius);

    return 0;
}