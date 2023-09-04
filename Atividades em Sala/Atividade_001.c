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
    for(int aux = 1; aux <= num; aux = aux + 1)
    {
        resultado = resultado + aux;
    }
    return resultado;
}