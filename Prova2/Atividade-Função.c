#include <stdio.h>
int quadrado(int num);
int cubo(int num);
int main()
{
    int num, r;
    printf("Digite o numero: ");
    scanf("%d", &num);
    r = quadrado(num);
    printf("O quadrado deste numero eh: %d\n", r);
    printf("O cubo deste numero eh: %d", cubo(num));

    return 0;
}
int quadrado(int num)
{
    int resultado;
    resultado = num * num;
    return resultado;

}
int cubo(int num)
{
    int resultado;
    resultado = num * quadrado(num);
    return resultado;
}