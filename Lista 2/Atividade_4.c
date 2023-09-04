#include <stdio.h>

int main(){

    //Declarando variáveis
    float numero_1, numero_2, media;

    //Imprimindo as informações
    printf("Digite o primeiro numero: ");
    //Lendo o primeiro némero
    scanf("%f", &numero_1);

    //Imprimindo as informações
    printf("Digite o segundo numero: ");
    //Lendo o segundo número
    scanf("%f", &numero_2);

    //media aritmética
    media = (numero_1 + numero_2) / 2;

    //Imprimindo o resultado
    printf("A media e: %f\n", media);

    return 0;
}