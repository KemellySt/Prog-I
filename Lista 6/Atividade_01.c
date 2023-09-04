#include <stdio.h>
typedef struct
{
    char nome[50];
    float salario;
    char cpf[14];
    int idade;
    char sexo;
}ficha;
int main()
{
    // Declarando as variáveis
    ficha f;
    // Pedindo as informações
    printf("-------------------------------------------PREENCHA COM SEUS DADOS-------------------------------------------\n");
    // Nome
    printf("Digite o seu nome: ");
    scanf(" %[^\n]s", f.nome);
    // Salario
    printf("Digite o salario: ");
    scanf("%f", &f.salario);
    // CPF
    printf("Digite o seu CPF: ");
    scanf(" %[^\n]s", f.cpf);
    // Idade
    printf("Digite a sua idade: ");
    scanf("%d", &f.idade);
    // Imprimindo os resultados
    printf("\n---------------------------------------------------FICHA----------------------------------------------------\n");
    printf("NOME: %s\n", f.nome);
    printf("SALARIO: %.2f\n", f.salario);
    printf("CPF: %s\n", f.cpf);
    printf("IDADE: %d", f.idade);

    return 0;
}