#include <stdio.h>
#include <stdlib.h>
int main()
{
//Introduzindo o programa
printf("\n-----------------------------Este programa concatena dois vetores-------------------------------\n");
//Primeiro Vetor
printf("PRIMEIRO VETOR\n");
float vetor1[5];
int i = 5;
for(int aux = 0; aux < 5; aux++)
{
    printf("Digite o valor do elemento %d: ", (aux+1));
    scanf("%f", &vetor1[aux]);
}
//Segundo Vetor
printf("\nSEGUNDO VETOR\n");
float vetor2 [5];
for(int aux2 = 0; aux2 < 5; aux2++)
{
    printf("Digite o valor do elemento %d: ", (aux2+1));
    scanf("%f", &vetor2[aux2]);
}

//Resultante
printf("\nVETOR RESULTANTE\n");
float vetorResult[5];
for(int aux3 = 0; aux3 <= 4; aux3++)
{
    vetorResult[aux3] = vetor1[aux3];
}
for(int aux4 = 0; aux4 <= 4; aux4++)
{
    vetorResult[i] = vetor2[aux4];
    i = i + 1;
}
printf("Vetor Resultante: ");
for(int aux5 = 0; aux5 <= 9; aux5++)
{
    printf("%.0f ", vetorResult[aux5]);
}

    return 0;
}