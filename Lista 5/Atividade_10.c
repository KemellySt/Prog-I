#include <stdio.h>
#include <stdlib.h>
int main()
{
//Introduzindo o programa
printf("\n--------------------------Este programa mostra a Uniao e Intercecao entre -----------------------------\n");
printf("                                              Dois Vetores                                                ");
//Pedindo os valores
int vetorA[5], vetorB[5], n = 0, n1 = 0, i = 5, tamI = 0;
//Vetor A
printf("\nVETOR A\n");
for(int aux = 0; aux <= 4; aux = aux + 1)
{
    printf("Digite o elemento %d: ", (n1 = n1 + 1));
    scanf("%d", &vetorA[aux]);
}
//Vetor B
printf("\nVETOR B\n");
for(int aux1 = 0; aux1 <= 4; aux1 = aux1 + 1)
{
    printf("Digite o elemento %d: ", (n = n+1));
    scanf("%d", &vetorB[aux1]);
}
//Imprimindo Vetores A e B
printf("\nVETOR A\n");
for(int aux2 = 0; aux2 <= 4; aux2 = aux2 + 1)
{
    printf("%d ", vetorA[aux2]);
}
printf("\nVETOR B\n");
for(int aux3 = 0; aux3 <= 4; aux3 = aux3 + 1)
{
    printf("%d ", vetorB[aux3]);
}
//União entre os vetores
int vetorUniao[10];
printf("\n");
printf("\nUNIAO\n");
for(int aux4 = 0; aux4 <= 4; aux4 = aux4 + 1)
{
    vetorUniao[aux4] = vetorA[aux4];
}
for(int aux5 = 0; aux5 <= 4; aux5 = aux5 + 1)
{
    vetorUniao[i] = vetorB[aux5];
    i = i + 1;
}
for(int aux6 = 0; aux6 <= 9; aux6 = aux6 + 1)
{
    printf("%d ", vetorUniao[aux6]);
}
//Intersecção entre os vetores
int vetorInter[5];
const int TAM = 5;
for (int i = 0; i < TAM; i++)
    vetorInter[i] = -99999999;
// Percorrer o vetor 1
for(int i = 0; i < TAM; i++)
{
    for(int j = 0; j < TAM; j++)
    {
        if(vetorA[i] == vetorB[j])
        {
            vetorInter[tamI] = vetorA[i];
            tamI = tamI + 1;
        }
    }
}
printf("\n");
printf("\nVETOR INTERSECCAO\n");
for(int aux8 = 0; aux8 < TAM; aux8 = aux8 + 1)
{
    if(vetorInter[aux8] == -99999999 )
        break;
    else 
        printf("%d ", vetorInter[aux8]);
}
    return 0;
}