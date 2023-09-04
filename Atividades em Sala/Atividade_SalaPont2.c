#include <stdio.h>

int main() {
    
    
    int qtd_alunos;
	printf("Informe o numero de alunos: ");
	scanf("%d", &qtd_alunos);

	// cria um vetor com a quantidade de elementos informada pelo usuario, armazenada na variavel qtd_alunos
	float *notas = malloc(qtd_alunos * sizeof(float));

	for (int i = 0; i < qtd_alunos; i++) {
		printf("Nota do aluno %d: ", (i+1));
		scanf("%f", &notas[i]);
	}

	printf("\n\nNotas dos alunos: \n");
	for (int j = 0; j < qtd_alunos; j++)
		printf("Nota do aluno %d: %f\n", (j+1), notas[j] );
    
   return 0; 

}
