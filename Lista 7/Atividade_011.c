#include <stdio.h>
#include <math.h>
float media(float nota[], int tam);
float desvio(float nota[], int tam);
void desvioM(float nota[], int tam);
float SomaQuadradoD(float nota[], int tam);
float variancia(float nota[], int tam);
void lenotas(float notas[], int tam);

int main()
{
    // Declarando as variáveis
    int tam;

    printf("====================================================== Informe a quantidade de alunos ==============================================\n");
    
    printf("Digite o numero de alunos: ");
    scanf("%d", &tam);

    // Recebendo as notas
    float nota[tam];

    printf("======================================================= Informe a nota de cada aluno ===============================================\n");
    
    printf("Digite a nota do alunos: \n");
    lenotas(nota, tam);

    // Imprimindo os resultados
    printf("================================================================ RESULTADOS =======================================================\n");
    // Media final
    printf("\nMedia final das notas da turma: %.2f\n", media(nota, tam));
    // Desvio Padrao de cada aluno em relação a media
    desvioM(nota, tam);
    // Desvio Padrão
    printf("Desvio Padrao: %.2f\n", desvio(nota, tam));
    // Variância
    printf("Variancia: %.2f", variancia(nota, tam));

    return 0;
}

void lenotas(float nota[], int tam)
{
    for(int aux = 0; aux < tam; aux = aux + 1)
    {
        printf("[ Aluno %d]: ", (aux+1));
        scanf("%f", &nota[aux]);
    }
}

float media(float nota[], int tam)
{
    float media, soma = 0;
    // Soma das notas
    for(int aux = 0; aux < tam; aux = aux + 1)
    {
        soma = soma + nota[aux];
    }

    // Media das notas
    media = soma / tam;
    return media;
}

void desvioM(float nota[], int tam )
{
    float desvioM;
    // Cálculo Desvio em relação a nota do aluno
    for(int aux = 0; aux < tam; aux++)
    {
        desvioM = media(nota, tam) - nota[aux];
        printf("Aluno %d: %.2f\n", (aux+1),desvioM);
    }
}

float desvio(float nota[], int tam)
{
    float desvio = 0;
    //Cálculo Desvio Padrão
    for(int aux = 0; aux < tam; aux++)
    {
    desvio = (nota[aux] - media(nota, tam)) * (nota[aux] - media(nota, tam)) + desvio;
    }
    desvio = sqrt(desvio / tam);

    return desvio;
}

float SomaQuadradoD(float nota[], int tam)
{
    float quadradoD, desvioMe[tam];
    // Calculando desvio em relação as notas
    for(int aux = 0; aux < tam; aux++)
    {
        desvioMe[aux] = media(nota, tam) - nota[aux];
    }

    for(int aux = 0; aux < tam; aux++)
    {
        quadradoD = pow(desvioMe[aux], 2) + quadradoD;
    }
    return quadradoD;
}

float variancia(float nota[], int tam)
{
    float variancia;
    variancia = SomaQuadradoD(nota, tam) / tam;

    return variancia;
}