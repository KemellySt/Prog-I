#include <stdio.h>

int Divisivel(int N, int D)
{
    if(N % D == 0)
    {
        return 1;
    }
    else
        return 0;
}
int Quantidade_P(int D, int vetor[], int tam)
{
    int x, quantidade_P = 0;
    x = Divisivel(N, D);
    for(int aux = 0; aux < tam; aux++)
    {
        N = vetor[aux]
        if(Divisivel(N, D) == 1)
        {
            quantidade_P = quantidade_P + 1;
        }
    }
    return quantidade_P;
}
int main()
{
    int tam = 4
    int vetor[1, 4, 5, 2];
    int D = 2;
    printf("%d", Quantidade_P(N, D, vetor, tam));

}