#include <stdio.h>

// Função para realizar a busca linear em um vetor
int buscaLinear(int vetor[], int tamanho, int valor) {
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == valor) {
            return i;  // Retorna o índice do elemento encontrado
        }
    }
    return -1;  // Retorna -1 se o elemento não for encontrado
}

int main() {
    int tamanho, valor, resultado;

    // Solicita o tamanho do vetor ao usuário
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int vetor[tamanho];

    // Solicita os elementos do vetor ao usuário
    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }

    // Solicita o valor a ser buscado
    printf("Digite o valor a ser buscado: ");
    scanf("%d", &valor);

    // Chama a função de busca linear
    resultado = buscaLinear(vetor, tamanho, valor);

    // Exibe o resultado da busca
    if (resultado != -1) {
        printf("Valor %d encontrado na posição %d.\n", valor, resultado);
    } else {
        printf("Valor %d não encontrado no vetor.\n", valor);
    }

    return 0;
}

