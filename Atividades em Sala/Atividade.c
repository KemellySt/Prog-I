#include <stdio.h>
void imprime_menu();
int quadrado(int num);
int cubo(int num);
int somatorio(int num);
int fatorial(int num);

int main() {

    int numero;
    char opcao;

    do {
        imprime_menu();
        scanf(" %c", &opcao);

        switch(opcao) {

            case '1':
                printf("\nDigite o numero desejado: ");
                scanf(" %d", &numero);
                // chamando a função "quadrado" para calcular o quadrado de "numero"
                printf("Quadrado do numero: %d \n", quadrado(numero));
                break;

            case '2':
                printf("\nDigite o numero desejado: ");
                scanf(" %d", &numero);
                // chamando a função "cubo" para calcular o cubo de "numero"
                printf("Cubo do numero: %d \n", cubo(numero));
                break;

            case '3':
                printf("IMPLEMENTAR ESTA FUNCIONALIDADE!!!");
                break;

            case '4':
                printf("IMPLEMENTAR ESTA FUNCIONALIDADE!!!");
                break;

            default:
                if ((opcao != 's' && opcao != 'S'))
                    printf("ERRO: Opcao invalida.\n");
                break;
        }

    } while (! (opcao == 's' || opcao == 'S') );        // questão: quando o loop deixará de ser executado???

    return 0;
}

void imprime_menu() 
{
    //system("CLS"); // limpa a tela
    printf("Digite a opção desejada: \n");
    printf("[1] calcular o quadrado de um numero\n");
    printf("[2] calcular o cubo de um numero\n");
    printf("[3] calcular o somatorio dos numeros de 1 a n\n");
    printf("[4] calcular o fatorial de um numero\n");
    printf("[s] sair \n");
    printf("\nOpcao desejada: ");
}
int quadrado(int num) 
{
    // declaração da variável local "resultado"
    int resultado;
    resultado = num * num;
    return resultado;
}

// definição da função cubo -> recebe como parâmetro um inteiro e retorna um inteiro
int cubo(int num) {
    return num * quadrado(num);
}
