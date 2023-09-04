#include <stdio.h>

int main(){
//Declarando variáveis
float volume, vol_CX1, vol_CX2, vol_CX3, raio, altura, Minimo_alt4L, Minimo_Comp4L, Minimo_Comp9L, Minimo_alt9L, Minimo_alt16L, Minimo_Comp16L;
const float pi = 3.14;

//Imprimindo as informações
printf("Digite o raio: ");
//Lendo
scanf("%f", &raio);
//Imprimindo as informações
printf("Digite a altura: ");
//Lendo
scanf("%f", &altura);
//Volume da lata
volume = pi * raio * raio * altura;

//Calculando os valores mínimos para calcular 4 latas
Minimo_alt4L = altura;
Minimo_Comp4L = 4 * raio;
//Calculando os valores mínimos para calcular 
Minimo_alt9L = altura;
Minimo_Comp9L = 6 * raio;
//Calculando os valores mínimos para calcular 16 latas
Minimo_alt16L = altura;
Minimo_Comp16L = 8 * raio;
//Calculando o volume mínimo de cada caixa
vol_CX1 = Minimo_Comp4L * Minimo_Comp4L * Minimo_alt4L;
vol_CX2 = Minimo_Comp9L * Minimo_Comp9L * Minimo_alt9L;
vol_CX3 = Minimo_Comp16L * Minimo_Comp16L * Minimo_alt16L; 

// Imprimindo os resultados:
printf("O volume da lata: %.1f\n", volume);
printf("A altura minima para uma caixa contendo 4 latas: %.2f\n", Minimo_alt4L);
printf("O volume para uma caixa contendo 4 latas: %.2f\n", vol_CX1);
printf("A altura minima para uma caixa contendo 9 latas: %.2f\n", Minimo_alt9L);
printf("O volume para uma caixa contendo 9 latas: %.2f\n", vol_CX2);
printf("A altura minima para uma caixa contendo 16 latas: %.2f\n", Minimo_alt16L);
printf("O volume minimo para uma caixa contendo 16 latas: %.2f", vol_CX3);

    return 0;
}