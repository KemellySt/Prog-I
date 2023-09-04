#include <stdio.h>
//void lenum(int num);
int fatorial(int num);

int main()
{
    // Declarando variáveis
    int num;
    // Lendo o numero
    printf("------------------------------------------------------ Preencha as informacoes -------------------------------------------------------\n");
    printf("Digite o numero: ");
    scanf("%d", &num);

    //Imprimindo o resultado
    printf("Fatorial do numero %d: %d", num, fatorial(num));

    return 0;
}
/*void lenum(int num)
{
    printf("Digite o numero: ");
    scanf("%d", &num);
}*/
int fatorial(int num)
{
    int n_fatorial;

    for(n_fatorial = 1; num > 1; num = num - 1)
    {
        n_fatorial = n_fatorial * num;
    }
    return n_fatorial;
}