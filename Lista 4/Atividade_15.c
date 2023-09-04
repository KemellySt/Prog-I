#include <stdio.h>

int main()
{
//Declarando as variáveis
int numero, auxiliar, resultado = 0;

//Recebendo o número
printf("Este programa analisa se um numero e primo ou nao!\n");
printf("Digite o numero: ");
scanf("%d", &numero);

//Condição
for(auxiliar = 2; auxiliar <= numero / 2; auxiliar = auxiliar + 1)
{
    if(numero % auxiliar == 0)
    {
        resultado = resultado + 1;
    }
}
if(resultado == 0)
{
    printf("Este numero e primo!");
}
else
    printf("Este numero nao e primo!");

    return 0;
}