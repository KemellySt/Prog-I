#include <stdio.h>
#include <math.h>

int main()
{
//Declarando as variáveis
float a, b, c, delta, raiz1, raiz2;

//Imprimindo as informações
printf("Digite o valor de a: ");
scanf("%f", &a);
printf("Digite o valor de b: ");
scanf("%f", &b);
printf("Digite o valor de c: ");
scanf("%f", &c);

//Calculando o delta
delta = pow (b,2) - (4 * a * c);

printf("Delta: %.0f\n", delta);

//Condições para o delta
if(delta > 0)
{
    raiz1 = (-b + sqrt(delta)) / (2 * a);
    raiz2 = (-b - sqrt(delta)) / (2 * a);
    printf("A raizes dessa equacao sao: %.1f e %.1f", raiz1, raiz2);
}
else
{
    if(delta == 0)
    {
    raiz1 = (-b + sqrt(delta)) / (2 * a);
    raiz2 = raiz1;
    printf("A raizes dessa equacao sao iguais: %.1f e %.1f", raiz1, raiz2);
    }

    else
    {
    printf("Essa equacao nao possui raizes reais. ");
    }
}

    return 0;
}