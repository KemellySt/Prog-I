#include <stdio.h>

int main()
{

int quant_notas;

//Pedindo a quantidade de notas
printf("Digite o numero de notas: ");
scanf("%i", &quant_notas);

float notas[quant_notas]; float media = 0;
for(int aux = 0; aux < quant_notas; aux++)
    {
    printf("Digite a nota do aluno %i: ", (aux+1));
    scanf("%f", &notas[aux]);
    }

for(int aux2 = 0;  aux2 < quant_notas; aux2++)
    {
    media = notas[aux2] + media;
    }

//Calculando a média
media = media / quant_notas;
//Imprimindo o resultado
printf("A media e: %.2f", media);

    return 0;
}