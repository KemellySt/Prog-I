#include <stdio.h>

int main()
{
//Declarando as variáveis
int numero, limite;

//Recebendo o número
printf("Digite o numero:");
scanf("%d", &numero);

while(numero > 0)
{
    printf("Digite ate quando a taduada ira: \n");
    scanf("%d", &limite);
    if(numero > 0)
    {
        for(int aux = 0; aux >= 0 && aux <= limite; aux = aux + 1)
        {
            printf("%d x %d = %d\n", numero, aux, numero * aux);
        }
    }
    else
    {
    printf("Tabuada nao encontrada!\n");
    }
    printf("Digite o numero: \n");
    scanf("%d", &numero);

}
    return 0;
}