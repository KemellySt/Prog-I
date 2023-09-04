#include <stdio.h>
int soma(int n1, int n2);
int subtracao(int n1, int n2);
int produto(int n1, int n2);
int quociente(int n1, int n2);
int resto(int n1, int n2);

int main()
{
    //Declarando variáveis
    int n1, n2;
    //Peidndo os valores
    printf("------------------------------------------------------- DIGITE OS VALORES ------------------------------------------------------------\n");
    printf("Digite o valor do primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o valor do segundo numero: ");
    scanf("%d",&n2);
    //Imprimindo os resultados
    printf("----------------------------------------------------------- RESULTADOS ------------------------------------------------------------------\n");
    printf("Soma: %d\n", soma(n1, n2));
    printf("Subtracao: %d\n", subtracao(n1, n2));
    printf("Produto: %d\n", produto(n1,n2));
    printf("Quociente: %d\n", quociente(n1,n2));
    printf("Resto: %d", resto(n1,n2));

    return 0;
}
int soma(int n1, int n2)
{
    return n1 + n2;
}
int subtracao(int n1, int n2)
{
    return n1 - n2;
}
int produto(int n1, int n2)
{
    return n1 * n2;
}
int quociente(int n1, int n2)
{
    return n1 / n2;
}
int resto(int n1, int n2)
{
    return n1 % n2;
}