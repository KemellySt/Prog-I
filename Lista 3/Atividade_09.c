#include <stdio.h>
#include <math.h>

int main()
{
    //Declarando as variáveis
    float isosceles, equilatero, escaleno, med1, med2, med3;

    //Imprimindo as informações 
    printf("Digite o valor do primeiro lado do triangulo: ");
    scanf("%f", &med1);
    printf("Digite o valor do segundo lado do triangulo: ");
    scanf("%f", &med2);
    printf("Digite o valor do terceiro lado do triangulo: ");
    scanf("%f", &med3);

    //Comparando as condições
    if(med1 == med2 && med1 == med3 && med2 == med3)
    {
        printf("Este triangulo e um equilatero");
    }

    else
    {
        if(med1 == med2 && med1 != med3 && med2 != med3|| med2 == med3 && med2 != med1 && med3 != med1 || med3 == med1 && med3 != med2 && med1 != med2)
        {
            printf("Este triangulo e isosceles");
        }

        else
        {
            printf("Este triangulo e escaleno");
        }
    }

        return 0;
}