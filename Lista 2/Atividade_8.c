#include <stdio.h>
int main(){

    //Declaração as variáveis
    float Salario, SalarioM, QS;

    //Imprimindo: Salário 
    printf("Qual e o seu salario? ");
    //Lendo as informações
    scanf("%f", &Salario);

    //Imprimindo: Salário Mínimo
    printf("Quanto e o salario minimo? ");
    //Lendo as informações
    scanf("%f", &SalarioM);

    //Calculando a quantidade de salário mínimos
    QS = Salario / SalarioM;
    //Imprimindo o resultado
    printf("A quantidade de salarios minimos: %.1f", QS);

    return 0;
}