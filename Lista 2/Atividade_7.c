#include <stdio.h>
#include <math.h>

int main() {
    //Declarando variáveis
    float altura, base, diagonal, area, perimetro;

    //Imprimindo valor da altura
    printf("Digite um valor para a altura: ");
    //Lendo as informações
    scanf("%f", &altura);

    // Imprimindo valor da base
    printf("Digite um valor para a base: ");
    //Lendo as informações
    scanf("%f", &base);

    //Calculando a area
    area = altura * base;
    //Calculando o perímetro
    perimetro = 2 * altura + 2 * base;
    //Calculando a diagonal
    diagonal = sqrt(base * base + altura * altura);

    //Imprimindo resultado
    printf("Area do retangulo: %.1f\n", area);
    printf("Perimetro do retangulo: %.1f\n", perimetro);
    printf("Diagonal do retangulo: %.1f", diagonal);

    return 0;
}