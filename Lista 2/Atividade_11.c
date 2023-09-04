#include <stdio.h>
int main(){
    //Declarando variáveis
    float Tcelsius, Tfahrenheit;

    //Imprimindo a informação
    printf("Digite a temperatura em Celsius: ");
    //Lendo a informação
    scanf("%f", &Tcelsius);

    //Calculando a conversão
    Tfahrenheit = (9 * Tcelsius) / 5 + 32;
    //Imprimindo o resultado da conversão
    printf("Na escala em Fahrenheit(F) e: %.1f", Tfahrenheit);

    return 0;
}