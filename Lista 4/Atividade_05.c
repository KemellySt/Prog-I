#include <stdio.h>

int main ()
{
//Declarando as variáveis
int tamanho;

//Pedindo o tamanho da matriz para o usuário
printf("Digite o valor do tamanho: ");
scanf("%d", &tamanho);

//Gerando a matriz
    for(int linha = 1; linha <= tamanho; linha = linha + 1)
    {
        printf("\n");
            for(int coluna = 1; coluna <= tamanho ; coluna = coluna + 1)
            {
                printf("\t%d,%d", linha, coluna);
            }
    }

    return 0;
}