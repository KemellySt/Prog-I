#include <stdio.h>
#include <stdlib.h>
int main()
{
//Introduzindo o programa
printf("\n--------------------------Este programa separa elementos impares e pares-------------------------------\n");
//Pedindo os valores
int vetor[20], vetorP[20], vetorI[20]; 
int n = 0;
for(int aux = 0; aux <= 19; aux = aux + 1) 
{
    printf("Digite o elemento %d do vetor: ", (n = n+1));
    scanf("%d", &vetor[aux]);
}
//Imprimindo a Principal
printf("\nVETOR PRINCIPAL\n");
for(int aux2 = 0; aux2 <= 19; aux2 = aux2 + 1)
{
    printf("%.0d ", vetor[aux2]);
}
//Impares e Pares
printf("\nVETOR PAR\n");
for(int aux1 = 0; aux1 <= 19; aux1 = aux1 + 1)
{
    if(vetor[aux1] % 2 == 0)
    {
        vetorP[aux1] = vetor[aux1];
        printf("%.0d ", vetorP[aux1]);
    }
}
printf("\nVETOR IMPAR\n");
for(int aux3 = 0; aux3 <= 19; aux3 = aux3 + 1)
{
    if(vetor[aux3] % 2 != 0)
    {
        vetorI[aux3] = vetor[aux3];
        printf("%.0d ", vetorI[aux3]);
    }
}

    return 0;
}