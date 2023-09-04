#include <stdio.h>
int quadrado(num);
int cubo(num);
int main()
{
    //Declarando as variáveis
    int num;
    //Pedindo os valores
    printf("Digite um numero: ");
    scanf("%d", &num);
    //Imprimindo os resultados
    printf("O quadrado de %d: %d\n", num, quadrado(num));
    printf("O cubo de %d: %d", num, cubo(num));
}
int quadrado(int num)
{
    int reslt_quadrado;
    reslt_quadrado = num * num;
    return reslt_quadrado;
}
int cubo(int num)
{
    int reslt_cubo;
    reslt_cubo = num * quadrado(num);
    return reslt_cubo;
}