#include <stdio.h>

int main()
{
    int num, div = 0;
    printf("Digite um numero: ");
    scanf("%d", &num);

    while(num >= 0)
    {
        printf("Digite um numero: ");
        scanf("%d", &num);
        for(int aux = 1; aux <= num; aux++)
        {
            if(num % aux == 0)
            {
                div = div + 1;
            }
        }
        // Resultados
        if(div == 2)
        {
            printf("Este numero e primo");
        }
        else
        {
            printf("Este numero nao e primo!");
        }
    }
    printf("Programa finalizado!");
    return 0;
}