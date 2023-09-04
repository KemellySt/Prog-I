#include <stdio.h>
// Estrutura Struct vem antes do int main
typedef struct
{
    char nomes[10];
    char matricula[10];
    float nota;
}alunos;
int main()
{ 
    // Declarando as variáveis
    alunos a[3];
    // Pedindo os valores
    for(int aux = 0; aux <= 2;aux = aux + 1)
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
    printf("-----------------------------------------FORMULARIO-------------------------------------------------------\n");
    for(int aux = 0; aux <= 2; aux = aux + 1)
    {   printf("ALUNO %d\n", (aux+1));
        printf("Nome Completo: %s\n", a[aux].nomes);
        printf("Matricula: %s\n", a[aux].matricula);
        printf("Nota P1: %.2f\n", a[aux].nota);
    }

    return 0;
}