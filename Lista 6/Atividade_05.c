#include <stdio.h>
typedef struct
{
    char nome[30];
    char tipo[20];
    float nota;
}restaurante;
int main()
{
    int quant;
    printf("Quantos restaurantes serão pesquisados? ");
    scanf("%d", &quant);
    int auxiliar;
    restaurante r[ quant];
    // Pedindo os dados
    printf("-------------------------------------------------------PREENCHA OS DADOS--------------------------------------------------------\n");
    for(int aux = 0; aux < quant; aux = aux + 1)
    {
        printf("NOME DO RESTAURANTE: ");
        scanf(" %[^\n]s", r[aux].nome);
        printf("TIPO [Italiana, brasileira, japonesa, francesa, chinesa ...]: ");
        scanf(" %[^\n]s", r[aux].tipo);
        printf("NOTA: ");
        scanf("%f", &r[aux].nota);
    }
    // Imprimindo ao usuário
    printf("\n---------------------------------------------------RELATÓRIOS------------------------------------------------------------------\n");
    printf("--------------------------------------------LISTA DE TODOS OS RESTAURANTES-------------------------------------------------------\n");
    for(int aux = 0; aux < quant; aux = aux + 1)
    {
        printf("NOME DO RESTAURANTE: %s\n", r[aux].nome);
        printf("TIPO: %s\n", r[aux].tipo);
        printf("NOTA: %f", r[aux].nota);
    }
    printf("---------------------------------------LISTA DE ACORDO COM O TIPO DE RESTAURANTE-------------------------------------------\n");
    
    for(int aux = 0; aux < quant; aux = aux + 1)
    {
        if(r[aux].tipo == "Italiana")
        {
            printf("NOME: %s\n", r[aux].nome);
        }
        if(r[aux].tipo == "Brasileira")
        {
            printf("NOME: %s\n", r[aux].nome);
        }
        if(r[aux].tipo == "Japonesa")
        {
            printf("NOME: %s\n", r[aux].nome);
        }
        if(r[aux].tipo == "Chinesa")
        {
            printf("NOME: %s\n", r[aux].nome);
        }
        if(r[aux].tipo == "Francesa")
        {
            printf("NOME: %s", r[aux].nome);
        }
    }
    printf("-------------------------------------------------LISTA DE ACORDO MAIOR NOTA--------------------------------------------------------\n");
    for(int aux = 0; aux < quant; aux = aux + 1)
    {
        for(int aux1 = 1; aux1 < quant; aux1 = aux1 + 1)
        {
            if(r[aux].nota < r[aux1].nota)
            {
                auxiliar = r[aux].nota;
                r[aux].nota = r[aux1].nota;
                r[aux1].nota = auxiliar;
            }
        }
    }
    printf("NOME: %s\n", r[1].nota);
    printf("-----------------------------------------------------LISTA DE ACORDO MAIRO NOTA EM TIPO--------------------------------------------\n");
    for(int aux = 0; aux < quant; aux = aux + 1)
    {
        if(r[aux].tipo == "Italiana")
        {
            for(int aux1 = 1; aux1 < quant; aux1 = aux1 + 1)
            {
                if(r[aux].nota < r[aux1].nota)
                {
                    auxiliar = r[aux].nota;
                    r[aux].nota = r[aux1].nota;
                    r[aux1].nota = auxiliar;
                }
            }
            printf("NOME: %s\n", r[aux].nome);
        }
        if(r[aux].tipo == "Brasileira")
        {
            
            printf("NOME: %s\n", r[aux].nome);
        }
        if(r[aux].tipo == "Japonesa")
        {
            printf("NOME: %s\n", r[aux].nome);
        }
        if(r[aux].tipo == "Chinesa")
        {
            printf("NOME: %s\n", r[aux].nome);
        }
        if(r[aux].tipo == "Francesa")
        {
            printf("NOME: %s", r[aux].nome);
        }
    }

    return 0;
}