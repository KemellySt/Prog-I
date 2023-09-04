#include <stdio.h>
void lev1( int V1[], int tam);
void lev2(int V2[], int tam);
void v3(int V1[], int V2[], int tam);

int main()
{
    int tam;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);
    int V1[tam], V2[tam];
    // V1
    for(int aux = 0; aux < tam; aux = aux + 1)
    {
    printf("Digite o valor do elemento %d: ", (aux+1));
    scanf("%d", &V1[aux]);
    }
    // V2
    for(int aux2 = 0; aux2 < tam; aux2 = aux2 + 1)
    {
    printf("Digite o valor do elemento %d: ", (aux2+1));
    scanf("%d", &V2[aux2]);
    }
    // V3
    v3(V1, V2, tam);

    return 0;
}

/*void lev1(int V1[], int tam)
{
    for(int aux = 0; aux < tam; aux = aux + 1)
    {
    printf("Digite o valor do elemento %d: ", (aux+1));
    scanf("%d", &V1[aux]);
    }
}
void lev2(int V2[], int tam)
{
    for(int aux2 = 0; aux2 < tam; aux2 = aux2 + 1)
    {
    printf("Digite o valor do elemento %d: ", (aux2+1));
    scanf("%d", &V2[aux2]);
    }
}*/
void v3(int V1[], int V2[], int tam)
{
    int tamV3 = tam + tam;
    int V3[tamV3], i = 0, j = 0;
    for(int aux3 = 0; aux3 < tamV3; aux3 = aux3 + 1)
    {
        V3[aux3] = V1[j];
        j = j + 1;
    }
    for(int aux4 = tamV3 - tam; aux4 < tamV3; aux4 = aux4 + 1)   
    {
        V3[aux4] = V2[i];
        i = i + 1;
    }
    printf("V3: ");
    for(int aux = 0; aux < tamV3; aux++)
    {
        printf("%d ", V3[aux]);
    }
}

