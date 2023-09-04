#include <stdio.h>
int main()
{
    // Declarando as variáveis
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    // Imprimindo o resutaldo
    printf("Resultado do somatorio: %d", somatorio(num));
    return 0;
}
int somatorio(int num)
{
    int resultado = 0;
    resultado = num + somatorio(num-1);
    return resultado;
}