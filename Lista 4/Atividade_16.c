#include <stdio.h>
int main()
{
//Declarando variáveis
int numero, N_PrimosMenores, Divisores = 0;

//Recebendo o numero e informando o usuário
printf("Este programa te mostra quais numeros primos estao a baixo do numero digitado!\n");
printf("Digite um numero: ");
scanf("%d", &numero);

for(int auxiliar = 2; auxiliar <= numero; auxiliar++) 
{
    // verificar se o i é primo, se for primo imprime o imprime i
    printf("Verficando se o %d e primo: ", auxiliar);
    
    for(auxiliar = 2; auxiliar < numero / 2; auxiliar = auxiliar + 1)
    {
        if(numero % auxiliar == 0)
        {
            Divisores = Divisores + 1;
        }
    }
    if(Divisores == 0)
        {
        printf("%d\n", N_PrimosMenores);
        N_PrimosMenores = N_PrimosMenores - 1;
        }
}
    return 0;
}
