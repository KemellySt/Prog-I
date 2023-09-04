#include <stdio.h>
#include <math.h>
float distancia(float x1,float y1, float x2, float y2);
float perimetro(float x1, float y1, float x2, float y2, float x3, float y3);
float area(float x1, float y1, float x2, float y2, float x3, float y3);
float Tipo(float x1, float y1, float x2, float y2, float x3, float y3);
float Triangulo(float x1, float y1, float x2, float y2, float x3, float y3);

int main()
{
    // Declarando as variáveis
    float x1, y1, x2, y2, x3, y3, triangulo;
    // Pedindo os valores
    printf("Digite a coordenada (x1, y1): \n");
    scanf("%f %f", &x1, &y1);
    printf("Digite a coodernada (x2, y2): \n");
    scanf("%f %f", &x2, &y2);
    printf("Digite a coordenada (x3, y3): \n");
    scanf("%f %f", &x3, &y3);
    // Imprimindo resultados
    printf("A distancia entre dois pontos: %f\n", distancia(x1, y1, x2, y2));
    if(Triangulo(x1, y1, x2, y2, x3, y3) == 1)
    {
        printf("O perimetro do triangulo formado: %f\n", perimetro(x1, y1, x2, y2, x3, y3));
        printf("A area do triangulo formado: %f\n", area(x1, y1, x2, y2, x3, y3));
        if(Tipo(x1, y1, x2, y2, x3, y3) != 0)
        {
            if(Tipo(x1, y1, x2, y2, x3, y3) == 1)
            {
                printf("Este triangulo e o equilatero.");
            }
            if(Tipo(x1, y1, x2, y2, x3, y3) == 2)
            {
                printf("Este triangulo e o isosceles.");
            }
        }
        else
        printf("Este triangulo e o escaleno.");
        
    }
    else
    printf("Não forma um triangulo!");

    return 0;
}

//Função distancia
float distancia(float x1,float y1, float x2, float y2)
{
    float distancia = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
    return distancia;
}
//Função perimetro
float perimetro(float x1, float y1, float x2, float y2, float x3, float y3)
{
    float L1, L2, L3, perimetro;
    L1 = distancia(x1, y1, x2, y2);
    L2 = distancia(x2, y2, x3, y3);
    L3 = distancia(x3, y3, x1, y1);
    perimetro = L1 + L2 + L3;
    return perimetro;
}
//Função Area
float area(float x1, float y1, float x2, float y2, float x3, float y3)
{
    float semiP, area, L1, L2, L3;
    L1 = distancia(x1, y1, x2, y2);
    L2 = distancia(x2, y2, x3, y3);
    L3 = distancia(x3, y3, x1, y1);
    semiP = (perimetro(x1, y1, x2, y2, x3, y3)/2);
    area = sqrt(semiP * ((semiP - L1) * (semiP - L2) * (semiP - L3)));
    return area;
}
//Verificando: Isóceles, Escaleno e Equilátero
float Tipo(float x1, float y1, float x2, float y2, float x3, float y3)
{
    float L1, L2, L3;
    L1 = distancia(x1, y1, x2, y2);
    L2 = distancia(x2, y2, x3, y3);
    L3 = distancia(x3, y3, x1, y1);

    if(L1 == L2 && L2 == L3)
    {
        return 1;
    }
    if(L1 == L2 || L2 == L3)
    {
        return 2;
    }
    else
        return 0;
}
float Triangulo(float x1, float y1, float x2, float y2, float x3, float y3)
{
    float L1, L2, L3;
    L1 = distancia(x1, y1, x2, y2);
    L2 = distancia(x2, y2, x3, y3);
    L3 = distancia(x3, y3, x1, y1);
    if(L1 + L2 > L3 && L2 + L3 > L1 && L3 + L1 > L2)
    {
        return 1;
    }
    else
        return 0;
}