#include <stdio.h>
#include <stdlib.h>
int main()
{
//Introduzindo o programa
printf("\n-----------------------------Este programa concatena dois vetores-------------------------------\n");
//Primeiro Vetor
printf("PRIMEIRO VETOR\n");
float vetor1[5];
int i = 0, j = 0;
for(int aux = 0; aux <= 4; aux = aux + 1)
{
    printf("Digite o valor do elemento %d: ", (aux+1));
    scanf("%f", &vetor1[aux]);
}
//Segundo Vetor
printf("\nSEGUNDO VETOR\n");
float vetor2 [5];
for(int aux2 = 0; aux2 <= 4; aux2 = aux2 + 1)
{
    printf("Digite o valor do elemento %d: ", (aux2+1));
    scanf("%f", &vetor2[aux2]);
}
//Resultante
printf("\nVETOR RESULTANTE\n");
float vetorResult[10];
for(int aux3 = 0; aux3 <= 9; aux3 = aux3 + 2)
{
    vetorResult[aux3] = vetor1[j];
    j = j + 1;
}
for(int aux4 = 1; aux4 <= 9; aux4 = aux4 + 2)
{
    vetorResult[aux4] = vetor2[i];
    i = i + 1;
}
printf("Vetor Resultante: ");
for( int aux5 = 0; aux5 <= 9; aux5++)
{
    printf("%.0f ", vetorResult[aux5]);
}

    return 0;
}