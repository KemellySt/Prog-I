#include <stdio.h>

int main(){
    // Declaranddo variáveis
    float n1, n2, mp, peso1, peso2;

    //Imprimindo o primeiro número
    printf("Digite o primeiro numero: ");
    //Lendo o primeiro
    scanf("%f", &n1);

    //Imprindo o segundo número
    printf("Digite o segundo numero: ");
    //Lendo o segundo número
    scanf("%f", &n2);

    //Imprimindo o peso1
    printf("Digite o peso1: ");
    scanf("%f", &peso1);

    //Imprimindo o peso2
    printf("Digite o peso2: ");
    scanf("%f", &peso2);

    //Calculando a média ponderada
    mp = (n1 * peso1 + n2 * peso2) / (peso1 + peso2);   

    //Imprimindo o resultado
    printf("A media ponderada e: %f\n", mp);

    return 0;
}