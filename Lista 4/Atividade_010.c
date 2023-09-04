#include <stdio.h>

int main()
{
//Declarando as variáveis
int numero, positivos = 0, negativos = 0, nulos = 0;

//Recebendo a sequencia
printf("Este programa classifica os numeros como: Nulo, Positivos e Negativos.\n");
printf("ATENCAO: Para terminar a sequencia, digite qualquer caractere!\n");
printf("Digite uma sequencia de numeros:\n");

//Condição
while(scanf("%d", &numero) == 1)
{
    if(numero > 0)
    {
        positivos = positivos + 1;
    }
    else if(numero == 0)
    {
        nulos = nulos + 1;
    }
    else
    {
        negativos = negativos + 1;
    }
}

//Imprimindo o resultado
printf("A quantidade de numeros: \n");
printf("Positivos: %d\n", positivos);
printf("Negativos: %d\n", negativos);
printf("Nulos: %d", nulos);

    return 0;
}