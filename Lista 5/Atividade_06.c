#include <stdio.h>
#include <stdlib.h>
int main()
{
//Introduzindo o programa
printf("\n---------------------------Este programa conta as ocorrências de um elemento-------------------------------\n");
//Vetor
printf("PRIMEIRO VETOR\n");
float vetor[20], numero;
int cont = 0;
for(int aux = 0; aux <= 19; aux = aux + 1)
{
    printf("Digite o valor do elemento %d: ", (aux+1));
    scanf("%f", &vetor[aux]);
}
//Pesquisa do valor
printf("Digite o valor a ser contabilizado: ");
scanf("%f", &numero);
//Condição
for(int aux = 0; aux <= 19; aux++)
{
    if(vetor[aux] == numero)
    cont = cont + 1;
}
//Imprimindo
printf("O numero escolhido aparece: %d", cont);

    return 0;
}