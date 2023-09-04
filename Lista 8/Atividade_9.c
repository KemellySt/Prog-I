#include <stdio.h>
void ImprimirP(int numero);

int main()
{
    // Declarando variáveis
    int numero;
    ImprimirP(numero);

    return 0;
}
void ImprimirP(int numero)
{
    numero = 1;
    for(numero; numero >= 1 && numero <= 100; numero++)
    {
        if(numero % 2 == 0)
        {
            printf("%d\n", numero);
        }
    }
}