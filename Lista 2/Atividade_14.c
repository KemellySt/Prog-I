#include <stdio.h>
#include <math.h>

int main (){

    //Declaração de variáveis
    float Nota_al1, Nota_al2, Nota_al3, Nota_al4, Nota_al5, Nota_al6, Nota_al7, Nota_al8, Nota_al9, Nota_al10, soma, media, desvio_RM1;
    float desvio_RM2, desvio_RM3, desvio_RM4, desvio_RM5, desvio_RM6, desvio_RM7, desvio_RM8, desvio_RM9, desvio_RM10, desvioP;
    float SomaQuadrado_DesRM, Quadrado_DesRM1, Quadrado_DesRM2,Quadrado_DesRM3, Quadrado_DesRM4, Quadrado_DesRM5, Quadrado_DesRM6;
    float Quadrado_DesRM7, Quadrado_DesRM8, Quadrado_DesRM9, Quadrado_DesRM10, variancia;
    //Imprimindo as informações 

    //Aluno 1
    printf("Nota do aluno 1: ");
    //Lendo a informação
    scanf("%f", &Nota_al1);
    //Aluno 2
    printf("Nota do aluno 2: ");
    //Lendo a informação
    scanf("%f", &Nota_al2);
    //Aluno 3
    printf("Nota do aluno 3: ");
    //Lendo a informação
    scanf("%f", &Nota_al3);
    //Aluno 4
    printf("Nota do aluno 4: ");
    //Lendo a informação
    scanf("%f", &Nota_al4);
    //Aluno 5
    printf("Nota do aluno 5: ");
    //Lendo a informação
    scanf("%f", &Nota_al5);
    //Aluno 6
    printf("Nota do aluno 6: ");
    //Lendo a informação
    scanf("%f", &Nota_al6);
    //Aluno 7
    printf("Nota do aluno 7: ");
    //Lendo a informação
    scanf("%f", &Nota_al7);
    //Aluno 8
    printf("Nota do aluno 8: ");
    //Lendo a informação
    scanf("%f", &Nota_al8);
    //Aluno 9
    printf("Nota do aluno 9: ");
    //Lendo a informação
    scanf("%f", &Nota_al9);
    //Aluno 10
    printf("Nota do aluno 10: ");
    //Lendo a informação
    scanf("%f", &Nota_al10);
    //Calculando a soma das notas
    soma = Nota_al1 + Nota_al2 + Nota_al3 + Nota_al4 + Nota_al5 + Nota_al6 + Nota_al7 + Nota_al8 + Nota_al9 + Nota_al10;
    //Caculando a média
    media = soma / 10;
    //Calculando o desvio da nota do aluno 1 em relação a media
    desvio_RM1 = media - Nota_al1;
    //Calculando o desvio da nota do aluno 2 em relação a media
    desvio_RM2 = media - Nota_al2;
    //Calculando o desvio da nota do aluno 3 em relação a media
    desvio_RM3 = media - Nota_al3;
    //Calculando o desvio da nota do aluno 4 em relação a media
    desvio_RM4 = media - Nota_al4;
    //Calculando o desvio da nota do aluno 5 em relação a media
    desvio_RM5 = media - Nota_al5;
    //Calculando o desvio da nota do aluno 6 em relação a media
    desvio_RM6 = media - Nota_al6;
    //Calculando o desvio da nota do aluno 7 em relação a media
    desvio_RM7 = media - Nota_al7;
    //Calculando o desvio da nota do aluno 8 em relação a media
    desvio_RM8 = media - Nota_al8;
    //Calculando o desvio da nota do aluno 9 em relação a media
    desvio_RM9 = media - Nota_al9;
    //Calculando o desvio da nota do aluno 10 em relação a media
    desvio_RM10 = media - Nota_al10;

    //Calculando a quadrado do desvio de cada nota
    Quadrado_DesRM1 = pow(desvio_RM1, 2);
    Quadrado_DesRM2 = pow(desvio_RM2, 2);
    Quadrado_DesRM3 = pow(desvio_RM3, 2);
    Quadrado_DesRM4 = pow(desvio_RM4, 2);
    Quadrado_DesRM5 = pow(desvio_RM5, 2);
    Quadrado_DesRM6 = pow(desvio_RM6, 2);
    Quadrado_DesRM7 = pow(desvio_RM7, 2);
    Quadrado_DesRM8 = pow(desvio_RM8, 2);
    Quadrado_DesRM9 = pow(desvio_RM9, 2);
    Quadrado_DesRM10 = pow(desvio_RM10, 2);

    //Calculando a variância
    SomaQuadrado_DesRM = Quadrado_DesRM1 + Quadrado_DesRM2 + Quadrado_DesRM3 + Quadrado_DesRM4 + Quadrado_DesRM5 + Quadrado_DesRM6 + Quadrado_DesRM7 + Quadrado_DesRM8 + Quadrado_DesRM9 + Quadrado_DesRM10;
    variancia = SomaQuadrado_DesRM / 10;

    //Calculando Desvio Padrão
    desvioP = sqrt(variancia);

    //Imprimindo os resultados
    printf("A nota media final da turma: %.2f\n", media);
    //Imprimindo o desvio
    printf("Desvio da nota do aluno 1: %.2f\n", desvio_RM1);
    printf("Desvio da nota do aluno 2: %.2f\n", desvio_RM2);
    printf("Desvio da nota do aluno 3: %.2f\n", desvio_RM3);
    printf("Desvio da nota do aluno 4: %.2f\n", desvio_RM4);
    printf("Desvio da nota do aluno 5: %.2f\n", desvio_RM5);
    printf("Desvio da nota do aluno 6: %.2f\n", desvio_RM6);
    printf("Desvio da nota do aluno 7: %.2f\n", desvio_RM7);
    printf("Desvio da nota do aluno 8: %.2f\n", desvio_RM8);
    printf("Desvio da nota do aluno 9: %.2f\n", desvio_RM9);
    printf("Desvio da nota do aluno 10: %.2f\n", desvio_RM10);
    //Imprimindo o quadrado do desvio
    printf("Quadrado do desvio da nota do aluno 1: %.2f\n", Quadrado_DesRM1);
    printf("Quadrado do desvio da nota do aluno 2: %.2f\n", Quadrado_DesRM2);
    printf("Quadrado do desvio da nota do aluno 3: %.2f\n", Quadrado_DesRM3);
    printf("Quadrado do desvio da nota do aluno 4: %.2f\n", Quadrado_DesRM4);
    printf("Quadrado do desvio da nota do aluno 5: %.2f\n", Quadrado_DesRM5);
    printf("Quadrado do desvio da nota do aluno 6: %.2f\n", Quadrado_DesRM6);
    printf("Quadrado do desvio da nota do aluno 7: %.2f\n", Quadrado_DesRM7);
    printf("Quadrado do desvio da nota do aluno 8: %.2f\n", Quadrado_DesRM8);
    printf("Quadrado do desvio da nota do aluno 9: %.2f\n", Quadrado_DesRM9);
    printf("Quadrado do desvio da nota do aluno 10: %.2f\n", Quadrado_DesRM10);
    //Imprimindo variancia
    printf("A variancia entre as notas e: %.2f\n", variancia);
    //Imprimindo o desvio padrão
    printf("O desvio padrao entre as notas e: %.2f", desvioP);

    return 0;
}