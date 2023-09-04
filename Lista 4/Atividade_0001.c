#include <stdio.h>
int main()
{
//Declarando as variáveis
int numero = 1;

//Condições
do
{
    printf("%d\n", numero);
    numero = numero + 1;
} while(numero > 1 && numero <= 10);

    return 0;
}