#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
int num, numAle, tentativas = 0, nume = 0;
srand(time(NULL));

printf("------------------------------------------------------- JOGO: ADIVINHE O NUMERO! ---------------------------------------------------\n");
printf("Adivinha o numero que estou pensando ... [0,100]\n");

//Gerando o numero aleatorio
for(int aux = 1; aux <= 1; aux++)
{
    rand() % 101;
}
numAle = rand() % 101;

//Condições
while(numAle != num)
{
    printf("\n %d - Digite um numero: ",  nume = nume + 1);
    scanf("%d", &num);

        if(num < numAle)
        {
            printf("O numero digitado e menor!\n");
        }
        if(num > numAle)
        {
            printf("O numero digitado e maior!\n");

        }
        if(num == numAle)
        {
            printf("PARABENS, voce acertou.\n"); 
            printf("O numero que estava pensando era o ... %d\n", numAle);
        }
    tentativas = tentativas + 1;
}
//Imrpimindo o numero de tentativas
printf("\nO numero de tentativas foram: %d", tentativas);

return 0;
}