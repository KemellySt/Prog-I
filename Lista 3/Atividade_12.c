#include <stdio.h>
int main()
{
//Declarando as variáveis
float Indice_Pol;

//Imprimindo a informação
printf("Digite o valor do Indice de Poluicao: ");
scanf("%f", &Indice_Pol);

//Condições
if(Indice_Pol > 100)
{
    printf("Indice excede o limite.");
}
else
{
    if(Indice_Pol < 35)
    {
        printf("Indice classificado como BOM.");
    }
    if(Indice_Pol >= 35 && Indice_Pol < 50)
    {
        printf("Indice classificado como ATENCAO.");
    }
    if(Indice_Pol >= 50 && Indice_Pol < 70)
    {
        printf("Indice classificado como PERIGOSO.");
    }
    if(Indice_Pol >= 70 && Indice_Pol <= 100)
    {
        printf("Indice classificado como EMERGENCIA.");
    }
}
    return 0;
}