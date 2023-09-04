#include <stdio.h>
float area(float raio);
float perimetro(float raio);
float diametro(float raio);
float pi = 3.1415;
int main()
{
    float raio;
    // Pedindo o valor do raio
    printf("Digite o valor do raio: ");
    scanf("%f", &raio);
    system("PAUSE");
    // Imprimindo os resultados
    printf("--------------------------------------------------------- RESULTADOS ----------------------------------------------------------\n");
    printf("\nA area do circulo: %.2f", area(raio));
    printf("\nO perimetro do circulo: %.2f", perimetro(raio));
    printf("\nO diametro do circulo: %.2f", diametro(raio));

    return 0;
}

float area(float raio)
{
    return pi * raio * raio;
}
float perimetro(float raio)
{
    return 2 * pi * raio;
}
float diametro(float raio)
{
    return 2 * raio;
}