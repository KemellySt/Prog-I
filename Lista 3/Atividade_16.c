#include <stdio.h>
int main()
{
//Declarando as variáveis
int codigo;
float Salario_Atual, SalarioN;

//Imprimindo
printf("Digite o salario atual: ");
scanf("%f", &Salario_Atual);

printf("Escolha o seu codigo (1, 2 ou 3): ");
scanf("%d", &codigo);

//Condições
switch(codigo)
{
    case 1: 
        SalarioN = (0.5 * Salario_Atual) + Salario_Atual;
        printf("O salario novo: %.2f", SalarioN);
        break;

    case 2:
        SalarioN = (0.3 * Salario_Atual) + Salario_Atual;
        printf("O salario novo: %.2f", SalarioN);
        break;

    case 3:
        SalarioN = (0.2 * Salario_Atual) + Salario_Atual;
        printf("O salario novo: %.2f", SalarioN);
        break;
}
    return 0;
}