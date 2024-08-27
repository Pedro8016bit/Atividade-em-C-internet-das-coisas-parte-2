#include <stdio.h>

// Função para realizar a busca binária em um vetor ordenado
int buscaBinaria(int vetor[], int tamanho, int valor) {
    int inicio = 0;
    int fim = tamanho - 1;

    while (inicio <= fim) {
        int meio = inicio + (fim - inicio) / 2;

        // Verifica se o valor está no meio
        if (vetor[meio] == valor) {
            return meio;
        }

        // Se o valor é maior, ignore a metade esquerda
        if (vetor[meio] < valor) {
            inicio = meio + 1;
        } 
        // Se o valor é menor, ignore a metade direita
        else {
            fim = meio - 1;
        }
    }

    // Retorna -1 se o elemento não for encontrado
    return -1;
}

int main() {
    int tamanho, valor, resultado;

    // Solicita o tamanho do vetor ao usuário
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int vetor[tamanho];

    // Solicita os elementos do vetor ao usuário
    printf("Digite os elementos do vetor em ordem crescente:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }

    // Solicita o valor a ser buscado
    printf("Digite o valor a ser buscado: ");
    scanf("%d", &valor);

    // Chama a função de busca binária
    resultado = buscaBinaria(vetor, tamanho, valor);

    // Exibe o resultado da busca
    if (resultado != -1) {
        printf("Valor %d encontrado na posição %d.\n", valor, resultado);
    } else {
        printf("Valor %d não encontrado no vetor.\n", valor);
    }

    return 0;
}

