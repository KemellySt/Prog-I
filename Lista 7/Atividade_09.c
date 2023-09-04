#include <stdio.h>
#include <math.h>
float distancia(float x1,float x2, float y1, float y2); 

int main()
{
    // Declarando as variáveis
    float x1, x2, y1, y2;
    printf("Digite o x1: ");
    scanf(" %f", &x1);
    printf("Digite o y1: ");
    scanf(" %f", &y1);
    printf("Digite o x2: ");
    scanf(" %f", &x2);
    printf("Digite o y2: ");
    scanf(" %f", &y2);
    // Imprimindo os resultados
    printf("-------------------------------------RESULTADOS-----------------------------------------------------\n");
    printf("A distancia entre as coordenadas: %f", distancia(x1, y1, x2, y2));

    return 0;
}
float distancia(float x1,float y1, float x2, float y2)
{
    float distancia = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
    return distancia;
}