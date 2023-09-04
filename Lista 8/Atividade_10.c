#include <stdio.h>
#include <stdlib.h>
void matriz(int tam);

int main()
{
    // Declarando as variáveis
    int tam;
    // Pedindo ao usuário
    printf("Digite o tamanho da matriz: ");
    scanf("%d", &tam);
    // Montando a matriz
    matriz(tam);
    
    return 0;
}
void matriz(int tam)
{
    //Montando a matriz
    for(int aux1 = 1; aux1 <= tam; aux1++)
    {
        printf("\n");
        for(int aux = 1; aux <= tam; aux++)
        {
            printf("\t%d,%d", aux1, aux);
        }
    }
}