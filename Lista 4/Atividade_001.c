#include <stdio.h>
int main()
{
//Declarando as variáveis
int numero = 1;

//Condição
while(numero >= 1 && numero <= 10)
{
   printf("%d\n", numero);
   numero = numero + 1;
}

    return 0;
}