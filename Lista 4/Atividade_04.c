#include <stdio.h>

int main ()
{
    
    for(int linha = 1 ; linha <= 4 ; linha = linha + 1)
    {
            for(int coluna = 1 ; coluna <= 4 ; coluna = coluna + 1)
                printf("\t%d,%d", linha, coluna);
                printf("\n");
    }
 
    return 0;
}