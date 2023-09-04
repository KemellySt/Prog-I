#include <stdio.h>
#include <string.h>
typedef struct
{
    char matricula[35];
    char medico[40];  
    char horario_I[6];
    char horario_F[6];
    char especialidade[20];
}plantao;
int main ()
{
    // Atribuindo
    int n_medicos;
    printf("------------------------------------------PREENCHA OS DADOS--------------------------------------------------\n");
    printf("Digite o numero de medicos de plantao: ");
    scanf("%d", &n_medicos);
    plantao p[n_medicos];
    // Recebendo as informações
    for(int aux = 0; aux < n_medicos; aux = aux + 1)
    {
        printf("MEDICO %d\n", (aux+1));
        printf("Matricula: ");
        scanf(" %[^\n]s", p[aux].matricula);
        printf("Medico: ");
        scanf(" %[^\n]s", p[aux].medico);
        printf("Horario Inicial: ");
        scanf(" %[^\n]s", p[aux].horario_I);
        printf("Horario Final: ");
        scanf(" %[^\n]s", p[aux].horario_F);
        printf("Especialidade: ");
        scanf(" %[^\n]s", p[aux].especialidade);
    }
    // Imprimindo
    printf("------------------------------------------MEDICOS DE PLANTAO--------------------------------------------------\n");
    for(int aux = 0; aux < n_medicos; aux = aux + 1)
    {
        printf("Matricula: %s\n", p[aux].matricula);
        printf("Medico: %s\n", p[aux].medico);
        printf("Horario Inicial: %s\n", p[aux].horario_I);
        printf("Horario Final: %s\n", p[aux].horario_F);
        printf("Especialidade: %s\n", p[aux].especialidade);
        printf("\n");
    }
    
    return 0;
}
