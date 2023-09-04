#include <stdio.h>

int main()
{
    int sequencia, cifra;
    printf("Digite a sequencia a ser invertida: ");
    scanf("%d", &sequencia);

    // Invertendo
    if(sequencia >= 0)
    {
        do
        {
            cifra = sequencia % 10;
            printf("%d", cifra);
            sequencia = sequencia / 10;
        }while(sequencia != 0);
    }


    return 0;
}