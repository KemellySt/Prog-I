#include <stdio.h>
#include <math.h>
float Delta(float a, float b, float c);
float raiz1(float a, float b, float c);
float raiz2(float a, float b, float c);

int main()
{
    //Declarando as variáveis
    float a, b, c, aux = 1;
    // Pedindo os valores
    printf("------------------------------------------------------------- Calculadora de raizes da funcao do segundo grau ---------------------------------------------------\n");
    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);
    printf("Digite o valor de c: ");
    scanf("%f", &c);

    // Imprimindo
    printf("------------------------------------------------------------------------------ Resultados ------------------------------------------------------------------------\n");
    printf("Delta: %.0f\n", Delta(a, b, c));

    if(aux != 0)
    {
        printf("A raizes dessa equacao sao: %.1f e %.1f", raiz1(a, b, c), raiz2(a, b, c));
    }
    else
        printf("Essa equacao nao possui raizes reais. ");

    return 0;
}

float Delta(float a, float b, float c)
{
    //Calculando o delta
    float delta;
    delta = pow(b,2) - (4 * a * c);

    return delta;
}
float raiz1(float a, float b, float c)
{
    float raiz1, aux = 1;

    if(Delta(a, b, c) > 0)
    {
        raiz1 = (-b + sqrt(Delta(a, b, c))) / (2 * a);
        return raiz1;
    }
    else
    {
        if(Delta(a, b, c) == 0)
        {
        raiz1 = (-b + sqrt(Delta(a, b, c))) / (2 * a);
        return raiz1;
        }

        else
        {
            aux = 0;
            return aux;
        }
    }
}
float raiz2(float a, float b, float c)
{
    float raiz2, aux = 1;
    if(Delta(a, b, c) > 0)
    {
        raiz2 = (-b - sqrt(Delta(a, b, c))) / (2 * a);
        return raiz2;
    }
    if(Delta(a, b, c) == 0)
    {
        raiz2 = raiz1(a, b, c);
        return raiz2;
    }
    else
    {
        aux = 0;
        return aux;
    }
}