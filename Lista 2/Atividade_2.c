#include <stdio.h>
int main(){

    // Declarando as variáveis
    const float Pi = 3.14;
    float raio, comprimento, area;

    //Imprimindo as informações
    printf("Digite o raio: ");

    //Lê a entrada
    scanf("%f", &raio );

    //Calculando o comprimento
    comprimento = 2 * Pi * raio;

    //Calculando a area
    area = Pi * raio * raio;

    //Imprimindo o resultado
    printf("A area da circunferencia: %f\n", area);
    printf("O comprimento da circuferencia: %f", comprimento);

    return 0;
}