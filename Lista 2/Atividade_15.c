#include <stdio.h>
#include <math.h>

int main(){
// Declarando variáveis
float x1, x2, y1, y2, distancia;
//Imprimindo a informação
printf("Digite o valor de x1:");
//Lendo o valor de x1
scanf("%f", &x1);
//Imprimindo a informação
printf("Digite o valor para y1:");
//Lendo o valor de y1
scanf("%f", &y1);
//Imprimindo a informação
printf("Digite o valor para x2: ");
//Lendo o valor de x2
scanf("%f", &x2);
//Imprimindo a informação
printf("Digite o valor para y2: ");
//Lendo o valor de y2
scanf("%f", &y2);

//Calculando a distância
distancia = sqrt( pow((x2-x1), 2) + pow ((y2 - y1), 2));
//Imprimindo o resultado
printf("A distancia entre os pontos: %f", distancia);

    return 0;
}