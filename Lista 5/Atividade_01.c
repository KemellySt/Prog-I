#include <stdio.h>
int main()
{
    //Declarando as variáveis
    int Matriz[10];
    for(int aux1 = 0; aux1 <= 9; aux1 = aux1 + 1)
    {
        printf("Digite os valores dos elementos da Matriz: ");
        scanf("%d ", Matriz[aux1]);
    }
    for(int aux = 0; aux <= 9; aux = aux + 1)
    {
        Matriz[aux] = aux * 2;
    }
    for(int aux = 0; aux <= 9; aux = aux + 1)
    {
    printf("Elemento %d: %d\n", (aux + 1) ,  Matriz[aux]);
    }
        return 0;
    }