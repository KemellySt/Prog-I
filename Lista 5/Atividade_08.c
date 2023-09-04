#include <stdio.h>
#include <stdlib.h>
int main()
{
//Introduzindo o programa
printf("\n---------------------------Este programa ordena em ordem crescente os elementos-----------------------------\n");
//Pedindo os valores
int vetor[20], recebedor; 
int n = 0;
printf("\n");
for(int aux = 0; aux <= 19; aux = aux + 1) 
{
    printf("Digite o elemento %d do vetor: ", (n = n+1));
    scanf("%d", &vetor[aux]);
}
//Comparando os números
for(int aux = 0; aux <= 19; aux = aux + 1)
{
    for(int aux1 = 0; aux1 <= 19; aux1 = aux1 + 1)
        if(vetor[aux] < vetor[aux1])
        {
            recebedor = vetor[aux];
            vetor[aux] = vetor[aux1];
            vetor[aux1] = recebedor;
        }
}
//Imprimindo
printf("--------------------------------------ORDEM CRESCENTE DOS ELEMENTOS-------------------------------------------\n");
printf("\n");
for(int aux2 = 0; aux2 <= 19; aux2 = aux2 + 1)
{
    printf("%d ", vetor[aux2]);
}

    return 0;
}