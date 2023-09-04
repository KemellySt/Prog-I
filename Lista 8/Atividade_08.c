#include <stdio.h>
void Medidas(int lad1, int lad2, int lad3);
int TipoTriangulo(int lad1, int lad2, int lad3);
void Imprimir(int lad1, int lad2, int lad3);

int main()
{
    // Declarando as variáveis
    int lad1, lad2, lad3;
    Medidas(lad1, lad2, lad3);
    // Imprimindo os resultados
    TipoTriangulo(lad1, lad2, lad3);
    Imprimir(lad1, lad2, lad3);

    return 0;
}
void Medidas(int lad1, int lad2, int lad3)
{
    printf("=============================================== IDENTIFICADOR DE TRIANGULOS ============================================================\n");
    printf("Digite a medida do lado 1: ");
    scanf("%d", &lad1);
    printf("Digite a medida do lado 2: ");
    scanf("%d", &lad2);
    printf("Digite a medida do lado 3: ");
    scanf("%d", &lad3);
}
int TipoTriangulo(int lad1, int lad2, int lad3)
{
    int aux = 0;
    if(lad1 == lad2 && lad1 == lad3 && lad2 == lad3)
    {
        return aux = 1;
    }
    else
    {
        if(lad1 == lad2 && lad1 != lad3 && lad2 != lad3 || lad2 == lad3 && lad2 != lad1 && lad3 != lad1 || lad3 == lad1 && lad3 != lad2 && lad1 != lad2)
        {
            return aux = 2;
        }
        else
            return aux = 3;
    }
}
void Imprimir(int lad1, int lad2, int lad3)
{
    if(TipoTriangulo(lad1, lad2, lad3) == 1)
    {
        printf("Este triangulo e EQUILATERO!");
    }
    if(TipoTriangulo(lad1, lad2, lad3) == 2)
    {
        printf("Este triangulo e ISOSCELES!");
    }
    if(TipoTriangulo(lad1, lad2, lad3) == 3)
    {
        printf("Este triangulo e ESCALENO!");
    }
}