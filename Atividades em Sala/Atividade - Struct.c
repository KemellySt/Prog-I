#include <stdio.h>
// Estrutura Struct vem antes do int main
typedef struct
{
    char nomes[10];
    char matricula[10];
    float nota[10];
}alunos;
int main()
{ 
    // Declarando as variáveis
    alunos a[10];
    // Pedindo os valores
    for(int aux = 0; aux <= 9;aux = aux + 1)
    {
        // Nome do aluno
        printf("Digite o nome do aluno %d: ", (aux + 1));
        scanf(" %[^\n]s", a[aux].nomes);
        // Matrícula
        printf("Digite a matricula %d: ", (aux + 1));
        scanf(" %[^\n]s", a[aux].matricula);
        // Nota
        printf("Digite a nota %d: ", (aux + 1));
        scanf("%f", &a[aux].nota);
    }
    // Imprimindo resultados do formulário
    printf("-----------------------------------------FORMULARIO-------------------------------------------------------");
    for(int aux = 0; aux <= 9; aux = aux + 1)
    {   printf("ALUNO %d\n", (aux+1));
        printf(" %s\n", a[aux].nomes);
        printf(" %s\n", a[aux].matricula);
        printf("%.2f", a[aux].nota);
    }

    return 0;
}