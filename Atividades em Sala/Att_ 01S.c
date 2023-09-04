#include <stdio.h>

int main()
{
    const int tamanho = 10;

//Declarando as variáveis
float notas[tamanho]; float media = 0;
for(int aux = 0; aux < tamanho; aux++)
    {
    printf("Digite a nota do aluno %i: ", (aux+1));
    scanf("%f", &notas[aux]);
    }

for(int aux2 = 0;  aux2 < tamanho; aux2++)
    {
    media = notas[aux2] + media;
    }

//Calculando a média
media = media / tamanho;
//Imprimindo o resultado
printf("A media e: %.2f", media);

    return 0;
}