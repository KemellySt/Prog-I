#include <stdio.h>
int main()
{
//Declarando as variáveis
int divisao, divisor, dividendo, resto;

//Imprimindo as informações
printf("Digite o dividendo: ");
scanf("%d", &dividendo);
printf("Digite o dividor: ");
scanf("%d", &divisor);

//Calculando
divisao = dividendo / divisor;
resto = dividendo % divisor;

//Mostrando resultados
printf("Este e o resultado: %d\n", divisao);
printf("Este e o resto da divisao: %.3d", resto);

    return 0;
}