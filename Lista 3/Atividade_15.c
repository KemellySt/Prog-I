#include <stdio.h>
int main()
{
//Declarando as variáveis
int num1,num2;

//Imprimindo a informação
printf("Digite os numeros: ");
scanf("%d%d", &num1, &num2);

//Condições
if(num1 % num2 == 0)
{
    printf("O %d e divisivel por %d", num1, num2);
}
else
{
    printf("O %d nao divisivel pelo %d", num1, num2);
}

    return 0;
}