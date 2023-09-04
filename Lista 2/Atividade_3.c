#include <stdio.h>
int main(){

    //Declarando as variáveis
    int numero, antecessor, sucessor;

    //Imprimindo as informações
    printf("Digite um numero: ");

    //Lendo as informações
    scanf("%d", &numero);

    //Calculando seu antecessor
    antecessor = numero - 1;

    //Calculando seu sucessor
    sucessor = numero + 1;

    //Imprimindo o resultado
    printf("O antecessor e: %d\n", antecessor);
    printf("O sucessor e: %d\n", sucessor);

    return 0;
}
