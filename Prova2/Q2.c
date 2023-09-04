#include <stdio.h>
//Imovel Geral
typedef struct
{
    char tipo[30];
    float valor;
    char situacao[10];
    DadosP proprietário;
    DadosE Endereço;
}Imovel;
//Dados Endereço
typedef struct
{
    char rua[30];
    char bairro[20];
    int numero;
}DadosE;
//Dados do proprietário
typedef struct
{
    char nome[30];
    char telefone[14];
    char cpf[10];
}DadosP;