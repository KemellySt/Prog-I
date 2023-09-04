#include <stdio.h>

int main()
{
//Declarando variáveis
int numero = 10;

//Condição
do
{
    printf("%d\n", numero);
    numero = numero - 1;

}while(numero >= 1 && numero <=10);

    return 0;
}