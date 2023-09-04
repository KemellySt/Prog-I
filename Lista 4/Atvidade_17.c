#include <stdio.h>

int main()
{
//Declarando as variáveis
float q_ameBH = 0, q_atleBH = 0, q_cruzBH = 0, q_ameI = 0, q_atleI = 0, q_cruzI = 0;
float quant_Int = 0, quant_BH = 0, todos_votos = 0, quant_CruzT, quant_AtleT, quant_AmT;
float perc_C, perc_At, perc_Am, perc_CBH, perc_CI, perc_AtBH, perc_AtI, perc_AmBH, perc_AmI;
char time, regiao;

//Explicando o funcionamento do programa
printf("\nEste programa calcula o percentual e quantidade de torcedores de cada time em relacao a regiao!\n");
printf("Para finalizar o questionario, basta digitar: @\n");

//Condições
do
{
    //Recebendo as informações
    printf("\nQual time voce torce: Cruzeiro [1], Atletico [2], America [3]?\n");
    scanf("%s", &time);

    switch(time)
    {
        case '1':
            printf("Em qual regiao voce mora: Belo Horizonte [B] ou Interior [I]?\n");
            scanf("%s", &regiao);

            if(regiao == 'B')
            {
                q_cruzBH = q_cruzBH + 1;
                todos_votos = todos_votos + 1;
            }
            else
            {
                if(regiao == 'I')
                {
                q_cruzI = q_cruzI + 1;
                todos_votos = todos_votos + 1;
                }
            }
            break;

        case '2':
            printf("Em qual regiao voce mora: Belo Horizonte [B] ou Interior [I]?\n");
            scanf("%s", &regiao);

            if(regiao == 'B')
            {
                q_atleBH = q_atleBH + 1;
                todos_votos = todos_votos + 1;
            }
            else 
            {
                if(regiao == 'I')
                {
                q_atleI = q_atleI + 1;
                todos_votos = todos_votos + 1;
                }
            }
            break;

        case '3':
            printf("Em qual regiao voce mora: Belo Horizonte [B] ou Interior [I]?\n");
            scanf("%s", &regiao);

            if(regiao == 'B')
            {
                q_ameBH = q_ameBH + 1;
                todos_votos = todos_votos + 1;
            }
            else
            {
                if(regiao == 'I')
                {
                q_ameI = q_ameI + 1;
                todos_votos = todos_votos + 1;
                }
            }
            break;

        default:
            printf("=======================================TERMINO DO PROGRAMA==========================================\n");
            break;
    }
    
}while(time != '@');

    printf("\n---------------------------------------------RELATORIO----------------------------------------------\n");
    if(todos_votos > 0)
    {
        //Calculando a quantidade de torcedores
            quant_CruzT = q_cruzBH + q_cruzI;
            quant_AtleT = q_atleBH + q_atleI;
            quant_AmT = q_ameBH + q_ameI;
            quant_BH = q_cruzBH + q_atleBH + q_ameBH;
            quant_Int = q_cruzI + q_atleI + q_ameI;

        //Calculando o percentual de cada clube
            perc_C = quant_CruzT / todos_votos;
            perc_At = quant_AtleT / todos_votos;
            perc_Am = quant_AmT / todos_votos;

        //Calculando o percentual por região
        //Cruzeiro
            perc_CBH = quant_CruzT / quant_BH;
            perc_CI = quant_CruzT / quant_Int;
        //Atlético
            perc_AtBH = quant_AtleT / quant_BH;;
            perc_AtI = quant_AtleT / quant_Int;
        //América
            perc_AmBH = quant_AmT / quant_BH;
            perc_AmI = quant_AmT / quant_Int;

//Mostrando resultados
    //Cruzeiro
    printf("\nA quantidade total de torcedores do Cruzeiro: %.2f\n", quant_CruzT);
    printf("O percentual de torcedores do Cruzeiro: %.0f\n", perc_C * 100);
    //Atlético
    printf("A quantidade total de torcedores do Atletico: %.2f\n", quant_AtleT);
    printf("O percentual de torcedores do Atletico: %.0f\n", perc_At * 100);
    //América
    printf("A quantidade total de torcedores do America: %.2f\n", quant_AmT);
    printf("O percentual de torcedores do America: %.0f\n", perc_Am * 100);
    //Torcedores em BH
    printf("O percentual de torcedores cruzeirenses em Belo Horizonte: %.0f\n", perc_CBH * 100);
    printf("O percentual de torcedores atleticanos em Belo Horizonte: %.0f\n", perc_AtBH * 100);
    printf("O percentual de torcedores americanos em Belo Horizonte: %.0f\n", perc_AmBH * 100);

    //Torcedores no Interior
    printf("O percentual de torcedores cruzeirenses no Interior: %.2f\n", perc_CI * 100);
    printf("O percentual de torcedores atleticanos no Interior: %.2f\n", perc_AtI * 100);
    printf("O percentual de torcedores americanos no Interior: %.2f", perc_AmI * 100);
}
else
    printf("Desculpe, mas nao foi contabilizado nenhum voto!");

    return 0;
}