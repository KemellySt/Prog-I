#include <stdio.h>
float mediaAr(float num1, float num2);

int main()
{
    // Declarando variáveis
    float num1, num2;
    // Pedindo os numeros
    printf("========================================= Calcula a media entre dois numeros ================================================\n");
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);
    //Imprimindo resultados
    printf("====================================================== Resultados =======================================================\n");
    printf("A media [%.1f e %.1f]: %.2f", num1, num2, mediaAr(num1, num2));

    return 0;
}
float mediaAr(float num1, float num2)
{
    float media;
    media = (num1 + num2)/2;
    return  media;
}