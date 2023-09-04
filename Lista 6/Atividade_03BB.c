#include <stdio.h>
#include <string.h>
typedef struct
{
    char titulo[35];
    char duracao[5];  
    char secoes[40];
}filme;
int main ()
{
    // Atribuindo
    filme f;
    printf("TITULO: \n");
    scanf(" %[^\n]s", f.titulo);
    printf("DURACAO: \n");
    scanf(" %[^\n]s", f.duracao);
    printf("SECOES: ");
    scanf(" %[^\n]s", f.secoes);

    // Imprimindo as informações
    printf("-----------------------------------------------FILME EM CARTAZ------------------------------------------------\n");
    printf(" %s\n", f.titulo);
    printf(" %s\n", f.duracao);
    printf(" %s", f.secoes);

    return 0;
}