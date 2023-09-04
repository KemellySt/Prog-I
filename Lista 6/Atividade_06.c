#include <stdio.h>
typedef struct
{
    char matricula[20];
    char nome[20];
    float nota;
    float frequencia;
}alunos;
int main()
{
    int escolha, escolha1;
    alunos a[2];
    char pesquisa[20];

    while(escolha1 != 6)
    {
        printf("-------------------------------------------------MENU---------------------------------------------------------\n");
        printf("[1] cadastrar aluno\n");
        printf("[2] pesquisar aluno por matricula (exibir nome, nota e frequencia)\n");
        printf("[3] pesquisar aluno por nome (exibir nome, nota e frequencia)\n");
        printf("[4] exibir lista de alunos aprovados\n");
        printf("[5] exibir lista de alunos reprovados\n");
        printf("[6] sair\n");
        printf("Escolha uma das opcoes: ");
        scanf("%d", &escolha1);
        // Escolhas
        switch(escolha1)
        {
            case 1:
            {
                // Cadastro
                printf("------------------------------------------Digite os dados abaixo------------------------------------------\n");
                for(int aux = 0; aux < 2; aux = aux + 1)
                {
                    printf("Matricula: ");
                    scanf(" %[^\n]s", a[aux].matricula);
                    printf("Nome: ");
                    scanf(" %[^\n]s", a[aux].nome);
                    printf("Nota: ");
                    scanf("%f",&a[aux].nota);
                    printf("Frequencia: ");
                    scanf("%f", &a[aux].frequencia);
                }
                break;
            }
            case 2:
            {
                // Pesquisa por matricula
                printf("---------------------------------------------PESQUISA - MATRICULA------------------------------------------------------\n");
                for(int aux = 0; aux < 2; aux = aux + 1)
                {
                
                    if()
                    printf("Digite a matricula: ");
                    scanf(" %[^\n]s", pesquisa);
                    for(int aux1 = 0; aux1 < 20; aux1 = aux1 + 1)
                    {
                        if(pesquisa[aux1] == a[aux].matricula[aux1])
                        {
                            printf("Nome: %s\n", a[aux].nome);
                            printf("Matricula: %s\n", a[aux].matricula);
                            printf("Nota: %f\n", a[aux].nota);
                            printf("Frequencia: %f\n", a[aux].frequencia);
                            break;
                        }
                        else
                        {
                        printf("Matricula nao encontrada.");
                        }
                    }
                    printf("Voce deseja continuar o cadastramento? ");
                break;
                }
            break;
            }
            case 3:
            {
                // Pesquisa por nome
                printf("---------------------------------------------PESQUISA - NOME------------------------------------------------------\n");
                for(int aux = 0; aux < 2; aux = aux + 1)
                {
                    printf("Digite o nome: ");
                    scanf(" %[^\n]s", pesquisa);
                    for(int aux1 = 0; aux1 < 20; aux1 = aux1 + 1)
                    {
                        if(pesquisa[aux1] == a[aux].nome[aux1])
                        {
                            printf("Nome: %s\n", a[aux].nome);
                            printf("Matricula: %s\n", a[aux].matricula);
                            printf("Nota: %f\n", a[aux].nota);
                            printf("Frequencia: %f\n", a[aux].frequencia);
                            break;
                        }
                        else
                        printf("Nome nao encontrada.");
                        break;
                    }
                }
            break;
            }
            case 4:
            {
                // Lista de aprovados
                printf("----------------------------------APROVADOS-----------------------------------------------\n");
                for(int aux = 0; aux < 2; aux = aux + 1)
                {
                    if(a[aux].nota > 6)
                    printf("%s\n", a[aux].nome);
                    printf("%s\n", a[aux].matricula);
                    
                }
            }
            case 5:
            {
                // Lista de reprovados
                printf("----------------------------------APROVADOS-----------------------------------------------\n");
                for(int aux = 0; aux < 2; aux = aux + 1)
                {
                    if(a[aux].nota < 6)
                    printf("%s\n", a[aux].nome);
                    printf("%s\n", a[aux].matricula);
                }
            }
            case 6:
            break;
        }
    }
    printf("Programa Finalizado.");
return 0;
}