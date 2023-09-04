#include <stdio.h>
int main()
{
//Introduzindo o programa
printf("\n-------------------Este programa calcula a soma de elementos entre dois vetores-----------------------\n");
//Primeiro Vetor
printf("PRIMEIRO VETOR\n");
float vetor1[10];
for(int aux = 0; aux < 10; aux++)
{
    printf("Digite o valor do elemento %d:", (aux+1));
    scanf("%f", &vetor1[aux]);
}
//Segundo Vetor
printf("\nSEGUNDO VETOR\n");
float vetor2 [10];
for(int aux2 = 0; aux2 < 10; aux2++)
{
    printf("Digite o valor do elemento %d:", (aux2+1));
    scanf("%f", &vetor2[aux2]);
}

//Resultante
printf("\nVETOR RESULTANTE\n");
float vetorResult[10];
for(int aux3 = 0; aux3 < 10; aux3++)
{
    vetorResult[aux3] = vetor1[aux3] + vetor2[aux3];
    printf("A soma dos elementos dos vetores: %.2f\n",vetorResult[aux3]);
}
    return 0;
}