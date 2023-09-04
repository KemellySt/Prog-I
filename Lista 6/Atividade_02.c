#include <stdio.h>
typedef struct
{
    char nome[40];
    char turma[4];
    float notas[4];
}cadastro;

int main()
{
    // Declarando as variáveis
    cadastro c;
    // Pedindo as informações
    printf("--------------------------------------CADASTRO DE NOTAS DE ALUNOS--------------------------------------------\n");
    // NOME
    printf("NOME: ");
    scanf(" %[^\n]s", c.nome);
    // TURMA
    printf("TURMA: ");
    scanf(" %[^\n]s", c.turma);
    // NOTA
    for(int aux = 0; aux < 4; aux = aux + 1)
    {
        printf("NOTA %d: ", (aux+1));
        scanf("%f", &c.notas[aux]);
    }
    // Imprimindo os resultados
    printf("------------------------------------------------FICHA ESCOLAR--------------------------------------------------------\n");
    printf("NOME: %s\n", c.nome);
    printf("TURMA: %s\n", c.turma);
    for(int aux = 0; aux < 4; aux = aux + 1)
    {
        printf("NOTA %d: %.2f\n",(aux+1) ,c.notas[aux]);
    }

return 0;
}
