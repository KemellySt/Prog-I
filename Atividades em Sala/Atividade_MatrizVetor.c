#include <stdio.h>
#include <stdlib.h>
int main()
{
int matA[4][4], matB[4][4], matR[4][4], i = 0, j = 0;
//Introdução
printf("\n---------------------------Este programa soma duas matrizes-------------------------------\n");
//Matriz A
printf("MATRIZ A\n");
for(int aux = 0; aux <= 3; aux++)
{
    for(int aux2 = 0; aux2 <= 3; aux2 = aux2 + 1)
    {
        printf("Digite os valor [%d][%d]: ", aux, aux2);
        scanf("%d", &matA[aux][aux2]);
    }
}
//Matriz B
printf("\nMATRIZ B\n");
for(int aux3 = 0; aux3 <= 3; aux3 = aux3 + 1)
{
    for(int aux4 = 0; aux4 <= 3; aux4 = aux4 + 1)
    {
        printf("Digite o valor [%d][%d]: ", aux3, aux4);
        scanf("%d", &matB[aux3][aux4]);
    }
}

//Matriz Resultante
printf("\nMATRIZ RESULTANTE\n");
for(int aux5 = 0; aux5 <= 3; aux5 = aux5 + 1)
{
    for(int aux6 = 0; aux6 <= 3; aux6 = aux6 + 1)
    {
        matR[aux5][aux6] = matA[aux5][aux6] + matB[aux5][aux6];
        printf("a(%d, %d): %d\n", i, j, matR[aux5][aux6]);
        i = i + 1;
        j = j + 1;
    }
}

    return 0;
}