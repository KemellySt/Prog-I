#include <stdio.h>
typedef struct
{
    char nome[30];
    char telefone[20];
    char aniversario[14];
    char cidade[10];
    char estado[3];
}ficha;
int main()
{
    // Declarando variáveis
    ficha f;
    printf("-----------------------------------------------PREENCHA OS DADOS-------------------------------------------------\n");
    // Pedindo as informações
    printf("Nome: ");
    scanf(" %[^\n]s", f.nome);
    printf("Telefone: ");
    scanf(" %[^\n]s", f.telefone);
    printf("Aniversario: ");
    scanf(" %[^\n]s", f.aniversario);
    printf("Cidade: ");
    scanf(" %[^\n]s", f.cidade);
    printf("Estado: ");
    scanf(" %[^\n]s", f.estado);
    printf("----------------------------------------------DADOS PESSOAIS----------------------------------------------------\n");
    // Impimindo
    printf("Nome: %s\n", f.nome);
    printf("Telefone: %s\n", f.telefone);
    printf("Aniversario: %s\n", f.aniversario);
    printf("Cidade: %s\n", f.cidade);
    printf("Estado: %s", f.estado);

    return 0;
}