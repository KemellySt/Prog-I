#include <stdio.h>
float area(float raio);

int main()
{
    float raio;
    // Pedindo o valor do raio
    printf("Digite o valor do raio: ");
    scanf("%f", &raio);
    // Imprimindo os resultados
    printf("A area do circulo: %.2f", area(raio));

    return 0;
}

float area(float raio)
{
    float area;
    float pi = 3.1415;
    area = pi * raio * raio;
    return area;
}
