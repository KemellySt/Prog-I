#include <stdio.h>
int main()
{
    //Declarando as variáveis
    float numero1, numero2, numero3, numero4, numero5, auxiliar;

    //Imprimindo as informações
    printf("Qual e o primeiro numero? ");
    scanf("%f", &numero1);
    printf("Qual e o segundo numero? ");
    scanf("%f", &numero2);
    printf("Qual e o terceiro numero? ");
    scanf("%f", &numero3);
    printf("Qual e o quarto numero? ");
    scanf("%f", &numero4);
    printf("Qual e o quinto numero? ");
    scanf("%f", &numero5);

    //Comparando com o número 1
    if(numero1 > numero2)
    {
        auxiliar = numero1;
        numero1 = numero2;
        numero2 = auxiliar;
    }
    if(numero1 > numero3)
    {
        auxiliar = numero1;
        numero1 = numero3;
        numero3 = auxiliar;
    }
    if(numero1 > numero4)
    {
        auxiliar = numero1;
        numero1 = numero4;
        numero4 = auxiliar;
    }
    if(numero1 > numero5)
    {
        auxiliar = numero1;
        numero1 = numero5;
        numero5 = auxiliar;
    }
    //Comparando com o número 2

    if(numero2 > numero3)
    {
        auxiliar = numero2;
        numero2 = numero3;
        numero3 = auxiliar;
    }
    if(numero2 > numero4)
    {
        auxiliar = numero2;
        numero2 = numero4;
        numero4 = auxiliar;
    }
    if(numero2 > numero5)
    {
        auxiliar = numero2;
        numero2 = numero5;
        numero5 = auxiliar;
    }
    //Comparando com o número 3
    if(numero3 > numero4)
    {
        auxiliar = numero3;
        numero3 = numero4;
        numero4 = auxiliar;
    }
    if(numero3 > numero5)
    {
        auxiliar = numero3;
        numero3 = numero5;
        numero5 = auxiliar;
    }
    //Comparando com o número 4 e 5
    if(numero4 > numero5)
    {
        auxiliar = numero4;
        numero4 = numero5;
        numero5 = auxiliar;
    }
    //Imprimindo os resultados
    printf("A ordem crescente desses numeros: %.1f, %.1f, %.1f, %.1f, %.1f\n", numero1, numero2, numero3, numero4, numero5);

    return 0;
}