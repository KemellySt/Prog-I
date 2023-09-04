#include <stdio.h>

int main()
{
//Apresentando o programa
printf("---------------------------------- PROGRAMA: CALCULA MEDIA DE TURMA COM 40 ALUNOS ------------------------------\n");

//Declarando as variáveis
int alunosAb = 0;
float nota[40], media = 0;
for(int aux = 0; aux < 40; aux++)
{
    printf("Digite a nota do aluno %d:", (aux+1));
    scanf("%f", &nota[aux]);
}

//Calculando a média
for(int aux2 = 0; aux2 < 40; aux2++)
{
    media = nota[aux2] + media;
}
//Dividindo
media = media / 40;
printf("\nRESULTADOS OBTIDOS:\n");
printf("\nA media da turma: %f\n", media);

//Comparando com a média
for(int aux3 = 0; aux3 < 40; aux3++)
{
    if(nota[aux3] < media)
    alunosAb = alunosAb + 1;
}
//Imprimindo o resultado
printf("O numero de alunos abaixo da media: %d alunos", alunosAb);

    return 0;
}