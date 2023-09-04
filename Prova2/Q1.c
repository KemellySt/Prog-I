#include <stdio.h>
typedef struct
{
    char nome[30];
    char turma[4];
    int nota[4];
}alunos;
int main()
{
    alunos a;
    //Pedindo os dados e armazenando
    printf("NOME: ");
    scanf(" %[^\n]s", a.nome);
    printf("TURMA: ");
    scanf(" %[^\n]s", a.turma);
    for(int aux = 0; aux < 4; aux = aux + 1)
    {
        printf("NOTA %: ", (aux+1));
        scanf("%d", a.nota[aux]);
    }

    return 0;
}