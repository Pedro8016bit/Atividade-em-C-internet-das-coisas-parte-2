#include <stdio.h>

// Função para ordenar o vetor usando o algoritmo Bubble Sort
void bubbleSort(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - 1 - i; j++) {
            if (vetor[j] > vetor[j + 1]) {
                // Troca os elementos
                int temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
}

// Função principal
int main() {
    int tamanho;

    // Solicita o tamanho do vetor ao usuário
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int vetor[tamanho];

    // Solicita os elementos do vetor ao usuário
    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }

    // Chama a função de ordenação
    bubbleSort(vetor, tamanho);

    // Exibe o vetor ordenado
    printf("Vetor ordenado em ordem crescente:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}

