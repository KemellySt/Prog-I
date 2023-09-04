#include <stdio.h>
int main()
{
    //Declarando as variáveis
    float numero1, numero2, soma, subtracao, multiplicacao, divisao;
    char escolha;

    //Imprimindo a escolha
    printf("Qual operacao deve ser efetuada? ");
    scanf("%c", &escolha);

    //Imprimindo o primeiro número
    printf("Digite o primeiro numero: ");
    scanf("%f", &numero1);
    //Imprimindo o segundo número
    printf("Digite o segundo numero: ");
    scanf("%f", &numero2);

    //Condições
    switch(escolha)
    {
        case '+':
            soma = numero1 + numero2;
            printf("A soma entre %.2f e %.2f = %.2f", numero1, numero2, soma);
            break;

        case '-':
            subtracao = numero1 - numero2;
            printf("A subtracao entre %.2f e %.2f = %.2f", numero1, numero2, subtracao);
            break;

        case '/':
        if(numero2 != 0)
        {
            divisao = numero1 / numero2;
            printf("A divisao entre %.2f e %.2f = %.2f", numero1, numero2, divisao);
        }
        else
        {
            printf("A divisao nao pode ser efetuada.");
        }
            break;

        case '*':
            multiplicacao = numero1 * numero2;
            printf("A multiplicacao entre %.2f e %.2f = %.2f", numero1, numero2, multiplicacao);
            break;

    default:
        printf("Operacao invalida!");
            break;
    }
        return 0;

}