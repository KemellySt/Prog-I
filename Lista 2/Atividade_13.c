#include <stdio.h>
int main(){
    //Declarando as variáveis
    float Quan_polegada, Quan_milimetro;

    //Imprimindo as informações
    printf("O valor da quantidade de chuva em polegada: ");
    //Lendo a informação
    scanf("%f", &Quan_polegada);
    //Calculando a conversão
    Quan_milimetro = Quan_polegada * 25.4;
    //Imprimindo o resultado
    printf("Em milimetro e: %.2f", Quan_milimetro);

    return 0;
}