#include <stdio.h>
typedef struct
{
    char matricula[10];
    float nota[4];
    float notaF;  
}alunos;
int main()
{
    // Declarando as variáveis
    alunos a[3];
    int n_aprovados = 0, n_reprovados = 0, i[3];
    printf("-----------------------------------------Preencha os dados--------------------------------------------------\n");
    for(int aux = 0; aux < 3; aux = aux + 1)
    {
        printf("Aluno %d\n", (aux+1));
        printf("Matricula: ");
        scanf(" %[^\n]s", a[aux].matricula);
        for(int aux1 = 0; aux1 < 4; aux1 = aux1 + 1)
        {
            printf("Nota %d: ", (aux1 + 1));
            scanf("%f", &a[aux].nota[aux1]);
        }
        // Nota final
        for(int aux1 = 0; aux1 < 4; aux1 = aux1 + 1)
        {
            a[aux].notaF = a[aux].notaF + a[aux].nota[aux1];
        }
        a[aux].notaF = a[aux].notaF / 4;
        if(a[aux].notaF >= 6)
        {
            i[aux] = 1;
            n_aprovados = n_aprovados + 1;
        }
        else
        {
            i[aux] = 0;
            n_reprovados = n_reprovados + 1;
        }
    }
    // Imprimindo os resultados
    printf("------------------------------------------------------------ALUNOS--------------------------------------------------------------\n");
    for(int aux = 0; aux < 3; aux = aux + 1)
    {
        printf("Aluno %d: \n", (aux+1));
        printf("Matricula: %s\n", a[aux].matricula);
        if(i[aux] == 1)
        {
            printf("Situacao: APROVADO\n");
        }
        else
        {
            printf("Situacao: REPROVADO\n");
        }
    }
    printf("\n");
    printf("Numero de aprovados: %d\n", n_aprovados);
    printf("Numero de reprovados: %d", n_reprovados);
    return 0;
}