#include <stdio.h>
int main()
{
//Declarando as variáveis
int numero1, numero2, numero3, numero4, numero5, Maior1, Maior2, Maior3, Maior4, Menor;

//Imprimindo as informações
printf("Digite cincos numeros inteiros: \n");
scanf("%d%d%d%d%d", &numero1, &numero2, &numero3, &numero4, &numero5);

//Comparando com número 01
if(1)
{
if(numero1 > numero2)
    Maior1 = numero1;
        else
        {
            Maior2 = numero1;
            Maior1 = numero2;
        }
            if(numero1 > numero3)
                Maior1 = numero1;
                    else
                    {
                        Maior2 = numero1;
                        Maior2 = numero3;
                    }
                        if(numero1 > numero4)
                            Maior1 = numero1;
                                else
                                {
                                    Maior2 = numero1;
                                    Maior1 = numero4;
                                }
                                    if(numero1 > numero5)
                                        Maior1 = numero1;
                                            else
                                            {
                                                Maior2 = numero1;
                                                Maior1 = numero5;
                                            }
}
//Comparando com número 02:
else
{
if(numero2 > numero3)
        Maior2 = numero2;

        else
            {
                Maior3 = numero2;
                Maior2 = numero3;
            }
                if(numero2 > numero4)
                    Maior2 = numero2;

                        else
                        {
                            Maior3 = numero2;
                            Maior2 = numero4;
                        }
                            if(numero2 > numero5)
                                Maior2 = numero2;

                                    else
                                    {
                                        Maior3 = numero2;
                                        Maior2 = numero5;
                                    }
}
//Comparando com número 03:
else if(numero3 > numero4)
    Maior3 = numero3;

        else
        {
            Maior4 = numero3;
            Maior3 = numero4;
        }
                if(numero3 > numero5)
                    Maior3 = numero3;

                        else
                        {
                            Maior4 = numero3;
                            Maior3 = numero5;
                        }

//Comparando com o número 04:
else if(numero4 > numero5)
    Maior4 = numero4;

        else
        {
            Menor = numero4;
            Maior4 = numero5;
        }

//Imprimindo o resultado
printf("A ordem crescente entre os numeros e: %d, %d, %d, %d, %d", Maior1, Maior2, Maior3, Maior4, Menor);

    return 0;
}