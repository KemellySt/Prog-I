#include <stdio.h>
#include <string.h>
int main()
{
    int DetA, DiagonalPA, DiagonalSA, DiagonalPB, DiagonalSB, matA[4][4], matB[4][4], matR[4][4], matSu[4][4], matM[4][4], matM1[4][4], matM2[4][4], matM3[4][4], matM4[4][4], matD[4][4], i = 0, j = 0;
    char operacao;
    // Introdução
    printf("\n---------------------------Este programa realiza operacoes com matrizes-------------------------------\n");
    // Matriz A
    printf("MATRIZ A\n");
    for(int aux = 0; aux <= 3; aux++)
    {
        for(int aux2 = 0; aux2 <= 3; aux2 = aux2 + 1)
        {
            printf("Digite os valor [%d][%d]: ", aux, aux2);
            scanf("%d", &matA[aux][aux2]);
        }
    }
    // Matriz B
    printf("\nMATRIZ B\n");
    for(int aux3 = 0; aux3 <= 3; aux3 = aux3 + 1)
    {
        for(int aux4 = 0; aux4 <= 3; aux4 = aux4 + 1)
        {
            printf("Digite o valor [%d][%d]: ", aux3, aux4);
            scanf("%d", &matB[aux3][aux4]);
        }
    }
    // Pedindo para o usuário escolher a operação
    printf("Digite qual operacao deve ser feita: 1(soma), 2(subtracao), 3(multiplicacao), 4(diagonal Matriz A), 5(diagonal Matriz B), 7(determinante Matriz A), 8(determinante Matriz B), 9(sair)");
    scanf( "%s", &operacao);
    // Condição
    switch(operacao)
    {
    case 1:
        printf("\nMATRIZ RESULTANTE\n");
        for(int aux5 = 0; aux5 <= 3; aux5 = aux5 + 1)
        {
            for(int aux6 = 0; aux6 <= 3; aux6 = aux6 + 1)
            {
                matR[aux5][aux6] = matA[aux5][aux6] + matB[aux5][aux6];
                printf("a(%d, %d): %d\n", i, j, matR[aux5][aux6]);
                i = i + 1;
                j = j + 1;
            }
        }
        break;
    case 2:
        printf("\nSUBSTRACAO\n");
        for(int aux = 0; aux <= 3; aux = aux + 1)
        {
            for(int aux1 = 0; aux1 <= 3; aux1 = aux1 + 1)
            {
                matSu[aux][aux1] = matA[aux][aux1] - matB[aux][aux1];
                printf("a(%d, %d): %d\n", i, j, matSu[aux][aux1]);
                i = i + 1;
                j = j + 1;
            }
        }
        break;
    case 3:
        printf("\nMULTIPLICACAO\n");
        for(int aux = 0; aux <= 3; aux = aux + 1)
        {
            for(int aux1 = 0; aux1 <= 3; aux1 = aux1 + 1)
            {
                matM1[aux][aux1] = matA[aux][aux1] * matB[aux][aux1];
                matM2[aux][aux1] = matA[aux][aux1] * matB[aux][aux1];
                matM3[aux][aux1] = matA[aux][aux1] * matB[aux][aux1];
                matM4[aux][aux1] = matA[aux][aux1] * matB[aux][aux1]; 
                matM[aux][aux1] = matM1[aux][aux1] + matM2[aux][aux1] + matM3[aux][aux1] + matM4[aux][aux1];         
            }
        }
    break;
    case 4:
        printf("\nDIAGONAL MATRIZ A\n");
        for(int aux = 0. aux <= 3; aux = aux + 1)
        {
            for(int aux1 = 0; aux1 <= 3; aux1 = aux1 + 1)
            {
                if(aux == aux1)
                {
                    printf("%d", matA);
                }
            }
        }
    break;
    case 5:
    printf("\nDIAGONAL MATRIZ B\n");
        for(int aux = 0. aux <= 3; aux = aux + 1)
        {
            for(int aux1 = 0; aux1 <= 3; aux1 = aux1 + 1)
            {
                if(aux == aux1)
                {
                    printf("%d", matB);
                }
            }
        }
    break;
    case 6:
    printf("\nDeterminante MATRIZ A\n");
        for(int aux = 0. aux <= 0; aux = aux + 1)
        {
            for(int aux1 = 0; aux1 <= 0; aux1 = aux1 + 1)
            {
                
            }
        }
    case 9:
    break;
    }
        return 0;
}