#include <stdio.h>
void lenum(float num1, float num2);
void leoperacao(int escolha);
void operacao(float num1, float num2, int escolha);
float soma(float num1, float num2);
float subtracao(float num1, float num2);
float multiplicacao(float num1, float num2);
float divisao(float num1, float num2);

int main()
{
    // Declarando as variáveis
    float num1, num2;
    int escolha;
    // Pedindo as informações os resultados
    printf("============================================================== CALCULADORA =================================================================\n");
    lenum(num1, num2);
    leoperacao(escolha);
    //  Imprimindo
    operacao(num1, num2, escolha);

    return 0;
}
void lenum(float num1, float num2)
{
    // Pedindo o primeiro número
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    // Pedindo o segundo número
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);
}
void leoperacao(int escolha)
{
    // Imprimindo a escolha
    printf("Qual operacao deve ser efetuada: SOMA(1), SUBTRACAO(2), MULTIPLICACAO(3), DIVISAO(4)? ");
    scanf("%d", &escolha);
}
float soma(float num1, float num2)
{
    float soma;
    soma = num1 + num2;
    return soma;
}
float subtracao(float num1, float num2)
{
    float subtracao;
    subtracao = num1 - num2;
    return subtracao;
}
float multiplicacao(float num1, float num2)
{
    float multiplicacao;
    multiplicacao = num1 * num2;
    return multiplicacao;
}
float divisao(float num1, float num2)
{
    float divisao;
    divisao = num1 * num2;
    return divisao;
}
void operacao(float num1, float num2, int escolha)
{
    if(escolha == 1)
    {
        printf("A soma entre %.2f e %.2f = %.2f", num1, num2, soma(num1, num2));
    }
    if(escolha == 2)
    {
        printf("A subtracao entre %.2f e %.2f = %.2f", num1, num2, subtracao(num1, num2));
    }
    if(escolha == 4)
    {
            if(num2 != 0)
            {
                printf("A divisao entre %.2f e %.2f = %.2f", num1, num2, divisao(num1, num2));
            }
            else
            {
                printf("A divisao nao pode ser efetuada.");
            }
    }
    if(escolha == 3)
    {
        printf("A multiplicacao entre %.2f e %.2f = %.2f", num1, num2, multiplicacao(num1, num2));
    }

    if(escolha != 1 && escolha != 2 && escolha != 3 && escolha != 4)
    {
        printf("Operacao invalida!");
    }
}

