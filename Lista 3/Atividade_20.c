#include <stdio.h>
int main()
{
//Declarando as variáveis
int prefixo;
float preco, taxa, duracao;

//Imprimindo as informações
printf("Digite o prefixo: ");
scanf("%d", &prefixo);

printf("Digite a duracao da chamada: ");
scanf("%f", &duracao);

//Condições
if(prefixo == 54 || prefixo == 598 || prefixo == 595 || prefixo == 56)
{
        taxa = 1.90;
        if(duracao <= 5)
            {
            preco = duracao * taxa;
            }
            else
            {
            preco = (taxa - (0.05 *taxa)) * duracao;
            }
}
else
{
    if( prefixo == 49 || prefixo == 33 || prefixo == 44)
    {
        taxa = 2;
        if(duracao <= 5)
        {
            preco = duracao * taxa;
        }
        else
        {
            preco = (taxa - (0.05 *taxa)) * duracao;
        }
    }

    if(prefixo == 1)
    {
        taxa = 2.10;
        if(duracao <= 5)
        {
            preco = duracao * taxa;
        }
        else
        {
            preco = (taxa - (0.05 *taxa)) * duracao;
        }
    }

else
{
    taxa = 2.3;
    if(duracao <= 5)
    {
        preco = duracao * taxa;
    }
    
    else
        preco = (taxa - (0.05 *taxa)) * duracao;
}

}

//Imprimindo o resultado
printf("O valor dessa ligacao foi: R$ %.2f", preco);

    return 0;
}