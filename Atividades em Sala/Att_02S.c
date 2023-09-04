#include <stdio.h>

int main()
{
//Declarando as variáveis
int tamanho;
//Introduzindo o programa
printf("Este programa calcula a soma de elementos entre dois vetores\n");

//Pedindo ao usuário o tamanho
printf("\nDigite o tamanho do vetor: ");
scanf("%d", &tamanho);

//Primeiro Vetor
printf("PRIMEIRO VETOR\n");
float vetor1[tamanho];
for(int aux = 0; aux < tamanho; aux++)
{
    printf("Digite o valor do elemento do primeiro vetor %d:", (aux+1));
    scanf("%f", &vetor1[aux]);
}
//Segundo Vetor
printf("SEGUNDO VETOR\n");
float vetor2 [tamanho];
for(int aux2 = 0; aux2 < tamanho; aux2++)
{
    printf("Digite o valor do elemento %d:", (aux2+1));
    scanf("%f", &vetor2[aux2]);
}

//Resultante
printf("VETOR RESULTANTE\n");
float vetorR[tamanho];
for(int aux3 = 0; aux3 < tamanho; aux3++)
{
    vetorR[aux3] = vetor1[aux3] + vetor2[aux3];
    printf("A soma dos elementos dos vetores: %.2f\n",vetorR[aux3]);
}

    return 0;
}