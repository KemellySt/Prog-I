#include<stdio.h>

// definição das funções
// protótipo (ou assinatura) das funções -> tipo_de_retorno nome_da_funcao(lista de parametros);
void imprimeVetor(int vet[], int tamanho);
void leValoresVetor(int vet[], int tamanho);
void concatenaVetores(int vetD[], int vet1[], int tamVet1, int vet2[], int tamVet2);

int main() {

    int tamV1, tamV2;

    printf("Informe o tamanho do vetor 1: ");
    scanf("%d", &tamV1);
    printf("Informe o tamanho do vetor 2: ");
    scanf("%d", &tamV2);

    const int tamV3 = tamV1 + tamV2;

    int v1[tamV1], v2[tamV2], v3[tamV3];

    printf("Informe os valores de V1: \n");
    leValoresVetor(v1, tamV1);

    printf("\nInforme os valores de V2: \n");
    leValoresVetor(v2, tamV2);

    printf("\nVetor 1: ");
    imprimeVetor(v1, tamV1);
    printf("\nVetor 2: ");
    imprimeVetor(v2, tamV2);

    concatenaVetores(v3, v1, tamV1, v2, tamV2);
    printf("\nVetor 3: ");
    imprimeVetor(v3, tamV3);


    return 0;
}

// função que imprime os elementos de um vetor unidimensional
void imprimeVetor(int vet[], int tamanho) {
    for (int i = 0; i < tamanho; i++)
        printf("[%d]", vet[i]);
}

void leValoresVetor(int vet[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("[%d]: ", i);
        scanf("%d", &vet[i]);
    }
}

void concatenaVetores(int vetD[], int vet1[], int tamVet1, int vet2[], int tamVet2){

    const int tamVet3 = tamVet1 + tamVet2;

    for (int i = 0; i < tamVet1; i++)
        vetD[i] =  vet1[i];
    for (int i = tamVet1; i < tamVet3; i++)
        vetD[i] =  vet2[i-tamVet1];
}
