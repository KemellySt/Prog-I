#include <stdio.h>
int main()
{
//Declarando variáveis
float nota, frequencia, aprovado, reprovado, exame_especial;

//Imprimindo as informações
printf("Qual e a nota? ");
scanf("%f", &nota);
printf("Qual e a frequencia do aluno? ");
scanf("%f", &frequencia);

//Comparando as condições
if(nota >= 6 && frequencia >= 0.75)
{
    printf("Este aluno esta APROVADO");
}
else
{
    if(nota >= 4 && nota < 6 && frequencia >= 0.75)
    {
        printf("Este aluno pode fazer o EXAME ESPECIAL");
    }
    else
    {
        printf("Este aluno esta REPROVADO");
    }

}

    return 0;
}
