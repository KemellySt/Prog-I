#include <stdio.h>
#include <math.h>
float area(float altura, float base);
float perimetro(float altura, float base);
float diagonal(float altura, float base);


int main()
{
    //Declarando as variáveis
    float altura, base;
    //Pedindo as informações
    printf("======================================== Programa calcula diagonal, area e perimetro de um retangulo ==========================\n");
    printf("Digite o valor da base: ");
    scanf("%f", &base);
    printf("Digite o valor da altura: ");
    scanf("%f", &altura);
    //Imprimindo os resultados
    printf("\n============================================================ Resultados =============================================================\n");
    printf("\nAREA: %.2f\n", area(altura, base));
    printf("PERIMETRO: %.2f\n", perimetro(altura, base));
    printf("DIAGONAL: %.2f", diagonal(altura, base));

    return 0;
}   
float area(float altura, float base)
{
    float area;
    area = altura * base;
    return area;
}
float perimetro(float altura, float base)
{
    float perimetro;
    perimetro = (2 * altura + 2 * base);
    return perimetro;
}
float diagonal(float altura, float base)
{
    float diagonal;
    diagonal = sqrt(pow(altura, 2) + pow(base, 2));
    return diagonal;
}